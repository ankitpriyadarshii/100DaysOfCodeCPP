// Reverse a linked list
/*Given a linked list of N nodes. The task is to reverse this list. */

#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <stdlib.h>
#include <stdio.h>

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

// Function to return the head of reversed linked list
struct Node* reverseList(struct Node* head)
{
    // return head of reversed list
    struct Node* d = NULL;
    struct Node* next_head = head->next;
    while (next_head != NULL)
    {
        head->next = d;
        d = head;
        head = next_head;
        next_head = next_head->next;
    }
    head->next = d;
    return head;
}

// Function to print linked list
void printList (struct Node* head){
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        temp = temp->next;
    }
}



// Driver code
int main()
{   
    struct Node* head = NULL, * tail = NULL;
    int firstdata, n, l;

    cin >> n;

    cin >> firstdata;
    head = new Node(firstdata);
    tail = head;

    for (int i = 1; i < n; i++) {
        cin >> l;
        tail->next = new Node(l);
        tail = tail->next;
    }

    head = reverseList(head);

    printList(head);
    cout << endl;

	return 0;
}
