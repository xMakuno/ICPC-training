#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans = 0;
    int temp;
    bool flipped = false;
    string memo = "";
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> temp;
        if(i == 0){
            if(temp == 0){
                memo += to_string(temp);
                // cout << "Memo " << memo << " Answer " << ans << endl;
            }else{
                ++ans;
                memo += to_string(temp);
                //cout << "Memo " << memo << " Answer " << ans << endl; 
            }
            cout << "Memo " << memo << " Answer " << ans << endl;
            continue;
        }

        if(temp == 0){
            // cout << "Memo " << memo << " Answer " << ans << endl;
            memo += to_string(temp);
            ans +=  !flipped ? __builtin_popcount(stoi(memo, nullptr, 2)) : memo.size() - __builtin_popcount(stoi(memo, nullptr, 2));
        }else{
            ++ans;
            flipped = !flipped;
            ans +=  !flipped ? __builtin_popcount(stoi(memo, nullptr, 2)) : memo.size() - __builtin_popcount(stoi(memo, nullptr, 2));
            // cout << "Memo " << memo << " Answer " << ans << endl;
            memo += to_string(temp);
        }
        cout << "i " << i << "Memo " << memo << " Answer " << ans << endl;
    }
    cout << ans << endl;
}

void solve2(){
    int n, ans = 0, a[2]= {0,0}, k =0, w=0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
        ++a[k%2];
        if(v[i]==1){
            ans += a[k%2];
            w = a[k%2];
            k++;
        }else{
            ans += w;
        }
    }
    cout << ans;
}

int main(){
    solve2();
    return 0;
}