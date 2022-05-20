#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*>children;
};
void printTree(TreeNode<int>*data){
    cout<<root->data<<" , ";
    for(int i=0; i<root->children.size();i++){
        cout<<endl;
    }
    for(int i=0; i<root->children.size(); i++){
        printTree(root->children(i))
}
    }
    
int main(){
    TreeNode<int>*root=new TreeNode<int>(1);
        TreeNode<int>*Node1=new TreeNode<int>(2);
    TreeNode<int>*Node2=new TreeNode<int>(3);
    printTree(root);


    return 0;
}