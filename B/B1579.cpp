#include <iostream>
#include <vector>
#include <algorithm>
// Essentially an Insertion sort
using namespace std;
int main(){
    int t,n,indx;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long> v(n);
        vector<vector<int>  > v1;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=1;i<n;i++){
            int j;
            indx = v[i];
            for(j = i;j > 0 && v[j - 1] > indx;j--){
                v[j] = v[j - 1];
            }
            v[j] = indx;
            if(j == i)
                continue;
            vector<int> vn({j + 1,i+1,i - j});
            v1.push_back(vn);
        }
        cout<<v1.size()<<endl;
        for(int i=0;i<v1.size();i++){
            cout<<v1[i][0]<<" "<<v1[i][1]<<" "<<v1[i][2]<<endl;
        }
    }
    return 0;
}