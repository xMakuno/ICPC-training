#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fo(n) for(int i=0;i<n;i++)
#define foi(m,n) for(int i=m;i<n;i++)
#define foj(m,n) for(int j=m;j<n;j++)
#define rev(n) for(int i=n-1;i>=0;i--)
#define revj(n) for(int j=n-1;j>=0;j--)
#define mp make_pair
#define fi first
#define sec second
#define all(v) v.begin(),v.end()
#define pb push_back
#define endl '\n'
#define printa(v) for(auto x: v) { cout << x << " ";}
// Link https://codeforces.com/gym/307122/problem/D
// WA with 18 test cases approved on Codeforces
signed main(){
    int n, k, s;
    cin >> n >> k >> s;
    if( (n-1)*k < s || k > s){
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    int temp;
    temp = s % k;
    int ratio = s/k;
    if(temp == 0){
        fo(k){
            int out;
            if(i % 2 == 0){
                out = 1 + ratio;
            }else{
                out = 1;
            }
            cout << out << " \n"[ i == k-1 ];
        }
    }else{
        int out = 0;
        if( k % 2 == 0){
            fo(k){
                if(i==0){
                    out = 1 + ratio + temp;
                }else{
                    out = (i % 2 == 0)? out + ratio: out - ratio;
                }
                cout << out << " \n"[ i == k-1 ];
            }
        }else{
           fo(k){
                if(i==k-1){
                    out = 1 + ratio + temp;
                }else{
                    out = (i % 2 == 0)? 1 + out + ratio: out - ratio;
                }
                cout << out << " \n"[ i == k-1 ];
            } 
        }
    }
    return 0;
}