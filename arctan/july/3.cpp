#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    deque<int> dq;
    for(int i = 0; i < n; ++i){
        int temp;   cin >> temp;
        dq.push_back(temp);
    }
    sort(dq.begin(), dq.end());
    int ops = 0;
    while(dq.size() > 1){
        auto mx = dq.end();
        auto mn = dq.begin();
        mx--;
        // cout << "max: " << (*mx) << " min: " << (*mn) << '\n';
        if(mn == mx){
            // cout << "I broke\n";
            break;
        }
        int mod = (*mx) % (*mn);
        dq.pop_back();
        if(mod){
            dq.push_front(mod);
        }
        ops++;
    }
    cout << ops << '\n';
    return 0;
}