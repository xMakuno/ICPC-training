#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<int> boxes(n,0);
    for(int i = 0; i < n; ++i){
        cin >> boxes[i];
    }
    map<int, priority_queue<int>> thing;
    int weight;
    for(int i = 0; i < n; ++i){
        cin >> weight;
        if(thing.count(boxes[i]) > 0){
            thing[boxes[i]].push(-weight);
        }else{
            priority_queue<int> temp;
            temp.push(-weight);
            thing.insert({boxes[i],temp});
        }
    }
    int ans = 0;
    for(auto &[key, value]: thing){
        while(value.size()>1){
            ans -= value.top();
            value.pop();
        }
    }
    cout << ans << '\n';
    return 0;
}