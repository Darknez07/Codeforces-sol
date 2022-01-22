#include <iostream>
#include <vector>
#include <cmath>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
int main(){
    int t;
    cin>>t;
    if(t == 1){
        cout<<2<<endl;
        return 0;
    }
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    bool no;
    for(int i=4;i<=10000000;i++){
        if(i % 2 == 0)
            continue;
        no = false;
        if(v.size() == t)
            break;
        for(int j=2;j<=sqrt(i);j++){
            if(i % j == 0){
                no = true;
                break;
            }
        }
        if(!no)
            v.push_back(i);
    }
    for(int i=0;i<t;i++)
        cout<<v[i]<<" ";
    return 0;
}