// Find the first node of loop in linked list
/*Given a singly linked list of N nodes. Find the first node of the loop if the linked list has a loop. 
If a loop is present return the node data of the first node of the loop else return -1. */

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

// Function to create Loop
void Loophere(Node* head, Node* tail, int position) 
{
    if (position == 0)
        return;

    Node* walk = head;
    for (int i = 1; i < position; i++) {
        walk = walk->next;
    }
    tail->next = walk;
}

//Function to find first node if the linked list has a loop.
int findFirstNode(Node* head)
{
    // your code here
    map<Node*, bool> visited;
    Node* temp = head;
    while (temp != NULL) {
        if (visited[temp] == true) {
            return temp->data;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return -1;
}


// Driver code
int main()
{   
    int n, num;
    cin >> n;

    Node* head, * tail;
    cin >> num;
    head = tail = new Node(num);

    for (int i = 0; i < n - 1; i++) {
        cin >> num;
        tail->next = new Node(num);
        tail = tail->next;
    }

    int pos;
    cin >> pos;
    Loophere(head, tail, pos);

    cout << findFirstNode(head);

	return 0;
}
