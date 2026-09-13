/* Merge Two Sorted Lists 

https://leetcode.com/problems/merge-two-sorted-lists/description/?envType=problem-list-v2&envId=recursion
*/


#include<bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode * next;

    ListNode(int value) {
        val = value;
        next = nullptr;
    }

    //OR
    // ListNode(int value) : val(value), next(nullptr) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

    // Dummy node helps us build the result easily
    ListNode* dummy = new ListNode(INT_MIN);
    // current always points to the last node in our result
    ListNode* current = dummy;

    while(l1 and l2) {
        if(l1->val < l2->val) {
            current -> next = l1;
            l1 = l1->next;
        }
        else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }
    if(l1) {            // OR (l1 != nullptr)
        current->next = l1;
    }
    else {
        current->next = l2;
    }
    return dummy->next; // Return the next of dummy node as it points to the head of the merged list
}

void printList(ListNode * head) {
    while(head) {     // OR (head != nullptr)
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main() {
    // List 1: 1 -> 3 -> 5
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(3);
    l1->next->next = new ListNode(5);

        // List 2: 2 -> 4 -> 6
    ListNode* l2 = new ListNode(2);
    l2->next = new ListNode(4);
    l2->next->next = new ListNode(6);

    // Merge the two lists
    ListNode* result = mergeTwoLists(l1, l2);

    // Print result
    printList(result);

    return 0;
}

/*
Time  : O(m + n)
Space : O(1)
*/