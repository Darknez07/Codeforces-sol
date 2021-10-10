#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
vector<string> stn;
void gen_strings(string s, int n){
    if(n == 0)
        stn.push_back(s);
    else{
        gen_strings(s+"4", n - 1);
        gen_strings(s+"7", n - 1);
    }
}
int main(){
    string s;
    cin>>s;
    int prev = 2*pow(2,s.length() - 1);
    int counter = 0;
    gen_strings("",s.length());
    cout<<((find(stn.begin(),stn.end(), s) - stn.begin()) + prev) - 1<<endl;
    return 0;
}