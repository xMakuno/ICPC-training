#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int N;
    cin >> N;
    vector<int> v(N+1);
    for(int i = 0; i < N; ++i){
        cin >> v[i];
    }
    int curr, mx;
    mx = 0;
    curr = 1;
    for(int i = 1; i <= N; ++i){
        if(v[i] > v[i-1]){
            curr++;
        }else{
            mx = max(curr, mx);
            curr = 1;
        }
    }
    cout << mx << '\n';
    return 0;
}