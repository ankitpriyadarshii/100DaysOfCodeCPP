//Bottom View of Binary Tree
/*Given a binary tree, print the bottom view from left to right.
A node is included in bottom view if it can be seen when we look at the tree from bottom.*/

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



//Function to return a list of nodes visible from the bottom view 
vector <int> bottomView(Node* root) {
    // Your Code Here
    vector<int> result;
    map<int, int> mp;
    queue< pair<Node*, int> > q;
    q.push({ root, 0 });

    while (!q.empty()) {
        auto top = q.front();
        q.pop();
        Node* node = top.first;
        int level = top.second;

        mp[level] = node->data;

        if (node->left)
            q.push({ node->left, level - 1 });
        if (node->right)
            q.push({ node->right, level + 1 });
    }

    for (auto& i : mp)
        result.push_back(i.second);

    return result;
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

    vector<int> res = bottomView(root);

    for (auto i : res)
        cout << i << " ";
    

    return 0;
}
