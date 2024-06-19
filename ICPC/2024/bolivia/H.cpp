#include<bits/stdc++.h>
using namespace std;
int main(){
    string M;
    cin >> M;
    vector<int> hs(M.size()+1, 0);
    int curr = 0, max_h = 0;
    for(int i = 0; i < M.size(); ++i){
        if(max_h == -1){
            max_h = 1;
        }
        if(M[i] == '+'){
            curr++;
        }else{
            curr--;
        }
        hs[i+1] = curr;
        if(hs[max_h] < curr){
            max_h = i+1;
        }
    }
    cout << max_h << '\n';
    return 0;
}