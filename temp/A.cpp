#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int nums[3];
        cin >> nums[0] >> nums[1] >> nums[2];
        sort(nums, nums+3);
        cout << abs(nums[0]-nums[1]) + abs(nums[2]-nums[1]) << '\n';
    }
    return 0;
}