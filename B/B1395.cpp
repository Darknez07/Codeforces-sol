#include <iostream>
using namespace std;
int main(){
    long long n,m,x,y;
    cin>> n >> m >> x >> y;
    for(int i = 0; i<n ;i++){
        for(int j=0;j<m;j++){
            cout<<x<<" "<<y<<endl;
            y++;
            if(y > m)
                y = 1;
        }
        y--;
        x++;
        if(y == 0)
            y = m;
        if(x > n)
            x = 1;
    }
    return 0;
}