// Check If Circular Linked List
/*Given head, the head of a singly linked list, find if the linked list is circular or not. 
A linked list is called circular if it not NULL terminated and all nodes are connected in the form of a cycle. 
An empty linked list is considered as circular.*/

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
