#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int x,y;
        cin >> x >> y;
        int a,b;
        cin >> a >> b;
        if(x == a && y == b){
            cout << "YES\n";
            continue;
        }
        if((x > y && a > b) || (x < y && a < b)){
            cout << "YES\n";
            continue;
        }else{
            cout << "NO\n";
            continue;
        }
    }
    return 0;
}