#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N, M;
    cin >> N >> M;
    int capacities[N];
    for(int i = 0; i < N; i++)
        cin >> capacities[i];
    
    //sort(capacities,capacities+N);

    int i;
    bool flag = false;
    for(i = 0; i < N; i++)
        if(capacities[i] >= M){
            flag = true;
            break;
        }
    
    if(flag) cout << i+1 << "\n";
    else cout << "-1\n";

    return 0;
}
