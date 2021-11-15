#include <iostream>
#include <algorithm>
// Tutorialed.
using namespace std;
int main(){
    int t;
    cin>>t;
    long m;
    long a[3];
    while(t--){
        cin>>a[0]>>a[1]>>a[2]>>m;
        sort(a, a + 3);
        // a[0] - 1, a[1] - 1, a[2] - 1 pairs of each A,B,C
        if(m <= (a[0] + a[1] + a[2] - 3) && m >= (a[2] - (a[0] + a[1] + 1)))
            cout<<"YES";
        else
            cout<<"NO";
        // To attain miminum we join all a's and b's togather and insert
        // C's after ab's and makes c - (a + b) left c's  an
        // -1 for all the pairs attainable
        cout<<endl;
    }
    return 0;
}