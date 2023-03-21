//Sum Tree
/*Given a Binary Tree. Return true if, for every node X in the tree other than the leaves, 
its value is equal to the sum of its left subtree's value and its right subtree's value. 
Else return false.

An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0. A leaf node is also considered a Sum Tree. */

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


// Returns 1 if sum property holds for the given node and both of its children 
int sum(Node* root)
{
    if (root == NULL)
        return 0;

    return sum(root->left) + root->data +
        sum(root->right);
}


// Function to return true if the binary tree is sum tree
bool isSumTree(Node* node)
{
    int ls, rs;

    // If node is NULL or it's a leaf node then return true 
    if (node == NULL || (node->left == NULL && node->right == NULL))
        return 1;

    // Get sum of nodes in left and right subtrees 
    ls = sum(node->left);
    rs = sum(node->right);

    // If the node and both of its children satisfy the property return true, else false
    if ((node->data == ls + rs) && isSumTree(node->left) && isSumTree(node->right))
        return true;

    return false;
}


/* Driver code */
int main()
{
    int n;
    Node* root = newNode(3);
    root->left = newNode(1);
    root->right = newNode(2);

    cout << isSumTree(root);
    
    return 0;
}
