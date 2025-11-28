#include <bits/stdc++.h>
using namespace std;

int main(void){
    int tc;
    cin >> tc;
    for(int t = 0; t < tc; ++t){
        int n;
        cin >> n;
        int toys[n];
        for(int i = 0; i < n; ++i){
            cin >> toys[i];
        }

        int par = toys[0] % 2;
        bool todos_iguales = true;
        for(int i = 1; i < n; ++i) {
            if( toys[i] % 2 != par ) {
                todos_iguales = false;
                break;
            }
        }
        
        if(!todos_iguales) {
            sort(toys, toys + n);
        }

        for(int i = 0; i < n-1; ++i){
            cout << toys[i] << " ";
        }
        cout << toys[n-1] << "\n";
    }

    return 0;
}
