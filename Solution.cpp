#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

class Solution{
    public:
    vector<int> levelOrder(Node* root){
        vector<int>v;
        if(root==NULL){
            return v;
        }
        
        queue<Node*> q;
        
        q.push(root);
        
        while (!q.empty()) {
            Node* currNode = q.front();
            v.push_back(currNode->data);
            q.pop();
            
            if (currNode->left != NULL)
                q.push(currNode->left);
                
            if (currNode->right != NULL)
                q.push(currNode->right);
        }
        return v;
    }
};
