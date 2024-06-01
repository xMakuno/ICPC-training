#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>  t;
    while(t--){
        int a,b, screens;
        cin >> a >> b;
        if( a == 0 && b == 0){
            cout << "0\n";
        } else{
            cout << 11 - t << " ";
            if(a == 0){
                cout << b/2 + 1;
            }else if(b == 0){
                if(a <= 15){
                    cout << "1";
                }else{
                    cout << a/15 + 1;
                }
            }else{
                screens = (b+1)/2;
                int cells;
                if(b&1==0){
                    cells = screens*7;
                }else{
                    cells = screens*11;
                    
                }
            }
            cout << endl;
        }
        
        // cout << (a + b*4)/15 << endl;
    }
    return 0;
}
/*
1 1
2 1
3 2
4 2
5 1
6 1
7 0
8 1
9 1
10 2
11 5
*/