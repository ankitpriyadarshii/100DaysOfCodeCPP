//Left View of Binary Tree
/*Given a Binary Tree, print Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side*/

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



//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node* root)
{
    // Your code here
    vector<int> result;
    if (!root) return {};
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        int index = 0;
        while (size--)
        {
            auto node = q.front();
            q.pop();
            if (index == 0) result.push_back(node->data);
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
            index++;
        }
    }
    return result;
}



/* Driver code */
int main()
{
    int n;
    Node* root = newNode(1);
    root->left = newNode(3);
    root->right = newNode(2);

    vector<int> res = leftView(root);

    for (auto i : res)
        cout << i << " ";
    

    return 0;
}
