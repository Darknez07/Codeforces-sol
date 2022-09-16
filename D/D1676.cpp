#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n, vector<int> (m, 0));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>v[i][j];
    int ans = -1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
		    int now = 0;
			for(int ci = i, cj = j;ci >= 0 && ci < n && cj >= 0 && cj < m;cj--,ci--)
                now+=v[ci][cj];
			
			for(int ci = i, cj = j;ci >= 0 && ci < n && cj >= 0 && cj < m;ci++,cj--)
				now+=v[ci][cj];
			
			for(int ci = i, cj = j;ci >= 0 && ci < n && cj >= 0 && cj < m;ci--,cj++)
				now+=v[ci][cj];
			
			for(int ci = i, cj = j;ci >= 0 && ci < n && cj >= 0 && cj < m;ci++,cj++)
				now+=v[ci][cj];
			
            now-=v[i][j]*3;
            ans = max(now, ans);
        }
    }
    cout<<ans<<endl;
    return;
}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
}
