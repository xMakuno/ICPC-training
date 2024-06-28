#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool getIndexOfMax(int arr[]){
    if(arr[0] > arr[1]){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int first[n], second[n];
        int sum[2] = {0,0};
        for(int i = 0; i < n; ++i){
            cin >> first[i];
            sum[0] += first[i];
        }
        for(int i = 0; i < n; ++i){
            cin >> second[i];
            sum[1] += second[i];
        }
        for(int i = 0; i < n; ++i){
            if(first[i] > second[i]){
                sum[1] -= second[i];
            }else if(first[i] < second[i]){
                sum[0] -= first[i];
            }else{
                switch(first[i]){
                    case 1:
                        sum[!getIndexOfMax(sum)]++;
                        break;
                    case -1:
                        sum[getIndexOfMax(sum)]--;
                        break;
                }
            }
        }
        cout << min(sum[0],sum[1]) << '\n';
    }
    return 0;
}