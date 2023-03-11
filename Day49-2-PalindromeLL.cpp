// Check if Linked List is Palindrome
/*Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.*/

#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <stdlib.h>
#include <stdio.h>
#include <vector>

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



//Function to check whether the list is palindrome.
bool isPalindrome(Node* head)
{
    vector<int>v;
    Node* temp = head;
    while (temp != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next;

    }

    int size = v.size() / 2;

    for (int i = 0; i < size; i++) {
        if (v[i] != v[v.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

// Driver code
int main()
{   
    int i, n, l;
    cin >> n;
    Node* head = NULL, * tail = NULL;
    int x;
    head = new Node(x);
    tail = head;

    for (i = 1; i < n; i++) {
        cin >> l;
        tail->next = new Node(l);
        tail = tail->next;
    }

    cout << isPalindrome(head);
    
	return 0;
}
