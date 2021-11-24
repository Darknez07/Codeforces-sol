#include <iostream>
using namespace std;
int main(){
    char ch[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>ch[i][j];
        }
    }
    int start,pol,hash,dot;
    bool yes = false;
    for(int i=0;i<9;i++){
        start = i > 3 ? (i > 6 ? 2: 1): 0;
        pol = i % 3;
        hash = 0;
        dot = 0;
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                if(ch[start + j][k + pol] == '.')
                    dot++;
                else
                    hash++;
            }
        }
        if(hash != dot){
            yes = true;
            break;
        }
    }
    cout<<(yes ? "YES": "NO");
    return 0;
}