#include <iostream>
using namespace std;
int main(){
    int a,b,games =0;
    cin>>a>>b;
    while(a >= 2 || b >= 2){
        if(a > b){
            if(a % 2 ==0){
                if(a/2 - 1 == 0){
                    games++;
                    b+=(a/2);
                    break;
                }
                games+=(a/2 - 1);
                b+=(a/2 - 1);
                a-=(2*(a/2 - 1));
            }else{
                games+=(a/2);
                b+=(a/2);
                a%=2;
            }
        }else{
            if(b % 2 == 0){
                if(b/2 - 1 == 0){
                    games++;
                    a+=(b/2);
                    break;
                }
                games+=(b/2 - 1);
                a+=(b/2 - 1);
                b-=(2*(b/2 - 1));
            }else{
                games+=(b/2);
                a+=(b/2);
                b%=2;
            }
        }
    }
    cout<<games<<" ";
    return 0;
}