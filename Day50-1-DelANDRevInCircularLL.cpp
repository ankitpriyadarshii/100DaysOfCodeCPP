// Deletion and Reverse in Circular Linked List
/*Given a Circular Linked List of size N. The task is to delete the given node (excluding the first and last node) 
in the circular linked list and then print the reverse of the circular linked list.*/

#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <stdlib.h>
#include <stdio.h>
#include <vector>

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



/* Function to delete a given node from the list */
void deleteNode(struct Node** head, int key)
{
    Node* temp = *head;
    while (temp) {
        if (temp->next->data == key) {
            temp->next = temp->next->next;
            break;
        }
        temp = temp->next;
    }

}

/* Function to reverse the linked list */
void reverse(struct Node** head_ref)
{
    Node* head = *head_ref;
    Node* current = head->next;
    Node* prev = head;

    while (current != head) {
        // Store next
        Node* next = current->next;
        // Reverse current node's pointer
        current->next = prev;
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    current->next = prev;
    *head_ref = prev;

}

Node* pre = NULL;

/* Function to insert a node at the beginning of
a Circular linked list */

void push(struct Node** head_ref, int data)
{
    // Create a new node and make head as next
    // of it.

    struct Node* curr = new Node(data);

    curr->next = curr;

    if (*head_ref == NULL)
    {
        *head_ref = curr;
        curr->next = *head_ref;
        pre = *head_ref;

    }
    else
    {
        curr->next = *head_ref;
        pre->next = curr;
        pre = pre->next;


    }
}

/* Function to print nodes in a given
circular linked list */
void printList(struct Node* head)
{
    struct Node* temp = head;
    if (head != NULL)
    {
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);
    }
    else
        cout << "empty" << endl;

    printf("\n");
}


/* Driver code */
int main()
{

    /* Initialize lists as empty */
    int  a, delnode;
    
    pre = NULL;
    Node* head = NULL;

    int n;
    cin >> n;
    while (n--)
    {
        cin >> a;
        push(&head, a);
    }
    /* Created linked list will be 2->5->7->8->10 */
    cin >> delnode;

    deleteNode(&head, delnode);

    reverse(&head);

    printList(head);

    return 0;
}
