#include <vector>
#include <iostream>
#include <stdexcept>
using namespace std;
/* 基于环形数组实现的双向队列 */
class ArrayDeque
{
private:
    vector<int> nums;
    int front;
    int queSize;
public:
    ArrayDeque(int capacity)
    {
        nums.resize(capacity);
        front = queSize = 0;
    }
    
    int capacity()
    {
        return nums.size();
    }

    bool isEmpty()
    {
        return queSize == 0;
    }

    /* 计算环形数组索引 */
    int index(int i)
    {
        // 通过取余操作实现数组首尾相连
        // 当i越过数组尾部后，回到头部
        // 当i越过数组头部后，回到尾部
        return (i + capacity()) % capacity();
        // + capacity 是因为当 front = 0时， front -1 = -1, 而我们想使其回到数组尾部
    }

    void pushFirst(int num)
    {
        if (queSize == capacity())
        {
            cout << "双向队列已满" << endl;
            return;
        }
        front = index(front - 1);
        // 将 num 添加至队首
        nums[front] = num;
        queSize++;
    }

    void pushLast(int num)
    {
        if(queSize == capacity())
        {
            cout << "双向队列已满" << endl;
            return;
        }
        int rear = index(front + queSize);
        nums[rear] = num;
        queSize++;
    }

    int popFirst()
    {
        int num = peekFirst();
        front = index(front + 1);
        queSize--;
        return num;
    }
    
    int popLast()
    {
        int num = peekLast();
        queSize--;
        return num;
    }

    int peekFirst()
    {
        if(isEmpty())
        {
            throw out_of_range("双向队列为空");
        }
        return nums[front];
    }
    int peekLast()
    {
        if(isEmpty())
            throw out_of_range("双向队列为空");
        int last = index(front + queSize - 1);
        return nums[last];
    }
    vector<int> toVector()
    {
        vector<int> res(queSize);
        for(int i = 0, j = front; i < queSize; i++, j++)
        {
            res[i] = nums[index(j)];
        }
        return res;
    }
};