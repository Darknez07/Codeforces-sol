#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2 == 0){
        cout<<"NO"<<endl;return 0;
    }
    vector<int> v(2*n + 1, 0);
    /* for(int i=1;i<=n;i++){
        if(i % 2) v[i] = 2*i,v[i + n] = 2*i - 1;
        else v[i] = 2*i - 1,v[i + n] = 2*i;
    } */
    cout<<"YES"<<endl;
    /* for(int i=1;i<=2*n;i++)
        cout<<v[i]<<" ";
    return 0;
    */
   // Clock method
    int start = 1,end = 2*n;
    for(int i=1;i<=n;i++){
       if(i % 2) v[i] = start,v[i + n] = start + 1,start+=2;
       else v[i] = end,v[i + n] = end - 1,end -= 2;
    }
    for(int i=1;i<=2*n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}