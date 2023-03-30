// Merge two BST
/*Given two BSTs, return elements of both BSTs in sorted form. */


//{ Driver Code Starts
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <vector>
#include <queue>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

vector<int> merge(Node* root1, Node* root2);

int main() {

    string s1;
    getline(cin, s1);
    Node* root1 = buildTree(s1);

    string s2;
    getline(cin, s2);
    Node* root2 = buildTree(s2);
    
    vector <int> ans = merge(root1, root2);

    for (auto i : ans)
        cout << i << " ";

    return 0;
}
// } Driver Code Ends




//Function to push the BST data in the vector using inorder traversal.
void inorder(Node* root, vector<int>& v)
{
    if (root == NULL)
        return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

// Function to merge the two BSTs and return it in vector form in sorted order
vector<int> merge(Node* root1, Node* root2)
{
    //Your code here
    vector<int>v1, v2;
    inorder(root1, v1);
    inorder(root2, v2);
    vector<int>res;

    int i = 0, j = 0;

    while (i < v1.size() && j < v2.size()) {
        if (v1[i] < v2[j]) {
            res.push_back(v1[i]);
            i++;
        }
        else {
            res.push_back(v2[j]);
            j++;
        }
    }
    while (i < v1.size()) {
        res.push_back(v1[i]);
        i++;
    }
    while (j < v2.size()) {
        res.push_back(v2[j]);
        j++;
    }
    sort(res.begin(), res.end());
    return res;
}