// Detect Loop in linked list
/*Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop. */

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

//Function to check if the linked list has a loop.
bool detectLoop(Node* head)
{
    // your code here
    unordered_set<Node*> s;
    while (head != NULL) {
        if (s.find(head) != s.end())
            return true;
        s.insert(head);
        head = head->next;
    }
    return false;
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

    if (detectLoop(head))
        cout << "TRUE";
    else
        cout << "FALSE";

	return 0;
}
