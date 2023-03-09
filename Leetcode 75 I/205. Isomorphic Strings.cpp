// 205. Isomorphic Strings

#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
ll MOD = 1e9 + 7;
using namespace std;

class Solution
{
public:
    // This function takes two input strings and returns a boolean value indicating if they are isomorphic.
    bool isIsomorphic(string s, string t)
    {
        // Create an array to store the mapping of each character in string s to its corresponding character in string t.
        int hash[200] = {0};
        // Iterate over each character in string s.
        for (int i = 0; i < s.size(); i++)
        {
            // If the current character in string s is already mapped to a different character in string t, return false.
            if (hash[s[i]])
                if (hash[s[i]] != t[i])
                    return false;
            // Map the current character in string s to its corresponding character in string t.
            hash[s[i]] = t[i];
        }
        // Reset the array to store the mapping of each character in string t to its corresponding character in string s.
        for (int i = 0; i < 200; i++)
            hash[i] = 0;
        // Iterate over each character in string t.
        for (int i = 0; i < s.size(); i++)
        {
            // If the current character in string t is already mapped to a different character in string s, return false.
            if (hash[t[i]])
                if (hash[t[i]] != s[i])
                    return false;
            // Map the current character in string t to its corresponding character in string s.
            hash[t[i]] = s[i];
        }
        // If all characters in both strings are mapped to their corresponding characters in the other string, return true.
        return true;

        // Time Complexity: O(n)
        // Space Complexity: O(200) = O(1)
    }
};

int main()
{
    return 0;
}