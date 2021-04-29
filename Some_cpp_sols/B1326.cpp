#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    long a;
    cin>>n;
    vector<long> v;
    for(int i=0;i<n;i++){cin>>a;v.push_back(a);}
    a = 0;
    for(int i=0;i<n;i++){v[i]+=a;if(a < v[i]){a = v[i];}}
    for(int i=0;i<n;i++){cout<<v[i]<<" ";}
    return 0;
}