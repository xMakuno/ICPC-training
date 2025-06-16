    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int main(){
        /* ios_base::sync_with_stdio(false);
        cin.tie(0); */
        int T = 1;
        cin >> T;
        while(T--){
            int n;
            cin >> n;
            map<int,int> diag;
            for(int i = -n; i <= n; ++i){
                diag[i] = 0;
            }
            for(int i = 0; i < n; ++i){
                for(int j = 0; j < n; ++j){
                    int temp;
                    cin >>  temp;
                    if(temp < 0){
                        diag[i-j]=max(diag[i-j],-temp);
                    }
                }
            }
            int ans = 0;
            for(auto it = diag.begin(); it != diag.end(); ++it){
                ans+=(*it).second;
            }
            cout << ans << endl;
        }
        return 0;
    }