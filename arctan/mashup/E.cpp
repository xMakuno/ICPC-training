#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    // cin >> T;
    while(T--){
        string input;
        cin >> input;
        bool valid = false;
        for(int i = 0; i < input.size(); ++i){
            if(input[i] != 'a'){
                valid = true;
                input[i] = char(int(input[i]) - 1);
            }else if(valid && input[i] == 'a'){
                break;
            }
        }
        cout << input << '\n';
    }
    return 0;
}