#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long> start(n,0);
    vector<long> ends(n,0);
    for(int i=0;i<n;i++){
        cin>>start[i]>>ends[i];
    }
    long min_start = LONG_MAX;
    long max_end = -1;
    for(int i=0;i<n;i++){
        min_start = min(min_start,start[i]);
        max_end = max(max_end,ends[i]);
    }
    int indx = -1;
    for(int i=0;i<n;i++){
        if(start[i] == min_start && ends[i]  == max_end){
            indx = i + 1;
            break;
        }
    }
    cout<<indx<<endl;
    return 0;
}