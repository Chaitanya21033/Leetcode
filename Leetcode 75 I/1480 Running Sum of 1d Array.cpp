// 1480. Running Sum of 1d Array

#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
ll MOD = 1e9 + 7;
using namespace std;

class Solution
{
public:
    // This function takes a vector of integers as input and returns another vector of integers.
    vector<int> runningSum(vector<int> &nums)
    {
        // Initialize a variable to keep track of the sum.
        int sum = 0;
        // Iterate over each element in the input vector.
        for (auto &i : nums)
        {
            // Add the current element to the sum.
            sum += i;
            // Update the current element with the running sum.
            i = sum;
        }
        // Return the updated vector with running sums.
        return nums;
    }
};

//time complexity: O(n)
//space complexity: O(1)
int main()
{
    return 0;
}