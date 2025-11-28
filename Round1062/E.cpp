#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int tc, n, k;
    ll x;

    cin >> tc;

    for(int t = 0; t < tc; ++t) {
        cin >> n >> k >> x;
        ll a;

        vector<bool> range(x+1, false);
        for(int i = 0; i < n; ++i) {
            cin >> a;
            range[a] = true;
        }

        

        for(ll i = 0; i < x; ++i) {
            if( range[i] == 1 ) {

            } else {

            }
        }

        for(ll i = 0; i < x; ++i) {
            cout << range[i] << " ";
        }
        cout << range[x] << "\n";
    }

    return 0;
}
