#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    map<char,int> m;
    m['A'] = 0;
    m['C'] = 0;
    m['G'] = 0;
    m['T'] = 0;
    for(int i = 0; i < s.size();++i){
        m[s[i]]++;
    }
    pair<char,int> p = {'x', 1e6+5};
    for(auto it = m.begin(); it != m.end(); ++it){
        if((*it).second <= p.second){
            p = *it;
        }
    }
    for(int i = 0; i < p.second+1; ++i){
        cout << p.first;
    }
    cout << '\n';
    return 0;
}