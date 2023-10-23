#include<bits/stdc++.h>

using namespace std;

int main(){
    

    int input, coordX, coordY;
    string inpStr;

    getline(cin, inpStr, " ");

    cout << inpStr;

    for (int i = 1; i <= 5; i++)
    {
        for(int j; j <= 5; j++){
            cin >> input;
            if(input == 1){
                coordX = j;
                coordY = i;
            }
        }
    }
    

    

    cout << (2 - coordX) + (2 - coordY);


    return 0;
}