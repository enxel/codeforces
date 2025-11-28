#include <bits/stdc++.h>
using namespace std;

int main(void){
    int q;
    string s,t;

    cin >> q;

    for(int i = 0; i < q; ++i){
        int n;
        string s,t;
        cin >> n >> s >> t;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        transform(t.begin(), t.end(), t.begin(), ::toupper);
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if( s == t ) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
