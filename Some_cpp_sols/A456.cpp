#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int> > vec(n);
    for(int i=0;i<n;i++){cin>>vec[i].first>>vec[i].second;}
    sort(vec.begin(),vec.end());
    bool Alex = 0;
    for(int i=0;i<n-1;i++){if(vec[i].second > vec[i+1].second){Alex = 1;}}
    puts(Alex ? "Happy Alex":"Poor Alex");
}