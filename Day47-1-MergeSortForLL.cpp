// Merge Sort for Linked List
/*Given Pointer/Reference to the head of the linked list, the task is to Sort the given linked list using Merge Sort.*/

#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <stdlib.h>
#include <stdio.h>
#include <unordered_set>

using namespace std;

// Linked list Node
struct Node{
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// Function to print the linked list
void print(Node* node) {
    while (node != NULL) {
        printf("%d", node->data);
        node = node->next;
    }
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

//Function to return middle element of the linked list
Node* findmiddle(Node* head) {
    Node* slow = head;
    Node* fast = head->next;
    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

// Function to merge 2 sorted linked list
Node* merge2sort(Node* left, Node* right) {
    if (left == NULL)    return right;
    if (right == NULL)   return left;
    Node* newNode = new Node(-1);
    Node* cur = newNode;
    while (left && right) {
        if (left->data < right->data) {
            cur->next = left;
            cur = left;
            left = left->next;
        }
        else {
            cur->next = right;
            cur = right;
            right = right->next;
        }
    }
    while (left != NULL) {
        cur->next = left;
        cur = left;
        left = left->next;
    }
    while (right != NULL) {
        cur->next = right;
        cur = right;
        right = right->next;
    }
    return newNode->next;
}

// Function to apply Merge Sort in the linked list
Node* mergeSort(Node* head) {
    if (head == NULL || head->next == NULL)    return head;
    Node* middle = findmiddle(head);
    Node* left = head;
    Node* right = middle->next;
    middle->next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    Node* ans = merge2sort(left, right);
    return ans;
}


// Driver code
int main()
{   
    struct Node* a = NULL;
    long n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        push(&a, tmp);
    }

    a = mergeSort(a);
    print(a);

	return 0;
}
