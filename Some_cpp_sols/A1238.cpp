#include<iostream>
#include<vector>
using namespace std;
#define ull unsigned long long
int main(){
    ull a,b;int n;cin>>n;while(n--){cin>>a>>b;puts(a - b > 1 ? "YES": "NO");}return 0;
}