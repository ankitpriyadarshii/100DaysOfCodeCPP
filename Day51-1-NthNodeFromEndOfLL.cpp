// Nth node from end of linked list
/*Given a linked list consisting of L nodes and given a number N. 
The task is to find the Nth node from the end of the linked list.*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

// Linked List Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* start = NULL;


//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node* head, int n)
{
    // Your code here
    Node* ptr = head;
    int count = 0;
    while (ptr != NULL) {
        ptr = ptr->next;
        count++;

    }
    int index = count - n;
    if (index < 0) {
        return -1;
    }
    ptr = head;
    while (index--)
    {
        ptr = ptr->next;

    }
    return ptr->data;
}




/* Driver code */
int main()
{
    int i, n, l, N;
    struct Node* head = NULL, * tail = NULL;
    cin >> n >> N;
    int f;
    cin >> f;
    head = new Node(f);
    tail = head;
    for (i = 0; i < n-1; i++) {
        cin >> l;
        tail->next = new Node(l);
        tail = tail->next;
    }

    cout << getNthFromLast(head, N);

    return 0;
}
