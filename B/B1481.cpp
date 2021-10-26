#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n,k,p,count;
    cin >> t;
    bool stop;
    while(t--){
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        stop = false;
        p = 0;
        count = 0;
        while(p < n && count < k){
            stop = false;
            for(int i=0;i<n - 1;i++){
                if(v[i] < v[i + 1]){
                    p = i + 1;
                    v[i]++;
                    count++;
                    stop = true;
                    break;
                }
            }
            if(stop)
                continue;
            cout<<-1<<endl;
            break;
        }
        if(!stop)
            continue;
        cout<<p<<endl;
    }
    return 0;
}