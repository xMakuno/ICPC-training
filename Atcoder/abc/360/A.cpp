#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string table;
    cin >> table;
    map<char, int> plates;
    for(int i = 0; i < 3; ++i){
        plates.insert({table[i],i});
    }
    if(plates['R'] < plates['M']){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}