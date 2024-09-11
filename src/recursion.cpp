// #include <iostream>
// #include <string>
#include <stack>


// 普通递归
int recur(int n)
{
    // 终止条件
    if (n == 1)
        return 1;
    int res = recur(n - 1); // 递：递归调用
    return n + res; // 归：返回结果
}

/*尾递归*/
int tailRecur(int n, int res)
{
    // 终止条件
    if (n == 0)
        return res;
    // 尾递归调用
    return tailRecur(n - 1, res + n);
}

/*斐波那契数列*/
int fib(int n)
{
    // 终止条件 f(1) = 0, f(2) = 1
    if (n == 1 || n == 2)
        return n - 1;
    // 递归调用 f(n) = f(n - 1) + f(n - 2)
    int res = fib(n - 1) + fib(n - 2);
    // 返回结果 f(n)
    return res;
}

/*使用一个显式的栈来模拟调用栈的行为*/
/* 使用迭代模拟递归 */
int forLoopRecur(int n) 
{
    // 使用一个显式的栈来模拟系统调用栈
    std::stack<int> stk;
    int res = 0;
    // 递：递归调用
    for (int i = n; i > 0; i--)
    {
        // 通过 “入栈操作”, 模拟 “递”
        stk.push(i);
    }
    // 归：返回结果
    while (!stk.empty())
    {
        // 通过 “出栈操作” 模拟 “归”
        res += stk.top(); // 获取栈顶的元素，将其添加到 res 变量中，然后从栈中移除这个元素。
        stk.pop(); // 移除栈顶元素
    }
    // res = 1 + 2 + 3 + ... + n
    return res;
}



// int main()
// {
//     PrintValue(recur(100)); 
//     PrintValue(tailRecur(100, 0));
//     PrintValue(fib(10));
//     PrintValue(forLoopRecur(100));
//     std::cin.get();
// }
