#include <iostream>
#include <cmath>
using namespace std;

int Transverse(int x, int y, int a, int b){
    if(x >= 2 && y >= 2){
        for(int i = x - 1, j = y - 1;i>=1 && j>=1;i--,j--)
            if(abs(i - a) == abs(j - b))
                return 2;
    }
    if(x >= 2 && y < 8){
        for(int i = x - 1, j = y + 1;i>=1 && j<=8;i--,j++)
            if(abs(i - a) == abs(j - b))
                return 2;
    }
    if(x < 8 && y >= 2){
        for(int i = x + 1, j = y - 1;i<=8 && j>=1;i++,j--)
            if(abs(i - a) == abs(j - b))
                return 2;
    }
    if(x < 8 && y < 8){
        for(int i = x + 1,j = y + 1;i<=8 && j<=8;j++,i++)
            if(abs(i - a) == abs(j - b))
                return 2;
    }
    return 0;
}
int main(){
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    int moves = 0;
    if(x == a || y == b){
        cout<<1<<" ";
    }else{
        cout<<2<<" ";
    }
    if(abs(x - a) == abs(y - b)){
        cout<<1<<" ";
    }else{
        cout<<Transverse(x,y,a,b)<<" ";
    }
    cout<<max(abs(x - a),abs(y - b))<<"\n";
}