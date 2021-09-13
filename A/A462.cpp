#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int n,count;
    string s;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>s;
        v[i] = s;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            count = 0;
            if(j > 0 && v[i][j - 1] == 'o')
                count++;
            if(j < n - 1 && v[i][j + 1] == 'o')
                count++;
            if(i < n - 1 && v[i + 1][j] == 'o')
                count++;
            if(i > 0 && v[i - 1][j] == 'o')
                count++;
            if(count % 2 != 0){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}