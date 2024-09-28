#include <vector>
#include <iostream>
#include <string>
struct Pair
{
    int key;
    std::string val;
    Pair(int key, std::string val) : key(key), val(val) {}
};
/* 链式地址哈希表 */
class HashMapChaining
{
private:
    int size;                                 // 键值对数量
    int capacity;                             // 哈希表容量
    double loadThres;                         // 触发扩容的负载因子
    int extendRatio;                          // 扩容倍数
    std::vector<std::vector<Pair *>> buckets; // 桶组数，每个桶同样是一个vector;

public:
    /* 构造方法 */
    HashMapChaining()
        : size(0), capacity(4), loadThres(2.0 / 3.0), extendRatio(2)
    {
        buckets.resize(capacity);
    }
    ~HashMapChaining()
    {
        for (auto &bucket : buckets)
        {
            for (Pair *pair : bucket)
            delete pair;
        }
    }
    /* 哈希函数 */
    int hashFunc(int key)
    {
        return key % capacity;
    }

    /* 负载因子 */
    double loadFactor()
    {
        return (double)size / (double)capacity;
    }

    /* 查询操作 */
    std::string get(int key)
    {
        int index = hashFunc(key);
        for (Pair *pair : buckets[index])
        {
            if(pair->key == key)
            return pair->val;
        }
        return "";
    }
    
    /* 添加操作 */
    void put(int key, std::string val)
    {
        // 当负载因子超出阀值时，执行扩容
        if (loadFactor() > loadThres)
            extend();
        int index = hashFunc(key);
        // 遍历桶，若遇到指定 key, 则更新对应val 并返回
        for (Pair *pair : buckets[index])
        {
            if(pair->key == key)
            {
                pair->val = val;
                return;
            }
        }
        // 若无对应的key, 则将键值对添加至尾部
        buckets[index].push_back(new Pair(key,val));
        size++;
    }

    /* 删除操作 */
    void remove(int key)
    {
        int index = hashFunc(key);
        auto &bucket = buckets[index];
        // 遍历桶，从中删除键值对
        for (int i = 0; i < bucket.size(); i++)
        {
            if (bucket[i]->key == key)
            {
                Pair *tmp = bucket[i];
                bucket.erase(bucket.begin() + i); //先把桶里面的对象从桶中清除
                delete tmp; // 然后把对象指针本身也释放了。
                size --;
                return;
            }
        }
    }

    /* 扩容哈希表 */
    void extend()
    {
        // 暂存原哈希表
        std::vector<std::vector<Pair *>> bucketsTmp = buckets;
        // 初始化扩容后的新哈希表
        capacity *= extendRatio;
        buckets.clear();
        buckets.resize(capacity);
        size = 0;    
        // 将键值对从原哈希表搬运至新哈希表
        for (auto &bucket : bucketsTmp)
        {
            for (Pair *pair : bucket)
            {
                put(pair->key, pair->val);
                delete pair;
            }
        }
    }

    /* 打印哈希表 */
    void print()
    {
        for (auto &bucket : buckets)
        {
            std::cout << "[ ";
            for (Pair *pair : bucket)
            {
                std::cout << pair->key << " -> " << pair->val << ", ";
            }
            std::cout << "]/n";
        }
    }
};
