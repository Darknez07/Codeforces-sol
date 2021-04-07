#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long n,ans;
    cin>>n;
    int i;
    vector<long> first(n,0);
    vector<long> second(n,0);
    vector<long> third(n,0);
    for(i=0;i<n;i++){cin>>ans;first.push_back(ans);}
    for(i=0;i<n-1;i++){cin>>ans;second.push_back(ans);}
    for(i=0;i<n-2;i++){cin>>ans;third.push_back(ans);}
    sort(first.begin(), first.end());
    sort(second.begin(), second.end());
    sort(third.begin(), third.end());
    set_difference(first.begin(),first.end(),second.begin(),second.end(),first.begin());
    cout<<first[0]<<"\n";
    set_difference(second.begin(),second.end(),third.begin(),third.end(),second.begin());
    cout<<second[0];
    return 0;
}
