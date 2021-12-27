#include <iostream>
#include <string>
using namespace std;
int main(){
    int t,n,zeros,ones;
    string s,str;
    cin>>t;
    while(t--){
        cin>>n>>s;
        str = "";
        zeros = 0;
        ones = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '0')
                zeros++;
            else
                break;
        }
        for(int i=n-1;i>=0;i--){
            if(s[i] == '1')
                ones++;
            else
                break;
        }
        // Just leave trailing 1's and leading 0's
        if(ones + zeros == n)
            cout<<s<<endl;
        else{
            for(int i=0;i<zeros;i++){
                str+="0";
            }
            str+="0";
            // There is a string which has 0 in middle
            // So 10 is inevitable hence eliminate 1
            for(int i=0;i<ones;i++)
                str+="1";
            cout<<str<<endl;
        }
    }
    return 0;
}