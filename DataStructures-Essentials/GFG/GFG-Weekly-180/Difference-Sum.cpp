#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* inputTree() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    if (ar.empty())
        return NULL;
    Node* root = new Node(ar[0]);
    queue<Node*> q;
    q.push(root);
    int i = 1;
    while (i < n) {
        Node* curr = q.front();
        q.pop();
        if (i < n) {
            curr->left = new Node(ar[i++]);
            q.push(curr->left);
        }
        if (i < n) {
            curr->right = new Node(ar[i++]);
            q.push(curr->right);
        }
    }
    return root;
}


// } Driver Code Ends
/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int differenceSum(Node* root1, Node* root2) {
        if(root1==NULL && root2==NULL)return 0;
        if(root1==NULL || root2==NULL)return (root2==NULL)?abs(root1->data):abs(root2->data);
        return
        abs(root1->data-root2->data)
        +differenceSum(root1->left, root2->left)
        +differenceSum(root1->right, root2->right);
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        Node* root1 = inputTree();

        Node* root2 = inputTree();

        Solution obj;
        int res = obj.differenceSum(root1, root2);

        cout << res << endl;
    }
}

// } Driver Code Ends
