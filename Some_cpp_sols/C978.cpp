#include<iostream>
#include<vector>
using namespace std;
// After lot of hard work
int main(){
    int n,m,j = 0;
    cin>>n>>m;
    vector<long long> lst(n,0);
    long long in;
    for(int i=0;i<n;i++){
        cin>>in;
        if(i!=0)
            lst[i]+=(in+lst[i - 1]);
        else
            lst[i] = in;
    }
    for(int i=0;i<m;i++){
        cin>>in;
        if(lst[j] >= in && j == 0)
            cout<<(j+1)<<" "<<in<<endl;
        else{
            while(!(lst[j] < in && lst[j + 1] >= in)){
                j++;
            }
            cout<<(j+2)<<" "<<(in - lst[j])<<endl;
        }
    }
    return 0;
}