#include <iostream>
#include <string>
using namespace std;
int main(){
    int t,n,k,ans,f,first,last,r,l;
    cin>>t;
    string s;
    while(t--){
        cin>>n>>k;
        cin>>s;
        ans = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '*'){
                s[i] = 'x';
                first = i;
                ans++;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(s[n - i - 1] == '*'){
                s[n - i - 1] = 'x';
                last = n - i - 1;
                ans++;
                break;
            }
        }
        if(ans == 1){
            cout<<ans<<endl;
            continue;
        }
        l = first;
        while(l < last){
            r = l + k;
            while(r > l){
                if(r > last || s[r] == 'x'){
                    l++;
                    break;
                }
                if(s[r] == '*'){
                    ans++;
                    l = r;
                    s[r] = 'x';
                    break;
                }
                r--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}