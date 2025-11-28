#include <bits/stdc++.h>
using namespace std;

int main(void){
    string healthy;
    int N;
    cin >> healthy;
    cin >> N;
    for(int i = 0; i < N; i++){
        string electro;
        cin >> electro;
        bool flag = true;
        for(int j = 0; j < electro.size(); j = j + healthy.size())
            if(electro.substr(j,healthy.size()) != healthy){
                flag = false;
                break;
            }
        cout << ((flag)?"Yes\n":"No\n");
    }

    return 0;
}
