#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        deque<int> dq(n);
        for(int i=1; i <=n;++i){
            dq[i-1]=i;
        }
        int pointer = n-2;
        vector<int> ans;
        while(pointer>=0){
            if(s[pointer] == '<'){
                ans.push_back(dq.front());
                dq.pop_front();
            }else{
                ans.push_back(dq.back());
                dq.pop_back();
            }
            pointer--;
        }
        ans.push_back(dq.front());
        for(int i = n-1; i >= 0; --i){
            cout << ans[i] << " \n"[i==0];
        }
    }
    return 0;
}