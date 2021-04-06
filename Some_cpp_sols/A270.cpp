#include<iostream>
#include<vector>
using namespace std;
int main(){
    int ans,angle,q;
    cin>>q;
    while(q--){cin>>angle;ans = 180 - angle;cout<<(360 % ans == 0 ? "YES\n": "NO\n");}
    return 0;
}