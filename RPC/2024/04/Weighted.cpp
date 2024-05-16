#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> facts;
    for(int i = 0; i < k; ++i){
        facts.push_back(i+1);
    }
    deque<int> nums(n,0);
    for(int i = 0; i < n; ++i){
        cin >> nums[i];
    }
    deque<int> window;
    priority_queue<pair<int, int>> answer;
    int index = 1;
    while(!nums.empty()){
        int temp;
        temp = nums.front(); nums.pop_front();
        window.push_back(temp);
        if(window.size() >= k){
            if(window.size() > k){
                window.pop_front();
            }
            int dotp = inner_product(facts.begin(), facts.end(), window.begin(), 0);
            answer.push({-dotp, -index});
            index++;
        }
    }

    for(int i = 0; i < n - k + 1; ++i){
        cout << -answer.top().second << " " << -answer.top().first << '\n';
        answer.pop();
    }
    return 0;
}