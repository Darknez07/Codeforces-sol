#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main(){
    int n,t,val;
    cin>>n>>t;
    deque<int> l;
    for(int i=0;i<n;i++){
        cin>>val;
        l.push_back(val);
    }
    deque<int>::iterator iter;
    for(int i=0;i<t;i++){
        cin>>val;
        iter = find(l.begin(),l.end(),val);
        cout<<(iter - l.begin()) + 1<<" ";
        iter = l.erase(iter);
        l.push_front(val);
    }
    return 0;
}