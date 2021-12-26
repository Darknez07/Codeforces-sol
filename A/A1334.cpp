#include <iostream>
using namespace std;
int main(){
    int t,n,p,c,prev_p,prev_c;
    bool no;
    cin>>t;
    while(t--){
        cin>>n;
        if(n == 1){
            cin>>p>>c;
            if(c > p)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
            continue;
        }
        no = false;
        cin>>prev_p>>prev_c;
        if(prev_c > prev_p){
            no = true;
        }
        for(int i=1;i<n;i++){
            cin>>p>>c;
            if(prev_p > p || c - prev_c > p - prev_p || prev_c > c){
                no = true;
            }
            prev_p = p;
            prev_c = c;
        }
        cout<<(no ? "NO":"YES")<<endl;
    }
    return 0;
}