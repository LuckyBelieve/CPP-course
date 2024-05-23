#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// creating a tree

template<typename T>
class TreeNode{
   public:
       T data;
       vector<TreeNode<T>*> children;
       TreeNode(T data){
          this->data = data;
       }


};

// taking inputs

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode<int>* f = q.front();
        q.pop();

        cout<<"Enter no of children of "<<f->data<<endl;
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            int childData;
            cout<<"Enter "<<i<<" th child of "<<f->data<<endl;
            cin>>childData;

            TreeNode<int>* child = new TreeNode<int>(childData);
            q.push(child);
            f->children.push_back(child);
        }
    }
    return root;
}

// printing a tree
void printTree(TreeNode<int>* root){
   if(root==NULL){
    return ;
   }
   cout<<root->data<<": ";
   for(int i=0;i<root->children.size();i++){
    cout<<root->children[i]->data<<" ,";
   }
   cout<<endl;

   for(int i=0;i<root->children.size();i++){
    printTree(root->children[i]);
   }
}

// printing a tree
void printTreeLevelWise(TreeNode<int>* root){
     queue<TreeNode<int>*> q;
     q.push(root);
int counter=0;
     while(!q.empty()){
        TreeNode<int>* f = q.front();
    counter++;
        q.pop();
        cout<<f->data<<": ";
        for(int i=0;i<f->children.size();i++){
           cout<<f->children[i]->data<<" ,";
         }
        cout<<endl;

        for(int i=0;i<f->children.size();i++){
            q.push(f->children[i]);
        }
     }
  //Print the value of the counter when the Queue is empty
   cout<<"The number of nodes is "<<counter<<endl;
}

// inorder traversal
void inorder(TreeNode<int> *root)
{
    if (root == NULL)
        return;
 
 // Total children count
int total=root->children.size(); 
     
    // All the children except the last
    for (int i = 0; i < total - 1; i++)
        inorder(root->children[i]);
 
    // Print the current node's data
    cout<< root->data << " ";
 
    // Last child
    inorder(root->children[total - 1]);
}

// preorder priting of tree nodes

void preOrder(TreeNode<int>* root){
    if(root==NULL){  /// edge case
        return ;
    }
   cout<<root->data<<" ";
   for(int i=0;i<root->children.size();i++){
    preOrder(root->children[i]);
   }
}

// postOrder traversal
void postOrder(TreeNode<int>* root){
    if(root==NULL){  /// edge case
        return ;
    }
   for(int i=0;i<root->children.size();i++){
    postOrder(root->children[i]);
   }
   cout<<root->data<<" ";
}



// main function

int main(){
  TreeNode<int>* root = takeInputLevelWise();
 printTree(root);
cout<<"Printing Level wise"<<endl;
printTreeLevelWise(root);
  return 0;
}



