#include<bits/stdc++.h>
using namespace std;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n,m;
        cin >> n >> m;
        deque<int> dn(n), dm(m);
        for(int i = 0; i < n; ++i){
            cin >> dn[i];
        }
        for(int i = 0; i < m; ++i){
            cin >> dm[i];
        }
        bool f = true;
        int skip = 0;
        while(!dm.empty()){ 
            // cout << "front: " << dn.front() << " >= " << dm.front() << '\n';
            // cout << "back:  " << dn.back() << " >= " << dm.back() << '\n';
            bool fr = dn.front() >= dm.front();
            bool ba = dn.back() >= dm.back(); 
            if(dm.size()==1){
                if(fr || ba){
                    dm.pop_front();
                }
                break;
            }
            if(dn.size()==1){
                if(fr && ba){
                    if(dm.front()> dm.back()){
                        dm.pop_front();
                    }else{
                        dm.pop_back();
                    }
                }
                break;
            }
            dn.pop_back();
            dn.pop_front();
            if(fr){
                dm.pop_front();
            }
            if(ba){
                dm.pop_back();
            }
            skip += int(!fr) + int(!ba);
            // cout << "sizes: " << dn.size() << " < " << dm.size() << '\n';
            /* if(skip > 1 && dn.size() < dm.size()){
                f=false;
                break;
            } */
        }
        cout << dm.size() << '\n';
        if(dm.empty()){
            cout << "0\n";
        }else if(dm.size() == 1){
            cout << dm.front() << '\n';
        }else{
            cout << "-1\n";
        }
    }
    return 0;
}