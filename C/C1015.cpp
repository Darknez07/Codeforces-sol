#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    long m,b;
    long long sum = 0;
    cin>>m;
    vector<long> a(n, 0);
    vector<long> diff(n, 0);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b;
        sum+=a[i];
        diff[i] = (a[i] - b);
    }
    sort(diff.begin(), diff.end());
    reverse(diff.begin(), diff.end());
    int i;
    for(i=0;i<n;i++){
        if(sum <= m)
            break;
        sum-=diff[i];
    }
    if(sum > m)
        cout<<-1<<endl;
    else
        cout<<i<<endl;
    return 0;
}