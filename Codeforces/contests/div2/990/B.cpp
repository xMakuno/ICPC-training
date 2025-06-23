#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool comp(set<int> a, set<int> b){
    return a.size() < b.size();
}

int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(0); */
    int T = 1;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        string s;
        cin >>  s;
        vector<set<int>> vs(26);
        for(int i = 0; i < N;++i){
            vs[s[i]-'a'].insert(i+1);
        }
        sort(vs.begin(),vs.end(),comp);
        auto shit = vs.end();
        shit--;
        shit--;
        auto fuck = shit;
        shit++;
        cout << "watafa " << vs.size();
        if((*fuck).size() == 0){
            cout << s << '\n';
        }else{
            int idx = *(*fuck).begin();
            int idx2 = *(*shit).begin();
            cout << s[idx] << " converts to " << s[idx2] << endl;
            s[idx] = s[idx2];
            cout << s << '\n';
        }
    }
    return 0;
}