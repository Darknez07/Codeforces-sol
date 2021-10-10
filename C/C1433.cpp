#include <iostream>
#include <vector>
using namespace std;
int main(){
    int max = -1,t,n,indx;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        max = -1;
        indx = -1;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(max < v[i]){
                max = v[i];
            }
        }
        for(int i=0;i<n;i++){
            if(v[i] == max){
                if(i > 0 && v[i - 1] < max){
                    indx = i;
                    break;
                }else if(i < n - 1 && v[i + 1] < max){
                    indx = i;
                    break;
                }
            }
        }
        cout<<(indx == -1 ? -1: indx + 1)<<endl;
    }
}