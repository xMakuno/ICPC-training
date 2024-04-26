#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, ai, mex = 0;
    int array[n];
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> ai;
        array[i] = ai;
        if(ai == mex){
            mex = ai + 1;
        }
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i){
        solve();
    }
    return 0;
}

/*
In C++ :-
Precomputation:
- Create a set and a frequency map(or array).
- Fill the set with all numbers from 0 to n+1.
- Now, traverse in the array, if the element is within [0, n+1] remove it from the set, and keep updating the frequency map(or array). It takes at worst O(NlogN) time.
- Now, for any state, the set.begin() will give the MEX of the current array.
For updates:
- If the element to be replaced, is within [0, n+1] then update its frequency in the frequency map(or array) and if after updating, the frequency of that element becomes zero, insert it into our set. It takes O(logN) time.
- Now if the element which is placed in that position is within [0, n+1] then update its frequency in the frequency map(or array) and remove it from our set(if its present). It takes O(logN) time.
- And yet again, after any update, set.begin() will give us the current MEX in O(1).
*/