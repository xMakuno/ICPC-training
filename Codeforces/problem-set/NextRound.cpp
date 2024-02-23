#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, k, score, temp, nextRound = 0, grades[n];
    scanf("%d %d", &n, &k);
    temp = n;
    while(temp--){
        cin >> score;
        grades[n-temp] = score;
    }

    for(int i = 0; i < n; i++){
        if(grades[i] >0 && grades[i] >= grades[k-1]){
            nextRound++;
        }
    }

    cout << nextRound;
    return 0;
}