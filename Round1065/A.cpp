#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n;
    cin >> tc;
    
    for(int t = 0; t < tc; ++t) {
        cin >> n;
        int cont = 0;
        if (n % 2 != 0) {
            cout << "0\n";
        } else {
            int vmax = n / 4;
            for( int v = 0; v <= vmax; ++v) {
                if ((n - 4*v) % 2 == 0) cont++;
            }
            cout << cont << "\n";
        }
    }

    return 0;
}
