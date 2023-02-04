// #include <iostream>
// using namespace std;
// class Node{
// public:
// int data;
//     Node* left;
//     Node* right;
//     Node(int data){
//     left = right = NULL;
//     this->data = data;
//     }
// };
// void preOrder(Node* root){
// if(root == NULL){
// return
// }
// cout << root->data << " ";
// preOrder(root->left);
// preOrder(root->right);
// }
// void inOrder(Node* root){
// if(root == NULL){
// return;
// }
// inOrder(root->left);
// cout << root->data << " ";
// inOrder(root->right);
// }
// int main() {
// Node* root = new Node(1);
// root->left = new Node(2);
// root->right = new Node(3);
// root->left->left = new Node(4);
// root->left->right = new Node(5);
// root->right->left = new Node(6);
// preOrder(root);
// }



// #include <iostream>
// using namespace std;
// class Node{
// public :
// int data;
// Node* left;
// Node* right;
// Node(int data){
// left = right = NULL;
// this->data = data;
// }
// };
// void preOrder(Node* root){
//     if(root == NULL){
//         return;
//         }
//         out << root->data << " ";
//         preOrder(root->left);
//         preOrder(root->right);
// }
// void inOrder(Node* root){
//     if(root == NULL){
//         return;
//         }
//         inOrder(root->left);
//         cout << root->data << " ";
//         inOrder(root->right);
// }
// int countNodes(Node* root){
//     if(root == NULL){
//         return 0;
//         }
//         int lc = countNodes(root->left);
//         int rc = countNodes(root->right);
//         return 1 + lc + rc;

// }
// void postOrder(Node* root){
//     if(root == NULL){
//         return;
//         }
//         postOrder(root->left);
//         postOrder(root->right);
//         cout << root->data << " ";
// }



#include <iostream>
using namespace std;
class Node{
public :
int data;
Node* left;
Node* right;
Node(int data){
left = right = NULL;
this->data = data;
}
};
void preOrder(Node* root){
    if(root == NULL){
        return;
        }
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
}
void inOrder(Node* root){
    if(root == NULL){
        return;
        }
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
}

int getMaxValue(Node* root){
    if(root==NULL)
    return INT_MIN;
    int ans=(root->data);
    int lcans=getMaxValue(root->left);
    int rcans=getMaxValue(root->right);
    if(lcans>rcans && lcans>ans)
    return lcans;
    if(rcans>lcans && rcans>ans)
    return rcans;

    return ans;
}
int getMinValue(Node* root){
    if(root==NULL)
    return INT_MAX;
    int ans=(root->data);
    int lcans=getMinValue(root->left);
    int rcans=getMinValue(root->right);
    if(lcans<rcans && lcans<ans)
    return lcans;
    if(rcans<lcans && rcans<ans)
    return rcans;

    return ans;
}
int countLeafNode(Node* root){
    if(root==NULL)
    return 0;
    int count=1;
    int lscount=countLeafNode(root->left);
    int rscount = countLeafNode(root->right);
    if(lscount=NULL && rscount==NULL)
    return count++;

    return count;
} 

int countNodes(Node* root){
    if(root == NULL){
        return 0;
        }
        int lc = countNodes(root->left);
        int rc = countNodes(root->right);
        return 1 + lc + rc;

}
int countEvenNodes(Node* root){
    if(root == NULL)
    return 0; 

   if(root != NULL){
    //int count=0;
    int lce=countEvenNodes(root->left);
    int rce=countEvenNodes(root->right);

       if(root->data%2==0){
        return 1+lce+rce;
       }
    }



}


void postOrder(Node* root){
    if(root == NULL){
        return;
        }
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(3);
    root->left->right=new Node(3);
    root->left->right=new Node(3);
}