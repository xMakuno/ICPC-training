#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<int> colors;
    for(int i=0; i < 3*n; ++i){
        int temp;
        cin >>  temp;
        colors.push_back(temp);
    }
    int ans = 0;
    for(int i = 1; i < 2*n -1; ++i){
        // cout << colors[i-1] << " " << colors[i+1] << endl;
        if(colors[i-1] == colors[i+1]){
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}