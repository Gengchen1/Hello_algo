struct ListNode
{
    int m_val;
    ListNode *next;
    ListNode(int val) : m_val(val), next(nullptr) {}
};

ListNode *access(ListNode *head, int index)
{
    for(int i = 0; i < index; i++)
    {
        if(!head)
            return nullptr;
        head = head->next;
    }
    return head;
}
void insert(int *nums, int size, int index, int num)
{
    for(int i = size - 1; i > index; i--)
    {
        nums[i] = nums[i - 1];
    }
    nums[index] = num;
}

int find(int *nums, int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(nums[i] == target)
            return i;
    }
    return -1;
}

int *extend(int *nums, int size, int enlarge)
{
    int *res = new int(size + enlarge);
    for(int i = 0; i < size; i++)
    {
        res[i] = nums[i];
    }
    delete[] nums;
    return res;
}

void insert_Node(ListNode *n0, ListNode *P)
{
    P->next = n0->next;
    n0->next = P;
}

void removeNode(ListNode *n0)
{
    if(!n0->next)
        return;
    ListNode *P = n0->next;
    n0->next = n0->next->next;
    delete P;
}

ListNode *access1(ListNode *head, int index)
{
    for(int i = 0; i < index; ++i)
    {
        if(!head)
            return nullptr;
        head = head->next;
    }
    return head;
}

int find_Node(ListNode *head, int target)
{
    int index = 0;
    while(head)
    {
        if(head->m_val == target)
        {
            return index;
        }
        head = head->next;
        index++;
    }
}

struct DoubleListNode
{
    int m_val;
    DoubleListNode *next;
    DoubleListNode *prev;
    DoubleListNode(int val) : m_val(val), next(nullptr), prev(nullptr) {}
};

void remove(int *nums, int size, int index)
{
    for(int i = index; i < size - 1; i++)
    {
        nums[i] = nums[i + 1];
    }
}