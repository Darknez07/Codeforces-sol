#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int t,n,x1,y1;
    string s;
    bool no;
    cin>>t;
    while(t--){
        cin>>n;
        vector<vector<int>> v(n, vector<int>(2, 0));
        for(int i=0;i<n;i++){
            cin>>v[i][0]>>v[i][1];
        }
        sort(v.begin(),v.end(),[](vector<int> v1,vector<int> v2){
            if(v1[0] == v2[0]) return v1[1] < v2[1];
            else return v1[0] < v2[0];
        });
        x1 = 0; y1 = 0;
        s = "";
        no = false;
        for(int i=0;i<n;i++){
            if(v[i][0] < x1 || v[i][1] < y1){
                no = true;
                break;
            }
            for(int j=0;j<(v[i][0] - x1);j++)
                s+="R";
            for(int j=0;j<(v[i][1] - y1);j++)
                s+="U";
            x1 = v[i][0];
            y1 = v[i][1];
        }
        cout<<(no ? "NO":"YES")<<endl;
        if(!no)
            cout<<s<<endl;
    }
    return 0;
}