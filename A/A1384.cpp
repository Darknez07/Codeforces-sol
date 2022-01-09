#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int t,n,len;
    cin>>t;
    string s(200,'a');
    while(t--){
        cin>>n;
        vector<int> lens(n, 0);
        string prev;
        int mx = -1;
        for(int i=0;i<n;i++){
            cin>>lens[i];
            mx = max(lens[i],mx);
        }
        cout<<s<<endl;
        for(int i=0;i<n;i++){
            prev = s;
            // Because the previous is just different at
            // lens[i] place when indexing is 0
            // As 0 to x - 1 are same;
            // Where x is lens[i]
            prev[lens[i]] = (prev[lens[i]] == 'a' ? 'b': 'a');
            // Thus previous output
            cout<<prev<<endl;
            s = prev;
        }
    }
    return 0;
}