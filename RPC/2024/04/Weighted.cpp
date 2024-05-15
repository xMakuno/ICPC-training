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
    while(!nums.empty()){
        int temp;
        temp = nums.front(); nums.pop_front();
        
    }
    return 0;
}