#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
	// Find Minimum of a and b
    long long res = min(a, b);

  	// Testing divisiblity with all numbers starting from
	// min(a, b) to 1

    while (res > 1) {

        // If any number divide both a and b, so we
        // got the answer
        if (a % res == 0 && b % res == 0)
            break;
        res--;
    }
	return res;
}

int main(void){
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i){
        int n;
        cin >> n;
        long long A[n];
        for(int j = 0; j < n; ++j){
            cin >> A[j];
        }
        long long f;
        bool flag = false;
        for(f = 2; f <= pow(10,18); ++f){
            for(int j = 0; j < n; ++j){
                if(gcd(f,A[j])==1){
                    cout << f << "\n";
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        if( !flag ) cout << "-1\n";
    }

    return 0;
}
