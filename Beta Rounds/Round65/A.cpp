// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void processword(string w){
    if(w.length() <= 10) cout << w << "\n";
    else{
        cout << w[0] << w.length() - 2 << w[w.length()-1] << "\n";
    }
}

int main() {
    int n;
    string word;
    
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> word;
        processword(word);
    }

    return 0;
}
