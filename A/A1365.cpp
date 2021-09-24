#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, m, ch, v, i, j;
    cin >> t;
    while (t--){cin >> n >> m;vector<int> v1(n, 0);vector<int> v2(m, 0);for (i = 0; i < n; i++){for (j = 0; j < m; j++){cin >> ch;if (ch == 1){v1[i] = 1;v2[j] = 1;}}}if (count(v1.begin(), v1.end(), 1) == v1.size() || count(v2.begin(), v2.end(), 1) == v2.size()){cout << "Vivek\n";}else{v = 0;for (i = 0; i < n; i++){if (v1[i] == 0){for (j = 0; j < m; j++){if (v2[j] == 0){v2[j] = 1;v1[i] = 1;v = v == 0 ? 1 : 0;break;}}if (j == m)break;}}puts(v ? "Ashish": "Vivek");}}
    return 0;
}