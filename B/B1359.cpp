#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int t,m,n,x,y;
    long long ans;
    cin>>t;
    while(t--){
        cin>>n>>m>>x>>y;
        vector<string> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j < m - 1 && v[i][j] == '.' && v[i][j+1] == '.'){
                    ans+=min(2*x, y);
                    j++;
                }else if(v[i][j] == '.'){
                    ans+=x;
                }
            }
        }
        cout<<ans<<endl;
    }
}