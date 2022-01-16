#include <iostream>
#include <vector>
using namespace std;
bool Check(vector<vector<int> > v,int m,int n){
    int counter;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]){
                counter = v[i][j];
                if(i > 0 && v[i - 1][j])
                    counter--;
                if(i < (n - 1) && v[i + 1][j])
                    counter--;
                if(j > 0 && v[i][j - 1])
                    counter--;
                if(j < (m - 1) && v[i][j + 1])
                    counter--;
                if(counter)
                    return false;
            }
        }
    }
    return true;
}
int main(){
    int t,n,m,counter;
    bool yes;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<vector<int> > v(n,vector<int> (m, 0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        for(int j=0;j<n;j++){
            if(!v[j][0])
                v[j][0] = (j > 0 && j < (n - 1) ? 3: 2);
            for(int i=1;i<(m - 1);i++){
                if(!v[j][i])
                    v[j][i] = 3;
            }
            if(!v[j][m - 1])
                v[j][m - 1] = (j > 0 && j < (n - 1) ? 3: 2);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]){
                    counter = v[i][j];
                    if(i > 0 && v[i - 1][j])
                        counter--;
                    if(i < (n - 1) && v[i + 1][j])
                        counter--;
                    if(j > 0 && v[i][j - 1])
                        counter--;
                    if(j < (m - 1) && v[i][j + 1])
                        counter--;
                    if(counter < 0)
                        v[i][j]-=counter;
                }
            }
        }
        yes = Check(v,m,n);
        cout<<(yes ? "YES":"NO")<<endl;
        if(yes){
            for(int i = 0; i <n;i++){
                for(int j = 0; j <m;j++){
                    cout<<v[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
}