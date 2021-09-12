#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int x = s[0] - 'a';
    int y = s[1] - '1';
    int xd = t[0] - 'a';
    int yd = t[1] - '1';
    int ans = max(abs(x - xd), abs(y - yd));
    xd-=x;
    yd-=y;
    cout<<ans<<endl;
    while(ans--){
        if(xd > 0){
            xd--;
            cout<<"R";
        }
        if(xd < 0){
            xd++;
            cout<<"L";
        }
        if(yd > 0){
            yd--;
            cout<<"U";
        }
        if(yd < 0){
            yd++;
            cout<<"D";
        }
        cout<<endl;
    }
    return 0;
}