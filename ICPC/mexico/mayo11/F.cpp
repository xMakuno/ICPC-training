#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> coords(n,0);
    for(int i = 0; i < n;++i){
        cin >> coords[i];
    }
    // O(n^3) : max n => 15 : 15^3 => 3375 iterations
    for(int i = 0; i < n; ++i){
        for(int j = i+1;j<n; ++j){
            for(int k = j+1; k<n;++k){
                //Probs O(1)
                /*
                Group subsets by value of area
                */
            }
        }
    }
    // 
    return 0;
}