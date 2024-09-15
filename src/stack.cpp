#include <stack>
using namespace std;
void operator_stack()
{
/* 初始化栈 */
    stack<int> Stack;

    /* 元素入栈 */
    Stack.push(1);
    Stack.push(2);
    Stack.push(4);
    Stack.push(6);
    Stack.push(3);

    int top = Stack.top();

    Stack.pop();

    bool empty = Stack.empty();
}