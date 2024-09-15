#include <stdexcept>
#include <iostream>
#include <vector>
using namespace  std;
/* 基于环形数组实现的队列 */
class ArrayQueue
{
private:
    vector<int> nums;
    int front;
    int queSize; // 队列长度
public:
    ArrayQueue(int capacity)
    {   
        nums.resize(capacity);
        front = queSize = 0;
    }

    int capacity()
    {
        return nums.size();
    }

    int size()
    {
        return queSize;
    }

    bool isEmpty()
    {
        return size() == 0;
    }
    
    void push(int num)
    {
        if(queSize == nums.size())
            nums.resize(2 * nums.size());
        // 计算队尾指针，指向队尾索引 + 1
        // 
        int rear = (front + queSize) % nums.size();
        nums[rear] = num;
        queSize++;
    }
    int pop()
    {
        int num = peek();
        front = (front + 1) % nums.size();
        queSize--;
        return num;
    }
    int peek()
    {
        if(isEmpty())
            throw out_of_range("队列为空");
        return nums[front];
    }
    vector<int> toVector()
    {
        return nums;
    }
};
