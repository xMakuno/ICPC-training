#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int checkFives(int a){
    if(a == 0) return 0;
    return a / 5 + checkFives( a / 5);
}

int main(){
    int N;
    cin >> N;
    cout << checkFives(N) << '\n';
    return 0;
}