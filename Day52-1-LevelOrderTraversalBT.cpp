// Level order traversal
/*Given a binary tree, find its level order traversal.
Level order traversal of a tree is breadth-first traversal for the tree.*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

// Binary Tree Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create new node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}



//Function to return the level order traversal of a tree.
vector<int> levelOrder(Node* node)
{
    vector<int> ans;
    queue<Node*> q;
    q.push(node);

    while (q.empty() == false) {
        // Print front of queue and remove it from queue
        Node* temp = q.front();
        q.pop();

        /* Enqueue left child */
        if (temp->left)
            q.push(temp->left);

        /*Enqueue right child */
        if (temp->right)
            q.push(temp->right);

        ans.push_back(temp->data);
    }

    return ans;
}




/* Driver code */
int main()
{
    int n;
    Node* root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(40);
    root->left->right = newNode(60);

    vector<int> res = levelOrder(root);

    for (int i : res)
        cout << i << " ";

    return 0;
}
