#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
int main(){
    int n, k;
    cin >> n >> k;
    set<int> dist_nums;
    map<int, int> counter;
    
    int temp;
    for(int i = 0; i < n; ++i){
        cin >>  temp;
        map<int, int>::iterator it = counter.find(temp);
        dist_nums.insert(temp);
        if(it != counter.end()){
            counter[temp]++;
        }else{
            counter.insert({temp, 1});
        }
    }
    if(dist_nums.size() <= k){
        cout << "0\n";
        return 0;
    }else{
        int ans = 0;
        map<int, int>::iterator it;
        priority_queue<int> check;
        for(it=counter.begin(); it!=counter.end();++it){
            check.push(-(it->second));
        }
        while(k < check.size()){
            ans += (-check.top()); check.pop();
        }
        cout << ans << '\n';
    }
    return 0;
}