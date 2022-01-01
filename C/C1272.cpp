#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n,k;
    unsigned long long count;
    long long ans = 0;
    char ch;
    string s;
    cin>>n>>k>>s;
    vector<bool> v(26,false);
    for(int i=0;i<k;i++){
        cin>>ch;
        v[ch - 'a'] = true;
    }
    count = 0;
    for(int i=0;i<n;i++){
        if(v[s[i] - 'a'])
            count++;
        else{
            ans+=(count*(count+1)/2);
            count = 0;
        }
    }
    ans+=(count*(count+1)/2);
    cout<<ans<<endl;
    return 0;
}