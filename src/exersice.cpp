struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *access(ListNode *head, int index)
{
    for(int i = 0; i < index; i++)
    {
        if(head == nullptr)
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

int* extend(int *nums, int size, int enlarge)
{
    int *res = new int[size + enlarge];
    for(int i = 0; i < size; i++)
    {
        res[i] = nums[i];
    }
    delete[] nums;
    return res; 
}

ListNode* access(ListNode *head, int index)
{
    for(int i = 0; i < index; i++)
    {
        if(head == nullptr)
            return nullptr;
        head = head->next;
    }
    return head;
}

void insert_node(ListNode *n0, ListNode *P)
{
    ListNode *n1 = n0->next;
    P->next = n1; 
    n0->next = P;
}

struct ListNode_2
{
    int val;
    ListNode_2 *next;
    ListNode_2 *prev;
    ListNode_2(int x) : val(x), next(nullptr), prev(nullptr) {}
};