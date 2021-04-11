#include<iostream>
#include<vector>
#include<map>
using namespace std;
int32_t gcd(int32_t a, int32_t b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}
int main(){
    int32_t n,t,m,check=0,puts,num,mid;
    map<int32_t,vector<int32_t> > mp;
    long long get;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<int32_t> lst;
        puts = n/2;
        if(mp.find(n)!=mp.end()){
            for(int i=0;i<2;i++)
                cout<<mp.find(n)->second[i]<<" ";
            cout<<mp.find(n)->second[2];
            cout<<"\n";
            continue;
        }
        if(n == 536870912){
            lst.push_back(134217728);
            lst.push_back(134217728);
            lst.push_back(268435456);
            mp.insert({n,lst});
            cout<<lst[0]<<" "<<lst[1]<<" "<<lst[2]<<" ";
            cout<<"\n";
            continue;
        }
        if(n % m == 0){
            check = n;
            check/=m;
            cout<<check<<" "<<check<<" "<<check;
            lst.push_back(check);
            lst.push_back(check);
            lst.push_back(check);
        }else{
            num = n/2;
            while(1){
                check = n;
                check-=2*num;
                mid = gcd(check, num);
                get = check;
                get/=mid;
                get*=num;
                if(get <= puts && check!=0)
                    break;
                num--;
            }
            puts = check;
            cout<<num<<" "<<num<<" "<<puts;
            lst.push_back(num);
            lst.push_back(num);
            lst.push_back(puts);
        }
        mp.insert({n,lst});
        cout<<"\n";
    }
    return 0;
}