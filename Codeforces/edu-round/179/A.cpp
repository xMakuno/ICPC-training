#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(0); */
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int i = 0;
        while((1 << i) <= n){
            i++;
        }
        i--;
        cout << 2*i+3 << endl;
    }
    return 0;
}