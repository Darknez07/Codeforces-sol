#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t,n,odd;
    cin>>t;
    bool flag;
    while(t--){
        cin>>n;
        flag = false;
        vector<int> v(n);
        odd = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i] % 2 == 1)
                odd++;
        }
        if(odd % 2 == 0){cout<<"YES"<<endl;continue;}
        // Sort the elements;
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++){
            // ONly when one el is odd and other is even
            if(abs(v[i] - v[i - 1]) == 1){
                flag = true;
                break;
            }
        }
        cout<<(flag ? "YES" : "NO")<<endl;
    }
    return 0;
}