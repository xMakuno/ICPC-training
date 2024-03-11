#include<iostream>
#include<math.h>
using namespace std;

int main(){
    long long n, k, ratioFloored, temp, remJars;
    cin >> n >> k;
    if(n <= k){
        cout << n << "\n";
    } else if(n % k == 0){
        cout << k << "\n";
    }else{
        cout << (long long)(n / ((n/k) +1)) << "\n";
    }
    return 0;
}