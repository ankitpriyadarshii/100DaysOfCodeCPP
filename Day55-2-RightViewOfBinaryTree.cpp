//Right View of Binary Tree
/*Given a Binary Tree, print Right View of it. Right View of a Binary Tree is set of nodes visible when tree is visited from Right side*/

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



//Function to return list containing elements of right view of binary tree.
vector<int> rightView(Node* root)
{
    // Your Code here
    vector<int> result;
    if (!root) return {};
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        int n = size;
        int index = 0;
        while (size--)
        {
            auto node = q.front();
            q.pop();
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
            if (index == n - 1) result.push_back(node->data);
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

    vector<int> res = rightView(root);

    for (auto i : res)
        cout << i << " ";
    

    return 0;
}
