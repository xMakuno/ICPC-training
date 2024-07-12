#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    ll sum = n * (n+1) /2;
    if(sum & 1){
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    vector<int> perm(n);
    for(int i = 0; i < n; ++i){
        perm[i] = i+1;
    
    }
    int l = 0, r = perm.size() - 1;
    vector<int> v1, v2;
    if(n&1){
        v1.push_back(perm[r]);
        r--;
    }
    bool turnTwo = true;
    while(l < r){
        if(turnTwo){
            v2.push_back(perm[r]);
            v2.push_back(perm[l]);
        }else{
            v1.push_back(perm[r]);
            v1.push_back(perm[l]);
        }
        l++;
        r--;
        turnTwo = !turnTwo;
    }
    cout << v1.size() << '\n';
    for(int i = 0; i < v1.size(); ++i){
        cout << v1[i]<< " \n"[i==v1.size()-1];
    }
    cout << v2.size() << '\n';
    for(int i = 0; i < v2.size(); ++i){
        cout << v2[i] << " \n"[i==v2.size()-1];
    }
    return 0;
}