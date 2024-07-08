#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    set<int> mex;
    //fill mex
    for(int i = 0; i <= n; ++i){
        mex.insert(i);
    }
    for(int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        mex.erase(temp);
        cout << (*mex.begin()) << '\n';
    }
    return 0;   
}