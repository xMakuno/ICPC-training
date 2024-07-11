#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T;
    cin >> T;
    while(T--){
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        for(int i = 0; i < 5; ++i){
            sort(arr, arr+3);
            arr[0]++;
        }
        cout << arr[0]*arr[1]*arr[2] << '\n';
    }
    return 0;
}