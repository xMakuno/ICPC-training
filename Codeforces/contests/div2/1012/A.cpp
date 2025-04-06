#include<bits/stdc++.h>
using namespace std;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int x, y, a;
        cin >> x >> y >> a;
        int d = (a + x + y - 1) / (x + y);
        int f = d * (x+y);
        // cout << x << " " << y << " " << a << " " << d << " " << f << " " << f - y << endl;
        if(f == a){
            cout << "NO\n";
        }else if(f-y > a){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}