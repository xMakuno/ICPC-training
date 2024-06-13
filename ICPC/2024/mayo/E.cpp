#include <bits/stdc++.h>
using namespace std;
#define ll long long


//Author: David Alberto Sanchez Dias
//Github: @Pyload901
void goat(){
    int n, k;
    cin >> n >> k;
    ll arr[n]={0L}, arrSum[n]={0L}, sum=0L, a;
    vector<pair<ll,int>> vi;
    for (int i = 0; i<n; ++i) {
        cin >> a;
        arr[i] = a;
        sum+=a;
        arrSum[i] += sum;
    }

    int l=0, r=k-1;
    sum = 0L;
    for (int i = 0; i<k; ++i) {
        sum+=arr[i]*(i+1);
    }
    if (k == n) {
        cout << 1 << " " << sum << '\n';
    } else {
        int rank =1;
        vi.push_back(make_pair(sum, rank));
        rank++;
        for(int i = 0; i < n; ++i){
            cout << arrSum[i] << " \n"[i==n-1];
        }
        while(r < n-1) {
            cout << "Sum: " << sum << " adjusting: l - " << arr[l] << " thing - " << arrSum[r] - arrSum[l] << endl;
            sum-=arr[l]; //Delete leftmost position since next sum ignores it
            sum-=(arrSum[r] - arrSum[l]);   // Since we have calculated An + An+1 + An+2 -> and we need An+1 + An+2 +An+3
                                            // we need to extract the sum of the digits of An+1 + An+2 and subtract it from the sum
                                            // since their weight go down by 1
            ++r;
            ++l;
            cout << "Arr at r: " << arr[r] << " k: " << k << endl;
            sum+=arr[r]*k;                  // Finally, we just add An+2 (obviously with its weight)
            vi.push_back(make_pair(sum, rank));
            rank++;
        }
        sort(vi.begin(), vi.end());
        for(auto element: vi) {
            cout << element.second << " " << element.first << '\n';
        }
    }
}

int main() {
    goat();
    return 0;
}