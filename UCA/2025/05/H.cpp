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
        // S, B, A
        int f[3] = {0,0,0};
        int fok = 0; 
        for(int i = 0; i < n; ++i){
            char c;
            cin >> c;
            if(c == 'S'){
                c = 'C';
            }
            fok = (fok | ( 1  << (c-'A')));
            f[c-'A']++;
        }
        /* cout << fok << '\n';
        for(int i = 0 ; i < 3; ++i){
            cout << f[i] << " \n"[i==2]; 
        } */
        switch(fok){
            case 1:
            case 2:
                cout << n << '\n';
                break;
            case 3:
            case 7:
                cout << "1\n";
                break;
            case 4:
                cout << "2\n";
                break;
            case 5:
            case 6:
                cout << max(f[0],max(f[1],f[0]+f[1]-f[2])) << '\n';
                break;
        }
    }
    return 0;
}