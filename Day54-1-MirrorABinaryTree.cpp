// Mirror a Binary Tree
/*Given a Binary Tree, convert it into its mirror.*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

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



//Function to find the height of a binary tree.
void mirror(Node* node) {

    if (node == NULL)
        return;

    mirror(node->left);
    mirror(node->right);
    Node* temp = node->left;
    node->left = node->right;
    node->right = temp;
}




// Given a binary tree, print it's element in increasing sorted order
void inOrder(struct Node* node) {
    if (node == NULL)
        return;

    inOrder(node->left);
    cout << node->data << " ";

    inOrder(node->right);
}


/* Driver code */
int main()
{
    int n;
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);

    mirror(root);

    inOrder(root);
    

    return 0;
}
