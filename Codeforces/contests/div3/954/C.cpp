#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n,m, temp;
        cin >> n >> m;
        string s, c;
        map<int, int> ind;
        cin >> s;
        
        for(int i = 0; i < m; ++i){
            cin >> temp;
            if(ind.find(temp) == ind.end()){
                ind.insert({temp,1});
            }else{
                ind[temp]++;
            }
        }
        
        cin >> c;

        deque<int> thing;
        for(int i = 0; i < m; ++i){
            thing.push_back(c[i] - 'a');
        }
        /* for(int i = 0; i < n; ++i){
            cout << char(thing[i] + 'a') << " \n"[i == n - 1];
        } */
        sort(thing.begin(), thing.end());

        

        for(auto [key, val]: ind){
            // cout << "{ " << key << " : " << val << " } ";
            if(val > 1){
                int counter = val - 1;
                while(counter--){
                    thing.pop_back();
                }
            }
            /* cout << "Char to replace: "<<  s[key-1] << '\n';
            cout << "New char: " << char(thing.front() + 'a') << '\n'; */
            s[key-1] = char(thing.front() + 'a');
            thing.pop_front();
        }
        // cout << endl;
        cout << s << '\n';

    }   
    return 0;
}