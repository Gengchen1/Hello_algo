#include <vector>
/* 常数阶 */
int constant(int n) 
{
    int count = 0;
    int size = 100000;
    for (int i = 0; i < size; i++)
        count++;
    return count;

}
/* 线性阶 */
int linear(int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        count++;
    return count;
}
/* 平方阶 */
int quadratic(int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            count++;
    }
    return count;
}
/* 平方阶 （冒泡排序） */
int bubbleSort(std::vector<int> &nums)
{
    int count = 0; // 计数器
    for (int i = nums.size() - 1; i > 0; i--)
    {
        // 内循环：将未排序区间 [0, i] 中的最大元素交换至该区间的最右端
        for (int j = 0; j < i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                // 交换 num[j] 与 nums[j + 1]
                int tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp; 
                count += 3; // 元素交换包含三个单元操作
            }
        }
    }
    return count;
}

/* 指数阶 （循环实现） */
int exponential(int n)
{
    int count = 0, base = 1;
    // 细胞每轮一分为二，形成数列 1，2， 4， 8， ..., 2^(n - 1)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < base; j++)
        {
            count++; // 操作数
        }
        base *= 2;
    }
    return count;
}

/* 指数阶 （递归实现，细胞分裂） */
int expRecur(int n)
{
    if (n == 1)
        return 1;
    return expRecur(n - 1) + expRecur(n - 1) + 1;
}

/* 对数阶 (循环实现) */ // 与指数阶相反，反映了 “每轮缩小一半” 的情况，循环次数是log2n, 即2^n的反函数
int logarithmic(int n)
{
    int count = 0;
    while (n > 1)
    {
        n = n / 2;
        count++;
    }
    return count;
}

/* 对数阶 （递归实现） */
int logRecur(int n)
{
    if (n <= 1)
        return 0;
    return logRecur(n / 2) + 1;
}

/* 线性对数阶 （nlog2n）*/
int linearLogRecur(int n)
{
    if (n <= 1)
        return 1;
    int count = linearLogRecur(n / 2) + linearLogRecur(n / 2); // 这里是每次分裂2，但是每个又除以2.
    // 除以2，代表一共有1+log2n层。每层又会把返回值*2
    for(int i = 0; i < n; i++)
    {
        count++; // 这里代表了n是多少就操作多少次。
    }
    return count; // count 作为返回值，就利用起来了用两个递归达到 * 2的效果。
    // 最终就相当于每个递归函数都把n/2，然后递归函数又会*2，所以n一直/2到终止条件，但是也加了n个。相当于每一层都是n。
    // 然后层数✖操作数就是总操作数。
}
/* 阶乘阶 （递归实现） */
int factorialRecur(int n)
{
    if (n == 0)
        return 1;
    int count = 0;
    // 从 1 个中分裂出n个
    for (int i = 0; i < n; i++)
    {
        count += factorialRecur(n - 1); // 第一层 n 个 递归函数相加，第二层n-1个，知道最后每个节点到终止条件都返回1
        //所以操作数就是最后一层节点数。
    }
    return count;
}