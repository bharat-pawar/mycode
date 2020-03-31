//Print tree in top to down level order
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<queue>
using namespace std;

#define mytemplate true

struct node {
    int data;
    struct node * left;
    struct node * right;
};

typedef struct node TreeNode;

TreeNode* newNode(int val) {
    TreeNode *node = new TreeNode;
    node->data = val;
    node->left = NULL;
    node->right = NULL;
}
/*
void levelOrderTraversal(TreeNode * root) {
    if(root == NULL) {
        return;
    }

    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode *node = q.front();
        cout<<node->data<<" ";
        q.pop();
        if(node->left != NULL)
            q.push(node->left);
        if(node->right != NULL)
            q.push(node->right);
    }
}
*/

int getTreeHeight(TreeNode *root) {
    
}

int main(int argc, char const *argv[])
{

#if mytemplate
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);
#endif

    TreeNode *root = newNode(7);
    root->left = newNode(4);
    root->right = newNode(9);
    root->left->left = newNode(3);
    root->left->right = newNode(5);
    root->right->left = newNode(8);
    root->right->right = newNode(10);
    root->right->right->right = newNode(12);

    levelOrderTraversal(root);

    return 0; 
}
