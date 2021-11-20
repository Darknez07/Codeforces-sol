#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    long T,n,val;
    cin>>t;
    while(t--){
        cin>>n>>T;
        vector<long> v(n, 0);
        vector<long> color(n, -1);
        vector<long> y;
        for(int i=0;i<n;i++){
            cin>>v[i];
            // Only halfs create problem
            // Else it's was good
            if(2*v[i] == T)
                y.push_back(i);
            else if(2*v[i] > T)
                color[i] = 1;
            else
                color[i] = 0;
        }
        if(y.size() == 0){
            for(int i=0;i<n;i++){
                cout<<color[i]<<" ";
            }
        }else{
            for(int i=0;i<y.size();i++){
                if(i % 2 == 0)
                    color[y[i]] = 1;
                else
                    color[y[i]] = 0;
            }
            for(int i=0;i<n;i++){
                cout<<color[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}