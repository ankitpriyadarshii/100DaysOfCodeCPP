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


// Function to print the linked list
void print(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


/* Function to return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node* head)
{
    if (head == NULL)
        return -1;

    int count = 0;
    Node* temp = head;

    while (temp != NULL)
        temp = temp->next, count++;

    count /= 2;
    temp = head;

    while (count--)
        temp = temp->next;

    return temp->data;
}

// Driver code
int main()
{   
    int N;
    cin >> N;
    int data;
    cin >> data;
    struct Node* head = new Node(data);
    struct Node* tail = head;
    for (int i = 0; i < N-1; i++) {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }

    cout << getMiddle(head);

	return 0;
}
