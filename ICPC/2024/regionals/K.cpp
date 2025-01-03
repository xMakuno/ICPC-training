#include<bits/stdc++.h>
using namespace std;
int main(){
    int K;
    string S;
    cin >> K >> S;
    char last = '2';
    int count = 0;
    int flips = 0;
    for(int i = 0; i < S.size(); ++i){
        if( last != S[i] ){
            last = S[i];
            count = 1;
        }else{
            if(++count == K){
                if( i+1 == S.size() || S[i] == S[i+1]){
                    S[i] = S[i]^'1'^'0';
                }else{
                    S[i-1] = S[i-1]^'1'^'0';
                }
                flips++;
            }
        }
    }
    cout << flips << " " << S << '\n';
    return 0;
}
