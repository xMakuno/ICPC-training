#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> s;
    bool f = true;
    int last = 0;
    for(int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        s.insert(temp);
        if(temp - last == 1){
            last = temp;
        }else{
            last = -1;
            f = false;
        }
    }
    if(f){
        // cout << "Entre aqui\n";
        if(n&1){
            cout << "Alicius\n";
        }else{
            cout << "Bobius\n";
        }
        return 0;
    }
    if(s.size() == 1){
        cout << "Alicius\n";
    }else{
        int mn = *s.begin();
        if(mn > 1){
            cout << "Alicius\n";
        }else{
            cout << "Bobius\n";
        }
    }/* else{
        vector<int> diff;
        set<int> d_s;
        int prev = 0;
        for(auto it = s.begin(); it != s.end(); ++it){
            diff.push_back(*it - prev);
            d_s.insert(*it-prev);
            prev = *it;
        }
        for(int i = 0; i < diff.size(); ++i){
            cout << diff[i] << " \n"[i == diff.size()-1];
        }

    } */
    return 0;
}