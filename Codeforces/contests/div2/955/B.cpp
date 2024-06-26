#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    // cin >> T;
    while(T--){
        int x, y,k;
        cin >> x >> y >> k;
        bool solved = false;
        while(k--){
            x+=1;
            while(!(x%y)){
                x/=y;
            }
            if(x == 1){
                solved = true;
                break;
            }
        }
        if(!solved){
            cout << x << '\n';
        }else{
            cout << (1 + (k%(y-1))) << '\n';
        }
    }
    return 0;
}   