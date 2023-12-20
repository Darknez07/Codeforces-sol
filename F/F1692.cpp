#include <iostream>
using namespace std;


void solve(){
    int digs[10] = {};
    int n,num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        digs[num % 10]++;
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                if((i + j + k) % 10 == 3){
                    if(i == j && j == k){
                        if(digs[i] > 2){
                            cout<<"YES"<<endl;
                            return;
                        }
                    }else if(i == j){
                        if(digs[i] > 1 && digs[k]){
                            cout<<"YES"<<endl;
                            return;
                        }
                    }else if(j == k){
                        if(digs[j] > 1 && digs[i]){
                            cout<<"YES"<<endl;
                            return;
                        }
                    }else if(k == i){
                        if(digs[i] > 1 && digs[j]){
                            cout<<"YES"<<endl;
                            return;
                        }
                    }else if(digs[k] && digs[j] && digs[i]){
                        cout<<"YES"<<endl;
                        return;
                    }
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}