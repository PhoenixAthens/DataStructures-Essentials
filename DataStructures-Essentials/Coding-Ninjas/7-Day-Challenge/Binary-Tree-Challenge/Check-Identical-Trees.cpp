#include <vector>
#include <iostream>
using std::vector;
template <typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

bool traverse(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2){
    if(root1==NULL && root2==NULL)return true;
    if(root1->data!=root2->data)return false;
    if(root1->left!=NULL && root2->left!=NULL)
        return traverse(root1->left, root2->left);
    if(root1->right!=NULL && root2->right!=NULL)
        return traverse(root2->right, root2->right);
    return false;
}

bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    
}

