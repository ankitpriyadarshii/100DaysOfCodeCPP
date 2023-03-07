// Remove duplicates from an unsorted linked list
/*Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List. 
When a value appears in multiple nodes, the node which appeared first should be kept, all others duplicates are to be removed. */

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
void print(Node* root) {

    Node* temp = root;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

//Function to remove duplicates from unsorted linked list.
Node* removeDuplicates(Node* head)
{
    unordered_set<int> seen;

    struct Node* curr = head;
    struct Node* prev = NULL;
    while (curr != NULL) {
        // If current value is seen before
        if (seen.find(curr->data) != seen.end()) {
            prev->next = curr->next;
            delete (curr);
        }
        else {
            seen.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
    }

    return head;
}


// Driver code
int main()
{   
    int N;
    cin >> N;
    Node* head = NULL;
    Node* temp = head;

    for (int i = 0; i < N; i++) {
        int data;
        cin >> data;
        if (head == NULL)
            head = temp = new Node(data);
        else
        {
            temp->next = new Node(data);
            temp = temp->next;
        }
    }

    Node* result = removeDuplicates(head);
    print(result);

	return 0;
}
