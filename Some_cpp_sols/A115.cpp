#include <iostream>
#include <vector>
using namespace std;
struct Node {
    int data;
    vector<Node *> children;
};
Node* newNode(int data){
    Node* temp = new Node;
    temp->data = data;
    return temp;
}
void AddinDepth(Node** t, int val, int i){
    if((*t)->data == val){
        (*t)->children.push_back(newNode(i));
        return;
    }
    for(int k=0;k<(*t)->children.size();k++){
        AddinDepth(&((*t)->children[k]),val,i);
    }
}
int Height(Node* t){
    if(!t) return 0;
    int ans = 0;
    for(int i=0;i<t->children.size();i++){
        ans = max(ans, Height(t->children[i]));
    }
    return ans + 1;
}
int main(){
    Node* root = newNode(0);
    int t,val;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>val;
        if(val == -1)
            root->children.push_back(newNode(i));
        else{
            AddinDepth(&root, val, i);
        }
    }
    int ans = (Height(root) - 1);
}