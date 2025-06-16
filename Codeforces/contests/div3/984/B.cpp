#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        int n,k;
        cin >> n >> k;
        map<int,int> things;
        for(int i = 0; i < k; ++i){
            int b,c;
            cin >> b >> c;
            if(things.count(b) == 0){
                things[b] = c;
            }else{
                things[b] += c;
            }
        }
        priority_queue<int> pq;
        for(auto it = things.begin(); it != things.end(); ++it){
            pq.push((*it).second);
        }
        ll ans = 0;
        while(!pq.empty() && n--){
            ans+= pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}