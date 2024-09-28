#include <vector>
#include <iostream>
#include <string>
struct Pair
{
    int _key;
    std::string _val;
    Pair(int key, std::string val) : _key(key), _val(val) {}
};
/* 开放寻址 */
class HashMapOpenAddressing
{
private:
    int size;                             // 键值对数量
    int capacity = 4;                     // 哈希表容量
    const double loadThres = 2.0 / 3.0;   // 负载因子阀值
    const int extendRatio = 2;            // 扩容倍数
    std::vector<Pair *> buckets;          // 桶数组
    Pair *TOMBSTNOE = new Pair(-1, "-1"); // 删除标记

public:
    HashMapOpenAddressing() : size(0), buckets(capacity, nullptr) {}
    ~HashMapOpenAddressing()
    {
        for (Pair *pair : buckets)
        {
            if (pair != nullptr && pair != TOMBSTNOE)
                delete pair;
        }
        delete TOMBSTNOE;
    }

    int hashFunc(int key)
    {
        return key % capacity;
    }

    double loadFactor()
    {
        return (double)size / capacity;
    }
    /* 搜索 key 对应的桶索引 */
    int findBucket(int key)
    {
        int index = hashFunc(key);
        int firstTombstone = -1;

        // 线性探测，当遇到空桶时跳出
        while (buckets[index] != nullptr)
        {
            if (buckets[index]->_key == key)
            {
                // 若之前遇到了删除标记，则将键值对移动至该索引处
                if (firstTombstone != -1)
                {
                    buckets[firstTombstone] = buckets[index];
                    buckets[index] = TOMBSTNOE;
                    return firstTombstone; // 返回移动后的桶索引
                }
                return index;
            }
            // 记录遇到的首个删除标记
            if (firstTombstone == -1 && buckets[index] == TOMBSTNOE)
            {
                firstTombstone = index;
            }
            // 计算桶索引，越过尾部则返回头部
            index = (index + 1) % capacity; // + 1代表继续搜索，搜索步长为1.
        }
        // 有两种情况：1. firstTomstone 不等于-1，则返回第一个被删除桶的位置，用于插入新的键值对
        // 2. 原始的跳出while循环的index，即第一个(None)空的桶的位置。
        return firstTombstone == -1 ? index : firstTombstone;
    }
    /* 查询操作 */
    std::string get(int key)
    {
        int index = findBucket(key);
        if (buckets[index] != nullptr && buckets[index] != TOMBSTNOE)
            return buckets[index]->_val;
        // 若键值对不存在，则返回空字符串
        return "";
    }

    /* 添加操作 */

    void put(int key, std::string val)
    {
        // 负载因子超过阀值时，执行扩容
        if (loadFactor() > loadThres)
        {
            extend();
        }

        // 搜索 key 对应的桶索引
        int index = findBucket(key);
        if (buckets[index] != nullptr && buckets[index] != TOMBSTNOE)
        {
            buckets[index]->_val = val;
            return;
        }
        buckets[index] = new Pair(key, val);
        size++;
    }
    /* 删除操作 */
    void remove(int key)
    {
        int index = findBucket(key);
        if (buckets[index] != nullptr &&  buckets[index] != TOMBSTNOE)
        {
            delete buckets[index];
            buckets[index] = TOMBSTNOE;
            size--;
        }
    }
    /* 扩容哈希表 */
    void extend()
    {
        // 暂存哈希表
        std::vector<Pair *> bucketsTmp = buckets;
        // 初始化新扩容的新哈希表
        capacity *= extendRatio;
        buckets = std::vector<Pair *>(capacity, nullptr);
        size = 0;
        // 将键值对从原哈希表搬运至新哈系表
        for (Pair *pair : bucketsTmp)
        {
            if (pair != nullptr && pair != TOMBSTNOE)
            {
                put(pair->_key, pair->_val);
                delete pair;
            }
        }
    }

    /* 打印哈希表 */
    void print()
    {
        for (Pair *pair : buckets)
        {
            if (pair == nullptr)
            {
                std::cout << "nullptr" << std::endl;
            } else if (pair == TOMBSTNOE)
            {
                std::cout << "TOMBSTONE" << std::endl;
            } else 
            {
                std::cout << pair->_key << "->" << pair->_val << std::endl;
            }
        }
    }
};