#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    int t;
    cin >> t;
    while (t--){
       LL r, b, d;
       cin >> r >> b >> d;
       if (r > b) swap(r, b);
       if(r + r * d >= b) cout << "YES";
       else cout << "NO";
       cout << endl;
    }
    return 0;
}