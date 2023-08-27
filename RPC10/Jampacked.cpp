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
        ratioFloored = floor(n / k);
        temp = (ratioFloored-1)*k;
        remJars = n - temp;
        cout << floor(remJars/2) << "\n";
    }

    return 0;
}