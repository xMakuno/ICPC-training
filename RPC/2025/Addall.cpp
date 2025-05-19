#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        priority_queue<ll> pq;
        for(int i = 0; i < n; ++i){
            int temp;
            cin >> temp;
            pq.push(-temp);
        }
    
        /* int v1 = -pq.top();
        pq.pop();
        int v2 = -pq.top();
        pq.pop();
        int ans = v1 + v2;
        pq.push(-ans); */
        ll v1;
        ll v2;
        ll ans = 0;
        while(pq.size() > 1){
            // cout << ans <<  endl;
            v1 = -pq.top();
            pq.pop();
            v2 = -pq.top();
            pq.pop();
            // cout <<  v1 << " " << v2 << endl;
            ans += v1+v2;
            pq.push(-(v1+v2));
        }
        cout << ans << endl;
        
    }
    return 0;
}

/*

5
3
1 2 3
4
1 2 3 4
5
5 4 3 2 1
5
3 2 5 1 4
5
1 1 1 1 1

*/