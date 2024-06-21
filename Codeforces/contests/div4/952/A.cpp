#include<iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        string a, b;
        cin >> a >> b;
        cout << b[0] << a[1] << a[2] << " ";
        cout << a[0] << b[1] << b[2] << '\n';
    }
    return 0;
}