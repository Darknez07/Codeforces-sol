#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){cin>>n;vector<long> v(n+2);
        for(int i=0;i<n+2;i++){cin>>v[i];}
        sort(v.begin(),v.end());
        long long sum = 0;for(int i=0;i<n;i++){sum+=v[i];}
        if(sum == v[n]){
            for(int i=0;i<n;i++){cout<<v[i]<<" ";}
        }else{sum+=v[n];long indx = -1;for(int i=0;i<=n;i++){if(v[n+1] + v[i] == sum){indx = i;break;}}if(indx < 0){cout<<-1;}else{for(int i=0;i<=n;i++){if(indx == i){continue;}else{cout<<v[i]<<" ";}}}}
        cout<<"\n";
    }
}