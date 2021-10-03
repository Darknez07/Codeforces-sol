#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<char> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int curr = 0;
    string s="";
    int weight = 0;
    s+=v[curr];
    weight +=(v[curr] - 'a' + 1);
    for(int i=1;i<n;i++){
        if(s.length() == k)
            break;
        if((v[i] - v[curr]) >= 2){
            curr = i;
            s+=v[curr];
            weight +=(v[curr] - 'a' + 1);
        }
    }
    if(s.length() < k){
        cout<<-1;
        return 0;
    }
    cout<<weight;
    return 0;
}