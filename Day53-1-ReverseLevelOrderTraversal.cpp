// Reverse Level Order Traversal
/*Given a binary tree of size N, find its reverse level order traversal. 
ie- the traversal must begin from the last level.*/

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



//Function to return the reverse level order traversal of a tree.
vector<int> reverseLevelOrder(Node* root)
{
    // code here
    vector<int>ans;
    stack<int>stk;
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        stk.push(temp->data);
        if (temp->right)
        {
            q.push(temp->right);
        }
        if (temp->left)
        {
            q.push(temp->left);
        }
    }
    while (!stk.empty())
    {
        ans.push_back(stk.top());
        stk.pop();
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

    vector<int> res = reverseLevelOrder(root);

    for (int i : res)
        cout << i << " ";

    return 0;
}
