#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll N, H = 0, H1 = 0, H2 = 0;
    cin >> N;
    ll A = -1, B = -1, C = -1, D = -1, E = -1;
    while(N--){
        ll tA, tB, tC, tD, tE, tF;
        cin >> tA >> tB >> tC >> tD >> tE;
        tF = (tA > A) + (tB > B) + (tC > C) + (tD > D) + (tE > E);
        if(tF == 3)
            H++;
        else if(tF == 4)
            H1++;
        else if(tF == 5)
            H2++;
        A = max(tA, A), B = max(tB, B), C = max(tC, C), D = max(tD, D), E = max(tE, E);
    }
    cout << H << " " << H1 << " " << H2 << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    // cin >> T;
    while(T--){
        solve();
    }
}
/*
6
1 1 1 1 1
2 2 2 2 2
2 2 3 3 3
3 3 3 4 4
5 5 5 5 5
6 6 5 5 5

*/