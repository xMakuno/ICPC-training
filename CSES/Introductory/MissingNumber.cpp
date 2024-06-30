#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n-1; ++i){
        cin >> arr[i];
    }
    sort(arr, arr+n-1);
    int ans = 1;
    for(int i = 0; i < n-1; ++i){
        if(arr[i] != ans){
            break;
        }else{
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}