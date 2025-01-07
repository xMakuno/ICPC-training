#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int sum = a+b+c;
        int ratio = n / sum, rem = n % sum;
        int days = ratio*3;
        if(rem == 0){
            cout << days << '\n';
        }else if(rem <= a){
            cout << days +1 << '\n';
        }else if(rem <= a + b){
            cout << days + 2 << '\n';
        }else{
            cout << days + 3 << '\n';
        }
    }
    return 0;
}