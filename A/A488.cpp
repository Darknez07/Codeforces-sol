#include <iostream>
#include <string>
using namespace std;
int main(){
    long ans,lucky;
    string s;
    cin>>ans;
    lucky = ans;
    ans++;
    s = to_string(ans);
    while(s.find('8') == string::npos){
        ans++;
        s = to_string(ans);
    }
    cout<<(ans - lucky)<<endl;
    return 0;
}