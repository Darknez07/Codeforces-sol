#include <iostream>
using namespace std;
int main()
{
    int a, b, t;
    cin>>t;
    while (t--)
    {
        cin >> a >> b;
        if (a > b && 2 * b < a)
        {
            cout << b << endl;
        }
        else if (b > a && 2 * a < b)
        {
            cout << a << endl;
        }
        else
        {
            cout << (a + b) / 3 << endl;
        }
    }
    return 0;
}