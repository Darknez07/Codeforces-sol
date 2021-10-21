#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,val;
    cin>>n;
    vector<int> zeros,negs,poss;
    for(int i=0;i<n;i++){
        cin>>val;
        if(val == 0)
            zeros.push_back(val);
        else if(val < 0)
            negs.push_back(val);
        else
            poss.push_back(val);
    }
    if(poss.size() == 0){
        val = negs.back();
        poss.push_back(val);
        negs.pop_back();
        poss.push_back(negs.back());
        negs.pop_back();
    }
    if(negs.size() % 2 == 0){
        zeros.push_back(negs.back());
        negs.pop_back();
    }
    cout<<negs.size()<<" ";
    for(int i=0;i<negs.size();i++){
        cout<<negs[i]<<" ";
    }
    cout<<endl<<poss.size()<<" ";
    for(int i=0;i<poss.size();i++){
        cout<<poss[i]<<" ";
    }
    cout<<endl<<zeros.size()<<" ";
    for(int i=0;i<zeros.size();i++){
        cout<<zeros[i]<<" ";
    }
    cout<<endl;
    return 0;
}