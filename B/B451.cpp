#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define longs unsigned long long
int main(){
    int n;
    cin>>n;
    vector<longs> v(n,0),to_sort(n, 0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        to_sort[i] = v[i];
    }
    sort(to_sort.begin(),to_sort.end());
    int i;
    for(i=0;i<n;i++){
        if(to_sort[i]!= v[i])
            break;
    }
    int j;
    for(j = n - 1;j>=0;j--){
        if(to_sort[j]!= v[j])
            break;
    }
    reverse(v.begin() + i,v.begin() + j + 1);
    bool no = false;
    for(int i=1;i<n;i++){
        if(v[i - 1] > v[i]){
            no = true;
            break;
        }
    }
    cout<<(no ? "no":"yes")<<endl;
    if(!no){
        if(j == -1){
            i = 0;
            j = 0;
        }
        cout<<(i + 1)<<" "<<(j + 1)<<endl;
    }
    return 0;
}