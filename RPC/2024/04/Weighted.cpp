#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int facts[3] = {1, 2, 3};
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
            int dotp = facts[0]*window[0] + facts[1]*window[1] + facts[2]*window[2];
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