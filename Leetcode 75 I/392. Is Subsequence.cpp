// 392. Is Subsequence

#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
ll MOD = 1e9 + 7;
using namespace std;

class Solution
{
public:
    // This function recursively checks if string s is a subsequence of string t.
    bool isSubs(string &s, string &t, int m, int n)
    {
        // If the length of s is 0, return true.
        if (m == 0)
            return true;
        // If the length of t is 0, return false.
        if (n == 0)
            return false;
        // If the last character of s is equal to the last character of t, recursively check if s[0:m-2] is a subsequence of t[0:n-2].
        if (s[m - 1] == t[n - 1])
            return isSubs(s, t, m - 1, n - 1);
        // Else, recursively check if s[0:m-1] is a subsequence of t[0:n-2].
        return isSubs(s, t, m, n - 1);
    }

    // This function takes two strings s and t as inputs and returns a boolean value indicating if s is a subsequence of t.
    bool isSubsequence(string s, string t)
    {
        // Check if s is a subsequence of t using isSubs() and return the result.
        if (isSubs(s, t, s.length(), t.length()))
            return true;
        // If s is not a subsequence of t, return false.
        return false;
    }
    //space complexity: O(m*n) because of recursive stack space
    //time complexity: O(m*n) because of recursive calls
};

int main()
{
    return 0;
}