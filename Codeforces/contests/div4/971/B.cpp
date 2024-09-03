#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        string thing = "";
        stack<int> ans;
        for(int i = 0; i < n; ++i){
            cin >> thing; 
            for(int j = 0; j < 4; ++j){
                if(thing[j] == '#'){
                    ans.push(j+1);
                    break;
                }
            }
        }
        while(!ans.empty()){
            int temp = ans.top();
            cout << temp << " ";
            ans.pop();
        }
        cout << '\n';
    }
    return 0;
}