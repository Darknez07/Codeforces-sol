#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int l, r, d, u, x, y, x1, y1, x2, y2, t;
    cin >> t;
    while (t--)
    {
        // Check all not possible cases
        cin >> l >> r >> d >> u >> x >> y >> x1 >> y1 >> x2 >> y2;
        if(r - l > x2 - x || l - r > x - x1){ // Check for out of bounds
            cout<<"No"<<endl;
            continue;
        }
        if(u - d > y2 - y || d - u > y - y1){
            cout<<"No"<<endl;
            continue;
        }
        if(x1 == x2 && (l + r) > 0){
            cout<<"No"<<endl;
            continue;
        }
        if(y1 == y2 && (u + d) > 0){
            cout<<"No"<<endl;
            continue;
        }
        cout<<"Yes"<<endl;
    }
    return 0;
}