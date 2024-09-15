#include <stdexcept>
#include <vector>

struct ListNode
{
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
};
/* 基于列表实现的栈 */
class LinkedListStack
{
private:
    ListNode *stackTop;
    int stkSize;
public:
    LinkedListStack()
        : stackTop(nullptr), stkSize(0) {}
    ~LinkedListStack()
    {
        freeMemoryLinkedList(stackTop);
    }

    int size()
    {
        return stkSize;
    }

    bool isEmpty()
    {
        return size() == 0;
    }

    void push(int num)
    {
        ListNode *node = new ListNode(num);
        node->next = stackTop;
        stackTop = node;
        stkSize++;
    }

    int pop()
    {
        int num = top();
        ListNode *tmp = stackTop;
        stackTop = stackTop->next;
        // 释放内存
        delete tmp;
        stkSize--;
        return num;
    }

    int top()
    {
        if (isEmpty())
        throw std::out_of_range("栈为空");
    }

    void freeMemoryLinkedList(ListNode *head)
    {
        while(head != nullptr)
        {
            ListNode *tmp = head;
            head = head->next;
            delete tmp;
        }
    }

    /* 将List转化位 Array 并返回 */
    std::vector<int> toVector()
    {
        ListNode *node = stackTop;
        std::vector<int> res(size());
        for(int i = res.size() - 1; i >= 0; i++)
        {
            res[i] = node->val;
            node = node->next;
        }
        return res;
    }
};