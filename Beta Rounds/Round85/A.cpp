// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
    int i;
    string word1, word2;
    
    cin >> word1 >> word2;
    transform(word1.begin(), word1.end(), word1.begin(), ::toupper); 
    transform(word2.begin(), word2.end(), word2.begin(), ::toupper);
    
    for(i = 0; i < word1.length(); ++i){
        if(word1[i] < word2[i]){
            cout << "-1\n";
            break;
        }else
            if(word1[i] > word2[i]){
                cout << "1\n";
                break;
            }
    }
    
    if(i == word1.length()) cout << "0\n";

    return 0;
}
