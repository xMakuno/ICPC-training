#include<bits/stdc++.h>
using namespace std;

int f(int n){
    int res = 0;
    while(n != 0){
        // cout << "thing: " << n << endl;
        res += n % 10;
        n = n/10;
    }
    if(res < 10){
        return res;
    }else{
        return f(res);
    }
}

int main(){
    int n;
    while(cin >> n && n != 0){
        cout << f(n) << '\n';
    }
    return 0;
}