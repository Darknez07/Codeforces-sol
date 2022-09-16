// Logic is very good
// Find the white's which can be coloured black
#include <iostream>
#include <vector>
using namespace std;

void solve(){
    string str;
    int n,k;
    cin>>n>>k>>str;
    vector<int> w(n + 1, 0);
    for(int i=1;i<=n;i++)
        // Counting the whites in the sections
        //  BWWWWBBBWWWB
        // 0012344445677
        // 4 - 0,4 - 0, 4 - 1, 4 - 2, 5 - 3, 6 - 4, 7 - 4, 7 - 4; 
        w[i] = w[i - 1] + int(str[i - 1] == 'W');
    int conv = INT_MAX;
    for(int i=k;i<=n;i++)
    // Selecting k continous pieces and finding whites to be turned black
    // White's till any k selection in the string
        conv = min(conv, w[i] - w[i - k]);
    cout<<conv<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
}