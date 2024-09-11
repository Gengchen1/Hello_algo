#include <string>
#include <vector>
#ifndef HELLO_ALGO_H

#define HELLO_ALGO_H

// 普通递归
int recur(int n);

/*尾递归*/
int tailRecur(int n, int res);

/*斐波那契数列*/
int fib(int n);

/* 使用迭代模拟递归 */
int forLoopRecur(int n);

void PrintValue(int value);

int forLoop(int n);

int whileLoop(int n);

std::string nestedForLoop(int n);

/* 常数阶 */
int constant(int n);

/* 线性阶 */
int linear(int n);

/* 平方阶 */
int quadratic(int n);

/* 平方阶 （冒泡排序） */
int bubbleSort(std::vector<int> &nums);

/* 指数阶 （循环实现） */
int exponential(int n);

/* 指数阶 （递归实现，细胞分裂） */
int expRecur(int n);

/* 对数阶 (循环实现) */ // 与指数阶相反，反映了 “每轮缩小一半” 的情况，循环次数是log2n, 即2^n的反函数
int logarithmic(int n);

/* 对数阶 （递归实现） */
int logRecur(int n);

/* 线性对数阶 （nlog2n）*/
int linearLogRecur(int n);

/* 阶乘阶 （递归实现） */
int factorialRecur(int n);

#endif
