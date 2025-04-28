#include<bits/stdc++.h>

using namespace std;

int main(){
    int tests = 1;
    cin >> tests;
    for(int test=1; test <= tests; ++test){
        int N, T;
        cin >> N >> T;
        int E;
        cin >> E;
        vector<vector<int>> people(N+1);
        vector<int> ans(N+1);
        bool flag = true;
        for(int i = 0; i < E; ++i){
            int t, p;
            cin >> t >> p;
            people[t].push_back(p);
        }
        for(int i = 1; i <= N; ++i){
            if(i != T){
                sort(people[i].rbegin(),people[i].rend());
                int c_t = people[i].size();
                for(int j = 0; j < people[i].size(); ++j){
                    if(people[i][j] == 0){
                        flag = false;
                        break;
                    }
                    c_t-=people[i][j];
                    ans[i]++;
                    if(c_t <= 0){
                        break;
                    }
                }
                if(!flag){
                    break;
                }
            }
        }
        
        if(flag){
            printf("Case #%d: ", test);
            for(int i = 1; i <= N; ++i){
                cout << ans[i] << " \n"[i==N];
            }
        }else{
            printf("Case #%d: ", test);
            cout << "IMPOSSIBLE\n";
        }
    }
    return 0;
}