#include<bits/stdc++.h>
#define ll long long
#define vl vector<ll>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<int> alpha(26);
    for(int i = 0; i < s.size(); ++i){
        alpha[s[i]-'A']++;
    }
    priority_queue<pair<char, int>> pq;
    for(int i = 0; i < 26; ++i){
        // cout << (char)  (i + 'A') << " \n"[i == 25];
        if(alpha[i]&1){
            pq.push({(char)  (i + 'A'), alpha[i]});
        }
    }
    deque<char> dq;
    if((s.size() % 2 == 0 && pq.size() > 0) || (s.size()%2==1 && pq.size() > 1)){
        cout << "NO SOLUTION\n";
        return 0;
    }else if( pq.size()== 1){
        auto odd = pq.top();
        pq.pop();
        for(int i = 0; i < odd.second; ++i){
            dq.push_back(odd.first);
        }
    }
    for(int i = 0; i < 26; ++i){
        if(alpha[i] > 0 && alpha[i] % 2 == 0){
            while(alpha[i]){
                dq.push_back((char) (i + 'A'));
                dq.push_front((char) (i + 'A'));
                alpha[i]-=2;
            }
        }
    }
    for(int i = 0; i < dq.size(); ++i){
        cout << dq[i];
    }
    cout << '\n';
    return 0;
}