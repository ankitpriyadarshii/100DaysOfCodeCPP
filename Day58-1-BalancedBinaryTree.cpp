//Check for Balanced Binary Tree
/*Given a binary tree, find if it is height balanced or not. 
A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree. */

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

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


//Function to check whether a binary tree is balanced or not.
int Balanced(Node* root) {
    if (root == NULL) {
        return false;
    }
    int lh = Balanced(root->left);
    if (lh == -1) {
        return-1;
    }
    int rh = Balanced(root->right);
    if (rh == -1) {
        return -1;
    }
    if (abs(lh - rh) > 1)return -1;
    else
        return max(lh, rh) + 1;
}


//Function to return true or false based on result.
bool isBalanced(Node* root)
{
    if (Balanced(root) == -1)
        return false;
    else
        return true;
}


/* Driver code */
int main()
{
    int n;
    Node* root = newNode(10);
    root->left = newNode(20);
    root->left->left = newNode(40);
    root->left->right = newNode(60);

    cout << isBalanced(root);
    

    return 0;
}
