#include <iostream>
#include <vector>
#include <map>
using namespace std;
map<int,int> m;
struct Node{
    int data;
    vector<Node*> childern;
    Node(int d){data =d;}
};
void Add_Child(Node** node,int par, int child){
    if(par == (*node)->data){
        (*node)->childern.push_back(new Node(child));
        return;
    }
    for(int i=0;i<(*node)->childern.size();i++){
        Add_Child(&(*node)->childern[i],par,child);
    }
    return;
}
void Dfs(Node* node){
    if(node->childern.size() > 0) m[node->data] = 0;
    for(int i=0;i<node->childern.size();i++){
        if(node->childern[i]->childern.size() == 0) m[node->data]++;
        Dfs(node->childern[i]);
    }
    return;
}
int main(){
    int n,val;
    cin>>n;
    Node *no = new Node(1);
    for(int i=1;i<n;i++){
        cin>>val;
        Add_Child(&no,val,i + 1);
    }
    Dfs(no);
    for(auto x: m){
        if(x.second < 3){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}