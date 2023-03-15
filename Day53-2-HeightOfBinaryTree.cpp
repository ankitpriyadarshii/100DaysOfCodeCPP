// Height of Binary Tree
/*Given a binary tree, find its height.*/

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
int height(struct Node* node) {
    // code here 
    queue<Node*> q;
    q.push(node);
    int height = 0;
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Node* temp = q.front();
            q.pop();
            if (temp->left != NULL) {
                q.push(temp->left);
            }
            if (temp->right != NULL) {
                q.push(temp->right);
            }
        }
        height++;
    }
    return height;
}




/* Driver code */
int main()
{
    int n;
    Node* root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);

    int res = height(root);

    cout << res;

    return 0;
}
