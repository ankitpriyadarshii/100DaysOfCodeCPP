// Finding middle element in a linked list
/*Given a singly linked list of N nodes.
The task is to find the middle of the linked list.*/

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



/* Function to return true if linked list is circular, else false */
bool isCircular(Node* head)
{
    Node* curr = head;

    while (curr != NULL) {
        if (curr->next == head) {
            return true;
        }
        curr = curr->next;
    }
    return false;
}

// Driver code
int main()
{   
    int i, n, k;
    cin >> n >> k;
    Node* head = NULL, * tail = NULL;
    int x;
    head = new Node(x);
    tail = head;

    for (i = 0; i < n-1; i++) {
        cin >> x;
        tail->next = new Node(x);
        tail = tail->next;
    }

    if (k == 1 && n >= 1) {
        tail->next = head;
    }

    cout << isCircular(head);
    
	return 0;
}
