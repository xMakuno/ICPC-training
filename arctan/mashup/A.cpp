#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n, sum = 0;
        cin >> n;
        set<int> thing;
        int temp;
        for(int i = 0; i < n; ++i){
            cin >> temp;
            thing.insert(temp);
        }
        if(thing.size() > 1){
            cout << "1\n";
        }else{
            cout << n << '\n';
        }
    }
    return 0;
}