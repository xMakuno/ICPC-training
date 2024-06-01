#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b, maxDiff = INT_MIN;
        cin >> n;
        cin >> a;
        for(int i = 1; i < n; ++i){
            cin >> b;
            maxDiff = max(maxDiff, a-b);
            a = max(a,b);
        }
        cout << maxDiff << '\n';
    }
    return 0;
}

void tle(){
    int n;
    cin >> n;
    vector<int> scores(n,0);
    for(int i = 0; i < n; ++i){
        cin >> scores[i];
    }
    int max = INT_MIN;
    for(int i = 0; i < n-1; ++i){
        for(int j = i+1; j < n; ++j){
            int fuck = scores[i] - scores[j];
            if(max < fuck){
                max = fuck;
            }
        }
    }
    cout << max << '\n';
}