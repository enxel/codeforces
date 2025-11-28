#include <iostream>
using namespace std;

int main(void){
	bool possible;
	int t, n, sp, ep, s, e;
	
	cin >> t;
	
	for(int i = 0; i < t; ++i){
		possible = true;
		cin >> n;
		
		cin >> sp >> ep;
		
		for(int a = 1; a < n; ++a){
			cin >> s >> e;
			
			if(s >= sp && e >= ep) possible = false;
		}
		
		if(possible) cout << sp << "\n";
		else cout << "-1\n";
	}

	return 0;
}
