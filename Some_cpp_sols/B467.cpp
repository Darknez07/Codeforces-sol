#include<iostream>
#include<vector>
#include<bitset>
using namespace std;
int main(){
    long n,m,k,w,f;
    cin>>n>>m>>k;
    vector<bitset<1000> > lst;
    f = m;
    while(f--){cin>>w;bitset<1000> b(w);lst.push_back(b);}
    cin>>w;
    bitset<1000> b(w);
    f = 0;
    for(int i=0;i<m;i++){lst[i]^=b;if(lst[i].count() <= k){f++;}}
    cout<<f<<" ";
    return 0;
}