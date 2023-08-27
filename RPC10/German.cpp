#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int crearUnos(int size){
    string unos = "";
    for(int i=0; i < size; ++i){
        unos += "1";
    }
    return stoi(unos);
}

int main(){
    int n, len, frontera, ans;
    cin >> n;

    if(n <= 9){
        cout << n+1 << "\n";
    }else if(n == 10){
        cout << 10 <<  "\n";
    }else{
        string numStr = to_string(n);
        len = numStr.size();
        frontera = crearUnos(len);
        ans = (numStr.size()-1)*10 + floor(n / frontera);
        cout << ans << "\n";
    }
    return 0;
}