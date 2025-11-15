//26. Reverse a linked list.
#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Iterative method to reverse the linked list
ListNode* reverseListIterative(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;

    while (curr != NULL) {
        ListNode* nextNode = curr->next; // store next node
        curr->next = prev;               // reverse pointer
        prev = curr;                     // move prev
        curr = nextNode;                 // move curr
    }
    return prev; // prev becomes new head
}

// Recursive method to reverse the linked list
ListNode* reverseListRecursive(ListNode* head) {
    if (head == NULL || head->next == NULL)
        return head;

    ListNode* newHead = reverseListRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

// Function to print the linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Create linked list from vector
ListNode* createList(vector<int> arr) {
    if (arr.empty()) return NULL;

    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;

    for (int i = 1; i < arr.size(); i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

// Main function
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    ListNode* head = createList(arr);

    cout << "Original List: ";
    printList(head);

    // Iterative reverse
    head = reverseListIterative(head);
    cout << "Reversed List (Iterative): ";
    printList(head);

    // Reverse again using recursive method
    head = reverseListRecursive(head);
    cout << "Reversed List (Recursive): ";
    printList(head);

    return 0;
}
