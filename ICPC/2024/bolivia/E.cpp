#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<bool> primes(n+1,true);
    multiset<int> factors;

    for(int i = 2; i * i <= n; ++i){
        // cout << i << " fuck\n";
        if(primes[i]){
            int temp = n;
            while(temp % i == 0){
                factors.insert(i);
                temp/=i;
            }
            for(int p = i * i; p <= n; p+=i){
                primes[p] = false; 
            }
        }
    }

    if(primes[n]){
        cout << n << '\n';
        return 0;
    }

    int no_x = 1;
    for(auto it = factors.begin(); it != factors.end(); ++it){
        cout << (*it) << "x\n"[ no_x == factors.size()];
        no_x++;
    }
    return 0;
}