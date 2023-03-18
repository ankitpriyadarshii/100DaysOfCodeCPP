//Top View of Binary Tree
/*Given below is a binary tree. The task is to print the top view of binary tree. 
Top view of a binary tree is the set of nodes visible when the tree is viewed from the top.*/

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



//Function to return a list of nodes visible from the top view 
//from left to right in Binary Tree.
vector<int> topView(Node* root)
{
    vector<int> result;
    map<int, int> mp;
    queue< pair<Node*, int> > q;
    q.push({ root, 0 });

    while (!q.empty()) {
        auto top = q.front();
        q.pop();
        Node* node = top.first;
        int level = top.second;

        if (mp.find(level) == mp.end())
            mp[level] = node->data;

        if (node->left)
            q.push({ node->left, level - 1 });

        if (node->right)
            q.push({ node->right, level + 1 });

    }

    for (auto& i : mp)
        result.emplace_back(i.second);

    return result;
}


/* Driver code */
int main()
{
    int n;
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    vector<int> res = topView(root);

    for (auto i : res)
        cout << i << " ";
    

    return 0;
}
