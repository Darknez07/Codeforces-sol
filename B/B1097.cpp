#include <iostream>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
int t;
vector<int> v;
bool flag = false;
// Dfs to search for the steps
// cool Algorithm
// And finish when i is t;
// dfs i+1,sum+v[i]
// dfs i+1,sum-v[i]
// Thus flag,which is 360 degrees
void dfs(int i, int sum){
    if(i == t){
        if(sum % 360 == 0)
            flag = true;
        return;
    }
    dfs(i + 1, sum + v[i]);
    dfs(i + 1, sum - v[i]);
}
// Can be generally used for finding the correct sign in front
// of number to get the correct sum.
int main(){
    int val;
    cin>>t;
    // Such an elegant solution.
    for(int i=0; i<t; i++){cin>>val;v.push_back(val);}
    dfs(0, 0);
    cout<<(flag ? "YES": "NO")<<endl;
    return 0;
}