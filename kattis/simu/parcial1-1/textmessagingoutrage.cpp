#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T;
    cin >> T;
    for(long long t = 0; t < T; ++t){
        long long p,k,l;
        cin >> p >> k >> l;
        // cout << p << " " << k << " " << l << '\n';
        vector<long long> alphabet(l);
        for(long long i = 0; i < l; ++i){
            cin >> alphabet[i];
        }
        sort(alphabet.rbegin(),alphabet.rend());
        long long ans = 0;
        for(long long i = 0; i < l; ++i){
            ans+=(i/k + 1)*alphabet[i];
            // cout << alphabet[i] << " \n"[i==l-1];
        }
        printf("Case #%lld: %lld\n",t+1,ans);
    }
    return 0;
}