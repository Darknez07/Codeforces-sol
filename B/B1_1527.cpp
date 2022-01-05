#include <iostream>
#include <string>
using namespace std;
int main(){
    int t,n,zeros;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        zeros = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '0') zeros++;
        }
        cout<<(zeros == 1 ? "BOB":(zeros % 2 ? "ALICE":"BOB"))<<endl;
    }
    return 0;
}