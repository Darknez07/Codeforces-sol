#include <iostream>
using namespace std;
long long gcd(long long a, long long b){
    return a == 0 ? b : gcd(b % a , a);
}
int main(){
    long long l,r,a = -1,b = - 1,c = -1;
    cin>>l>>r;
    for(long long i=l;i<=(r - 2);i++){
        for(long long j = l + 1;j<=(r - 1);j++){
            for(long long k = l + 2;k<=r;k++){
                if(gcd(i,j) == 1 && gcd(j,k) == 1 && gcd(i,k) != 1){
                    a = i;
                    b = j;
                    c = k;
                    break;
                }
            }
            if(a != -1)
                break;
        }
        if(a != - 1)
            break;
    }
    if(a == -1)
        cout<<-1<<endl;
    else
        cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}