#include <vector>
#include <iostream>
#include <string>
/* 键值对 */
struct Pair
{
public:
    int key;
    std::string val;
    Pair(int key, std::string val) : key(key), val(val) {}
};

/* 基于数组实现的哈希表 */
class ArrayHashMap
{
private:
    std::vector<Pair *> buckets;
public:
    /* 初始化 */
    ArrayHashMap()
    {
        buckets = std::vector<Pair *>(100);
    }
    /* 释放内存 */
    ~ArrayHashMap()
    {
        for(const auto &bucket : buckets)  // 这里使用引用就减少了复制
        {
            delete bucket;
        }
        buckets.clear();
    }
    /* 哈希函数 */
    int hashFunc(int key)
    {
        int index = key % 100;
        return index;
    }
    /* 查询操作 */
    std::string get(int key)
    {
        int index = hashFunc(key);
        Pair *pair = buckets[index];
        if(!pair)
            return " ";
        return pair->val;
    }
    /* 添加操作 */
    void put(int key, std::string val)
    {
        Pair *pair = new Pair(key, val);
        int index = hashFunc(key);
        buckets[index] = pair;
    }

    /* 删除操作 */
    void remove(int key)
    {
        int index = hashFunc(key);
        delete buckets[index];
        buckets[index] = nullptr;
    }

    /* 获取所有键值对 */
    std::vector<Pair *> pairset()
    {
        std::vector<Pair *> pairset;
        for (Pair *pair : buckets)
        {
            if(pair)
                pairset.push_back(pair);
        }
        return pairset;
    }
    /* 获取所有的键 */
    std::vector<int> keySet()
    {
        std::vector<int> keySet;
        for (auto &pair : buckets)
        {
            if(pair)
                keySet.push_back(pair->key);
        }
        return keySet;
    } 

    /* 获取所有的值 */
    std::vector<std::string> valueSet()
    {
        std::vector<std::string> valueSet;
        for (auto &pair : buckets)
        {
            if(pair)
                valueSet.push_back(pair->val);
        }
        return valueSet;
    }

    /* 打印哈希表 */
    void print()
    {
        for(Pair *kv : buckets)
        {
            std::cout << kv->key << " -> " << kv->val << std::endl; 
        }
    }
};