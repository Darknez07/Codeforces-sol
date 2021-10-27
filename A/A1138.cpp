#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,cnt,mx = -1;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){cin>>v[i];}
    long x(v[0] == 1), y(v[0] == 2);
    for(int i=1;i<n;i++){
        if(v[i - 1] == 1 && v[i] == 1){++x;}
        else if(v[i - 1] == 1 && v[i] == 2){y = 1;}
        else if(v[i - 1] == 2 && v[i] == 2){++y;}
        else{x = 1;}
        cnt = min(x, y);
        mx = max(mx, cnt);
    }
    cout<<2*mx;
    return 0;
}