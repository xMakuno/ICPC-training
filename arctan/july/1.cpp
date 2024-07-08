#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int n; cin >> n;
  ll ans = 0;
  for(int i = 0; i < n; ++i){
    int temp;
    cin >> temp;
    while((temp&1)==0){
        ans++;
        temp/=2;
    }
  }
  cout << ans << '\n';
  return 0;
}