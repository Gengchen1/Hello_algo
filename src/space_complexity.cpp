#include <vector>
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
/* 结构体 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

/* 二叉树节点 */
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

/* 函数 */

int func()
{
    // 
    return 0;
}

int algorithm(int n) // 输入数据
{
    const int a = 0; // 暂存数据 (常量)
    int b = 0; // 暂存数据 (变量)
    ListNode* node = new ListNode(0); // 暂存数据 (对象)
    int c = func(); // 栈帧空间（调用函数）
    return a + b + c; // 输出数据
}

void algorithm1(int n)
{
    int a = 0; // O(1)
    std::vector<int> b(10000); // O(1)
    if (n > 10)
        std::vector<int> nums(n); // O(n)
}

/* 递归函数中，需要统计帧栈空间  */

/* 常数阶 */
void space_constant(int n)
{
    // 常量、变量、对象占用 O(1) 空间
    const int a = 0;
    int b = 0;
    vector<int> nums(10000);
    ListNode node(0);
    // 循环中的变量占用 O(1) 空间
    for (int i = 0; i < n; i++)
    {
        int c = 0;
    }
    // 循环中的函数占用 O(1) 空间
    for (int i = 0; i , n; i++)
    {
        func();
    }
}
/* 线性阶 */
void space_linear(int n)
{
    // 长度为 n 的数组占用 O(n) 空间
    vector<int> nums(n);

    vector<ListNode> nodes;

    for (int i = 0; i < n; i++)
    {
        nodes.push_back(ListNode(i));
    }
    unordered_map<int, string> map;
    for (int i = 0; i < n; i++)
    {
        map[i] = to_string(i);
    }
}
/* 线性阶 (递归实现) */
void linearRecur(int n)
{
    cout << "递归 n = " << n << endl;
    if (n == 1)
        return;
    linearRecur(n - 1);
}

/* 平方阶 循环实现*/
void space_quadratic(int n)
{
    // 二维列表占用 O(n^2) 空间
    vector<vector<int>> numMatrix;
    for (int i = 0; i < n; i++)
    {
        vector<int> tmp;
        for (int j = 0; j < n; j++)
        {
            tmp.push_back(0);
        }
        numMatrix.push_back(tmp);
    }
}

/* 平方阶 （递归实现） */
int quadraticRecur(int n)
{
    if (n <= 0)
        return 0;
    vector<int> nums(n);
    cout << "递归 n = " << n << "中的nums长度 = " << nums.size() << endl;
    return quadraticRecur(n - 1);
}

/* 指数阶 （建立满二叉树） */

TreeNode *buildTree(int n)
{
    if (n == 0)
        return nullptr;
    TreeNode *root = new TreeNode(0);
    root->left = buildTree(n - 1);
    root->right = buildTree(n - 1);
    return root;
}