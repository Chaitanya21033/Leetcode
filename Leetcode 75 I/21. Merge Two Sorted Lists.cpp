// 21. Merge Two Sorted Lists

#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
ll MOD = 1e9 + 7;
using namespace std;

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        // If the first linked list is empty, return the second linked list
        if (list1 == NULL)
            return list2;

        // If the second linked list is empty, return the first linked list
        if (list2 == NULL)
            return list1;

        // If the first element of the first linked list is less than or equal to the first element of the second linked list,
        // set the next pointer of the first node to the result of recursively calling the function with the next node of the first linked list and the second linked list.
        // Return the first linked list as the head of the merged linked list.
        if (list1->val <= list2->val)
        {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        // Otherwise, set the next pointer of the first node of the second linked list to the result of recursively calling the function with the first linked list and the next node of the second linked list.
        // Return the second linked list as the head of the merged linked list.
        else
        {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
    //space complexity: O(1) because we are not using any extra space
    //time complexity: O(n+m) because we are traversing both the linked lists
};

int main()
{
    return 0;
}