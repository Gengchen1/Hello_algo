#include <vector>
#include <chrono> // Include the necessary header file
#include <algorithm> // Include the necessary header file
#include <random> // Include the necessary header file

/* 生成一个数组，元素为 {1, 2, ..., n} , 顺序被打乱*/


std::vector<int> randomNumbers(int n)
{
    std::vector<int> nums(n);
    // 生成数组 nums = {1, 2, ...., n}
    for (int i = 0; i < n; i++)
    {
        nums[i] = i + 1;
    }
    // 使用系统时间生成随机种子
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count(); // Add std:: namespace qualifier
    std::shuffle(nums.begin(), nums.end(), std::default_random_engine(seed));
    return nums;
}

/* 查找数组 nums 中数字1所在索引 */
int findOne(std::vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        // 当元素 1 在数组头部时，达到最佳时间复杂度 O(1)
        // 当元素 1 在数组尾部时，达到最差时间复杂度 O(1)
        if (nums[i] == 1)
            return i;
    }
    return -1;
}