#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int sum = 0;
        for(int i=0;i< N;++i){
            int temp;
            cin >> temp;
            sum+=temp;
        }
        cout << sum-N+1 << endl;
    }
    return 0;
}