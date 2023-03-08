// Intersection of two sorted Linked lists
/*Given two linked lists sorted in increasing order, create a new linked list representing the intersection of the two linked lists. 
The new linked list should be made with its own memory the original lists should not be changed.*/

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


Node* inputList(int size) {
    Node* head, * tail;
    int val;
    cin >> val;
    head = tail = new Node(val);
    while (--size) {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
}

// Function to print the linked list
void print(Node* n) {

    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
}

//Function to return linked list of intersection elements.
Node* findIntersection(Node* head1, Node* head2)
{
    Node* t1 = head1;
    Node* t2 = head2;
    Node* ans = new Node(-1);
    Node* t3 = ans;
    unordered_map<int, int>mp;
    while (t1) {
        mp[t1->data]++;
        t1 = t1->next;
    }
    while (t2) {
        if (mp[t2->data] > 0) {
            t3->next = new Node(t2->data);
            t3 = t3->next;
            mp[t2->data]--;
        }
        t2 = t2->next;
    }
    return ans->next;
}


// Driver code
int main()
{   
    int N, M;
    cin >> N >> M;
    Node* head1 = inputList(N);
    Node* head2 = inputList(M);

    Node* result = findIntersection(head1, head2);

    print(result);

	return 0;
}
