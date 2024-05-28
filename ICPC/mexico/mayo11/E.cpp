#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, n;
    cin >> a >> b >> n;
    for(int i = 0; i < n; ++i){
        cout << a*(i+1) + b << " \n"[i==n-1];
    }
    return 0;
}