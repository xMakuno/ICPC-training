#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n;
    cin >> k;
    int curr = 1;
    while(n--){
        curr = (curr*2 <= curr+k) ? curr*2 : curr+k;
    }
    cout << curr << '\n';
    return 0;
}