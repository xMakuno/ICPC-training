#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    if(n==1){
        cout << 1 << '\n';
        return 0;
    }
    else if(1 < n && n < 4){
        cout << "NO SOLUTION\n";
        return 0;
    }

    if((n&1)){
        vector<int> v(n,0);
        int x = 0;
        for(int i = 0; i < n; i+=2){
            v[i] = n-x;
            ++x;
        }
        x=1;
        for(int i = n-2; i > 0; i-=2){
            v[i] = x;
            x++;
        }
        for(int i = 0; i < n; ++i){
            cout << v[i] << " \n"[i==n-1];
        }
    }else{
        vector<int> v(n,0);
        int x = 0;
        for(int i = 1; i < n; i+=2){
            v[i] = n-x;
            ++x;
        }
        x=1;
        for(int i = n-2; i >= 0; i-=2){
            v[i] = x;
            x++;
        }
        for(int i = 0; i < n; ++i){
            cout << v[i] << " \n"[i==n-1];
        }
    }

    return 0;
}