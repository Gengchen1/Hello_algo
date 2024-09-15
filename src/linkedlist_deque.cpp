#include <stdexcept>
#include <vector>
using namespace std;
/* 双向链表节点 */
struct DoubleListNode
{
    int m_val;
    DoubleListNode *next;
    DoubleListNode *prev;
    DoubleListNode(int val) : m_val(val), prev(nullptr), next(nullptr) {}
};
/* 基于双向链表实现的双向队列 */
class LinkedListDeque
{
private:
    DoubleListNode *front, *rear;
    int queSize = 0;
public:
    LinkedListDeque() : front(nullptr), rear(nullptr) {}
    ~LinkedListDeque()
    {
        DoubleListNode *pre, *cur = front;
        while(cur != nullptr)
        {
            pre = cur;
            cur = cur->next;
            delete pre;
        }
    }
    int size()
    {
        return queSize;
    }

    bool isEmpty()
    {
        return size() == 0;
    }
    void push(int num, bool isFront)
    {
        DoubleListNode *node = new DoubleListNode(num);
        if(isEmpty())
            front = rear = node;
        else if (isFront)
        {
        // 队首入队操作
            // 将 node 添加至链表头部
            front->prev = node;
            node->next = front;
            front = node;
        }
        else
        {
            // 将node添加至链表尾部
            rear->next = node;
            node->prev = rear;     
            rear = node;
        }
        queSize++;
    }
    // 队首入队
    void pushFirst(int num)
    {
        push(num, true);
    }
    // 队尾入队
    void pushLast(int num)
    {
        push(num, false);
    }
    /* 出队操作 */
    int pop(bool isFront)
    {
        if(isEmpty())
            throw out_of_range("对列为空");
        int val;
        if(isFront)
        {
            val = front->m_val;
            DoubleListNode *fNext = front->next;
            if(fNext != nullptr)
            {
                fNext->prev = nullptr;
                front->next = nullptr;
            }
            delete front;
            rear = fNext; // 更新尾节点
        }
        else
        {
            val = rear->m_val;
            DoubleListNode *rPrev = rear->prev;
            if (rPrev != nullptr)
            {
                rPrev->next = nullptr;
                rear->prev = nullptr;
            }
            delete rear;
            rear = rPrev;
        }
        queSize--;
        return val;
    }
    /* 队首出队 */
    int popFirst()
    {
        return pop(true);
    }
    
    int popLast()
    {
        return pop(false);
    }
    
    int peekFirst()
    {
        if (isEmpty())
            throw out_of_range("双向队列为空");
        return front->m_val;
    }

    int peekLast()
    {
        if(isEmpty())
            throw out_of_range("双向队列为空");
        return rear->m_val;
    }
    vector<int> toVector()
    {
        DoubleListNode *node = front;
        vector<int> res(size());
        for (int i = 0; i < res.size(); i++)
        {
            res[i] = node->m_val;
            node = node->next;
        }
        return res;
    }
};
