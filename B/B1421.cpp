#include <iostream>
#include <string>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++)
            cin>>s[i];
        if(s[1][0]== s[0][1]){
            if (s[n - 1][n - 2] == s[n - 2][n - 1] && s[n - 1][n - 2] != s[0][1]){
                cout<<0<<"\n";
            }else if (s[n - 1][n - 2] == s[n - 2][n - 1] && s[n - 1][n - 2] == s[0][1]){
                cout<<2<<"\n";
                cout<<n<<" "<<n-1<<"\n";
                cout << n-1 << " " << n << "\n";
            }else if (s[n - 1][n - 2] != s[n - 2][n - 1]){
                if (s[n - 1][n - 2] == s[0][1] ){
                    cout << 1 << "\n";
                    cout << n << " " << n - 1 << "\n";
                }else{
                    cout << 1 << "\n";
                    cout << n-1 << " " << n << "\n";
                }
            }
        }else{
            if (s[n - 1][n - 2] == s[n - 2][n - 1]){
                if (s[n - 1][n - 2] == s[0][1]){
                    cout << 1 << "\n";
                    cout << 1 << " " << 2 << "\n";
                }
                else if (s[n - 1][n - 2] == s[1][0]){
                    cout << 1 << "\n";
                    cout << 2 << " " << 1 << "\n";
                }
            }else{
                if (s[n - 1][n - 2] == s[0][1]){
                    cout << 2 << "\n";
                    cout << 1 << " " << 2 << "\n";
                    cout << n-1 << " " << n << "\n";
                }
                else if (s[n - 1][n - 2] == s[1][0]){
                    cout << 2 << "\n";
                    cout << 2 << " " << 1 << "\n";
                    cout << n-1 << " " << n << "\n";
                }
            }
        }
    }
    return 0;
}