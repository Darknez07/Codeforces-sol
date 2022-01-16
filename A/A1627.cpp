#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int t,n,m,r,c,x,y,sum;
    char ch;
    cin>>t;
    while(t--){
        vector<pair<int,int> > v;
        cin>>n>>m>>r>>c;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>ch;
                if(ch == 'B')
                    v.push_back(make_pair(i + 1,j + 1));
            }
        }
        if(v.size() == 0){
            cout<<-1<<endl;
            continue;
        }
        sum = 2;
        for(int i=0;i<v.size();i++){
            x = abs(v[i].first - r);
            y = abs(v[i].second - c);
            sum = min(((x == 0 && y == 0) ? 0: ((x == 0 || y == 0) ? 1: 2)),sum);
        }
        cout<<sum<<endl;
    }
    return 0;
}