//Leaf at same level
/*Given a Binary Tree, check if all leaves are at same level or not. */

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <unordered_set>

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


bool check(Node* root)
{
    queue<Node*> q;
    q.push(root);

    // Used to store the level
    unordered_set<int> st;

    int level = 0;

    while (not q.empty())
    {
        int sz = q.size();

        for (int i = 0; i < sz; i++)
        {
            Node* node = q.front();
            q.pop();

            // storing level of every leaf node
            if (node->left == NULL and node->right == NULL)
                st.insert(level);

            if (node->left)
                q.push(node->left);

            if (node->right)
                q.push(node->right);
        }
        level++;
    }
    // if the levels of leaf node are different then return false otherwise return true
    return (st.size() == 1);
}


/* Driver code */
int main()
{
    int n;
    Node* root = newNode(3);
    root->left = newNode(1);
    root->right = newNode(2);

    cout << check(root);
    
    return 0;
}
