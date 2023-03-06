// Remove duplicate element from sorted Linked List
/*Given a singly linked list consisting of N nodes. 
The task is to remove duplicates (nodes with duplicate values) from the given list (if exists). */

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


//Function to remove duplicates from sorted linked list.
Node* removeDuplicates(Node* head)
{
    map<int, int> ans;
    while (head != NULL) {
        ans[head->data]++;
        head = head->next;
    }
    for (auto i : ans) {
        cout << i.first << " ";
    }
    return head;
}


// Driver code
int main()
{   
    int N;
    cin >> N;
    Node* head = NULL;
    Node* temp = head;

    for (int i = 0; i < N; i++) {
        int data;
        cin >> data;
        if (head == NULL)
            head = temp = new Node(data);
        else
        {
            temp->next = new Node(data);
            temp = temp->next;
        }
    }

    removeDuplicates(head);
    
	return 0;
}
