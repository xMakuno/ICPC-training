#include<bits/stdc++.h>
using namespace std;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        bool sq = false, one = false;
        int prev = 0, now = 0;
        for(int i = 0; i < N; ++i){
            now = 0;
            for(int j = 0; j < N; ++j){
                char temp;
                cin >> temp;
                now+= temp - '0';\
            }
            if(prev !=0 && prev == now){
                sq = true;
            }
            prev = now;
        }
        if(sq){
            cout << "SQUARE\n";
        }else{
            cout << "TRIANGLE\n";
        }
    }
    return 0;
}