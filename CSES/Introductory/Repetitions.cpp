#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string word;
    cin >> word;
    char last = 'Z';
    int ans = 0, rep = 1;
    for(int i = 0; i < word.size(); ++i){
        if(last != word[i]){
            last = word[i];
            ans = max(ans, rep);
            rep = 1;
        }else{
            rep++;
        }
    }
    ans = max(ans, rep);
    cout << ans << '\n';
    return 0;
}