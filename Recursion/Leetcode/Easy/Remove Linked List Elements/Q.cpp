// https://leetcode.com/problems/remove-linked-list-elements/description/?envType=problem-list-v2&envId=recursion


// Approach 1 — Separate Head Handling

#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

ListNode* removeElements(ListNode* head, int val) {

    // Remove matching nodes from the beginning
    if(head->val == val) {
        while (head != nullptr && head->val == val) {
            head = head->next;
        }
    }

    // Remove matching nodes from the rest of the list
    ListNode* curr = head;

    while (curr != nullptr && curr->next != nullptr) {

        if (curr->next->val == val) {
            curr->next = curr->next->next;
        }
        else {
            curr = curr->next;
        }
    }

    return head;
}

void printList(ListNode* head) {

    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {

    // 7 -> 7 -> 7 -> 7 -> 8 -> 9 -> 7 -> 3
    ListNode* head = new ListNode(7);
    head->next = new ListNode(7);
    head->next->next = new ListNode(7);
    head->next->next->next = new ListNode(7);
    head->next->next->next->next = new ListNode(8);
    head->next->next->next->next->next = new ListNode(9);
    head->next->next->next->next->next->next = new ListNode(7);
    head->next->next->next->next->next->next->next = new ListNode(3);

    int val = 7;

    head = removeElements(head, val);

    printList(head);

    return 0;
}


// Time  : O(n)
// Space : O(1)


// Approach 2 — Dummy Node

// #include <iostream>
// using namespace std;

// class ListNode {
// public:
//     int val;
//     ListNode* next;

//     ListNode(int x) {
//         val = x;
//         next = nullptr;
//     }
// };

// ListNode* removeElements(ListNode* head, int val) {

//     // Dummy node
//     ListNode dummy(0);

//     // Connect dummy to the original list
//     dummy.next = head;

//     // curr is a pointer to the dummy node
//     ListNode* curr = &dummy;

//     while (curr->next != nullptr) {

//         if (curr->next->val == val) {

//             // Skip the node that needs to be removed
//             curr->next = curr->next->next;
//         }
//         else {

//             // Move forward
//             curr = curr->next;
//         }
//     }

//     // Dummy is not part of the answer
//     return dummy.next;
// }

// void printList(ListNode* head) {

//     while (head != nullptr) {
//         cout << head->val << " ";
//         head = head->next;
//     }

//     cout << endl;
// }

// int main() {

//     // 7 -> 7 -> 7 -> 7 -> 8 -> 9 -> 7 -> 3
//     ListNode* head = new ListNode(7);
//     head->next = new ListNode(7);
//     head->next->next = new ListNode(7);
//     head->next->next->next = new ListNode(7);
//     head->next->next->next->next = new ListNode(8);
//     head->next->next->next->next->next = new ListNode(9);
//     head->next->next->next->next->next->next = new ListNode(7);
//     head->next->next->next->next->next->next->next = new ListNode(3);

//     int val = 7;

//     head = removeElements(head, val);

//     printList(head);

//     return 0;
// }

// Time  : O(n)
// Space : O(1)
