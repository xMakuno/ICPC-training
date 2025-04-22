#include<bits/stdc++.h>
using namespace std;

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> v(n+1);
        int detour = -1;
        for(int i = 1; i<=n; ++i){

            cin >> v[i];
            if(detour == -1 && i > 1 && (v[i-1] == 0 && v[i] == 1)){
                detour = i-1;
            }
        }
        if(v[1]==1){
            cout << n+1 << " ";
            for(int i = 1; i <= n; ++i){
                cout << i << " ";
            }
            cout << endl;
        }else if(v[n] == 0){
            
            for(int i = 1; i <= n+1; ++i){
                cout << i << " ";
            }
            cout << endl;
        }else if(detour != -1){
            for(int i = 1; i <= n; ++i){
                if(i == detour){
                    cout << i << " " << n+1 << " ";
                }else{
                    cout << i << " \n"[i==n];
                }
            }
        }else{

        }

    }
    return 0;
}