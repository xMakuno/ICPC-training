#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n%2){
        cout << "0\n";
    }else{
        cout << (n/4)-((n/2)%2==0);
    }
    return 0;
}