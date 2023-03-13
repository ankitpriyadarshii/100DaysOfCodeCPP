// Delete nodes having greater value on right
/*Given a singly linked list, remove all the nodes which have a greater value on their right side.*/

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

// Function to print Linked List
void print(Node* root) {
    Node* temp = root;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


//Function to delete nodes having greater value on their right side.
Node* compute(Node* head)
{
    Node* curr = head;
    while (curr->next)
    {
        if (curr->data < curr->next->data)
        {
            curr->data = curr->next->data;
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
            curr = head;
        }
        else {
            curr = curr->next;
        }
    }
    return head;
}




/* Driver code */
int main()
{
    int n;
    cin >> n;
    struct Node* head = NULL, *temp = head;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        if (head == NULL)
            head = temp = new Node(data);
        else {
            temp->next = new Node(data);
            temp = temp->next;
        }
    }

    Node* result = compute(head);
    print(result);

    return 0;
}
