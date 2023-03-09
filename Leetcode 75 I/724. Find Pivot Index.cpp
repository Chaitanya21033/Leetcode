// 724. Find Pivot Index

#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
ll MOD = 1e9 + 7;
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        // Create two vectors of integers to store the prefix and postfix sums.
        vector<int> pre(nums.size());
        vector<int> pos(nums.size());

        // Initialize the first element of the prefix sum vector to zero.
        pre[0] = 0;

        // Initialize the last element of the postfix sum vector to zero.
        pos[nums.size() - 1] = 0;

        // Calculate the prefix sum for each element in the input vector.
        for (int i = 1; i < nums.size(); i++)
            pre[i] = nums[i - 1] + pre[i - 1];

        // Calculate the postfix sum for each element in the input vector.
        for (int i = nums.size() - 2; i >= 0; i--)
            pos[i] = pos[i + 1] + nums[i + 1];

        // Iterate over each element in the input vector and check if the prefix and postfix sums are equal.
        // If so, return the index of that element.
        for (int i = 0; i < nums.size(); i++)
            if (pos[i] == pre[i])
                return i;

        // If no element is found such that the prefix and postfix sums are equal, return -1.
        return -1;

        // space complexity O(n)
        // time complexity O(n)
    }
};

int main()
{
    return 0;
}