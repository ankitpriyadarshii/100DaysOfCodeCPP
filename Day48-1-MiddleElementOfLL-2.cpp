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
    vector<int>v;
    Node* temp = head;
    while (temp != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next;

    }

    int N = v.size();
    if (N == 0)
        return -1;
    else
        return v[N / 2];
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
    for (int i = 1; i < N; i++) {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }

    cout << getMiddle(head);

	return 0;
}
