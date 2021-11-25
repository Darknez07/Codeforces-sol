#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[6] = {};
    for(int i=0;i<6;i++){
        cin>>a[i];
    }
    sort(a, a + 6);
    // As trunk and body should be same length shown
    // in 1 and 3 conditions
    // Rest for 2nd it can't be elephant if 2 and 5 are equal
    /*1*/if(a[0] == a[3]) cout<< ((a[4] == a[5]) ? "Elephant":"Bear");
    /*2*/else if(a[1] == a[4]) cout<<"Bear";
    /*3*/else if(a[2] == a[5]) cout<< ((a[0] == a[1]) ? "Elephant":"Bear");
    /*4*/else cout<<"Alien";
    // None of above 3 cases automatically translates to 4
    return 0;
}