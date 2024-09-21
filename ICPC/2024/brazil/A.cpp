#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int N, K;
    cin >> N >> K;
    K-=N-1;
    cout << K/N << endl;
    return 0;
}