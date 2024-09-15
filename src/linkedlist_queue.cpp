#include <vector>
#include <stdexcept>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class LinkedListQueue
{
private:
    ListNode *front, *rear;
    int queSize;
public:
    LinkedListQueue()
        : front(nullptr), rear(nullptr), queSize(0) {}
    ~LinkedListQueue()
    {
        freeMemoryLinkedList(front);
    }

    void freeMemoryLinkedList(ListNode *head)
    {
        while(head != nullptr)
        {
            ListNode *tmp = head;
            head = head->next;
            delete head;
        }
        return;
    }

    int size()
    {
        return queSize;
    }

    bool isEmpty()
    {
        return queSize == 0;
    }

    void push(int num)
    {
        ListNode *node = new ListNode(num);
        if(front == nullptr)
        {
            front = node;
            rear = node;
        }
        else 
        {
            rear->next = node;
            rear = node;
        }
        queSize++;
    }

    int pop()
    {
        int num = peek();
        // 删除头节点
        ListNode *tmp = front;
        front = front->next;
        delete tmp;
        queSize--;
        return num;
    }

    int peek()
    {
        if(size() == 0)
            throw out_of_range("队列为空");
        return front->val;
    }
    /* 将链表转化为 Vector 并返回 */
    vector<int> toVector()
    {
        ListNode *node = front;
        vector<int> res(size());
        for(int i = 0; i < res.size(); i++)
        {
            res[i] = node->val;
            node = node->next;
        }
        return res;
    }
};