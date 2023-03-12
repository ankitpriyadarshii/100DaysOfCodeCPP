// Given a linked list of 0s, 1s and 2s, sort it.
/*Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list 
such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.*/

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


// Function to sort the Linked List
Node* segregate(Node* head) {

    Node* temp = head;
    vector<int>v;

    while (temp != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next;

    }
    sort(v.begin(), v.end());
    temp = head;
    int i = 0;
    while (temp != NULL)
    {
        temp->data = v[i++];
        temp = temp->next;
    }
    return head;

}


/* Function to print nodes in a given linked list */
void printList(struct Node* Node)
{
    while (Node != NULL) {
        cout << Node->data;
        Node = Node->next;
    }
    cout << ("\n");
}

/* Function to insert a node at the beginning of linked list */
void insert(int n1) {
    int n, value, i;
    n = n1;
    struct Node* temp;
    for (i = 0; i < n; i++) {
        cin >> value;
        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        }
        else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}



/* Driver code */
int main()
{
    int n;
    cin >> n;
    insert(n);
    
    struct Node* newHead = segregate(start);
    printList(newHead);

    return 0;
}
// Given a linked list of 0s, 1s and 2s, sort it.
/*Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list 
such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.*/

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


// Function to sort the Linked List
Node* segregate(Node* head) {

    Node* temp = head;
    vector<int>v;

    while (temp != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next;

    }
    sort(v.begin(), v.end());
    temp = head;
    int i = 0;
    while (temp != NULL)
    {
        temp->data = v[i++];
        temp = temp->next;
    }
    return head;

}


/* Function to print nodes in a given linked list */
void printList(struct Node* Node)
{
    while (Node != NULL) {
        cout << Node->data;
        Node = Node->next;
    }
    cout << ("\n");
}

/* Function to insert a node at the beginning of linked list */
void insert(int n1) {
    int n, value, i;
    n = n1;
    struct Node* temp;
    for (i = 0; i < n; i++) {
        cin >> value;
        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        }
        else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}



/* Driver code */
int main()
{
    int n;
    cin >> n;
    insert(n);
    
    struct Node* newHead = segregate(start);
    printList(newHead);

    return 0;
}
