struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

void insert_Node(ListNode *n0, ListNode *P)
{
    P->next = n0->next;
    n0->next = P;
};

void insert(int *nums, int size, int index, int num)
{
    for (int i = size - 1; i > index; i--)
    {
        nums[i] = nums[i - 1];
    }
    nums[index] = num;
};

int find(int *nums, int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void remove_Node(ListNode *n0)
{
    ListNode *P = n0->next;
    ListNode *n1 = P->next;
    n0->next = n1;
    delete P;
}

ListNode *access(ListNode *head, int index)
{
    for (int i = 0; i < index; i++)
    {
        if (head == nullptr)
            return nullptr;
        head = head->next;
    }
    return head;
}
int traverise(int *nums, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count += nums[i];
    }
    return count;
}

void remove(int *nums, int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        nums[i] = nums[i + 1];
    }
}

int *extend(int *nums, int size, int enlarge)
{
    int *res = new int[size + enlarge];
    for (int i = 0; i < size; i++)
    {
        res[i] = nums[i];
    }
    delete[] nums;
    return res;
}

int find_Node(ListNode *head, int target)
{
    int index = 0;
    while (head != nullptr)
    {
        if (head->val = target)
            return index;
        head = head->next;
        index++;
    }
    return -1;
}

struct ListNode_Two
{
    int val;
    ListNode_Two *next;
    ListNode_Two *prev;
    ListNode_Two(int x) : val(x), next(nullptr), prev(nullptr) {}
};

void remove_Node(ListNode *n0)
{
    if (n0->next = nullptr)
        return;
    ListNode *P = n0->next;
    ListNode *n1 = P->next;
    n0->next = n1;
    delete P;
}