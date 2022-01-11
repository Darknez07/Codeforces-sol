#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t,m,n,val;
    bool no;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<int> v(n, 0);
        vector<int> p(m, 0);
        for(int i=0;i<n;i++)
            cin>>v[i];
        for(int i=0;i<m;i++)
            cin>>p[i];
        sort(p.begin(),p.end());
        for(int i=0,j=0;i<m;i=j){
            for(;j<m && (p[j] - p[i]) == (j - i); ++j);
                sort(v.begin() + p[i] - 1, v.begin() + p[j - 1] + 1);
        }
        no = false;
        for(int i=0;i<(n - 1);i++){
            if(v[i] > v[i+1]){
                no = true;
                break;
            }
        }
        cout<<(no ? "NO":"YES")<<endl;
    }
    return 0;
}