#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n, m;
    cin >> n >> m;
    vector<bool> solved(n+1,0);
    vector<int> wa(n+1);
    int sols = 0, pens = 0;
    while(m--){
        int p;
        string s;
        cin >> p >> s;
        if(s == "WA"){
            if(!solved[p]){
                wa[p]++;
            }
        }else{
            if(!solved[p]){
                solved[p] = 1;
                sols++;
                pens += wa[p];
            }
        }
    }
    cout << sols << " " << pens << '\n';
    return 0;
}