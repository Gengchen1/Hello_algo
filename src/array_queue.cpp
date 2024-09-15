#include <stdexcept>
#include <iostream>
#include <vector>
using namespace  std;
/* 基于环形数组实现的队列 */
class ArrayQueue
{
private:
    int *nums;
    int front;
    int queSize; // 队列长度
    int queCapacity; // 队列容量
public:
    ArrayQueue(int capacity)
    {
        nums = new int[capacity];
        queCapacity = capacity;
        front = queSize = 0;
    }
    ~ArrayQueue()
    {
        delete[] nums;
    }

    int capacity()
    {
        return queCapacity;
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
        if (queSize == queCapacity)
        {
            cout << "队列已满" << endl;
            return;
        }
        // 计算队尾指针，指向队尾索引 + 1
        // 
        int rear = (front + queSize) % queCapacity;
        nums[rear] = num;
        queSize++;
    }
    int pop()
    {
        int num = peek();
        front = (front + 1) % queCapacity;
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
        vector<int> arr(queSize);
        for(int i = 0, j = front; i < queSize; i++, j++)
        {
            arr[i] = nums[j % queCapacity];
        }
        return arr;
    }
};
