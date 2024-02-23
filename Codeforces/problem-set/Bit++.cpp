#include<bits/stdc++.h>

using namespace std;

int main(){

    int TC, variation = 0;
    scanf("%d", &TC);

    string x;

    while(TC--){
        cin >> x;
        if( x == "++X" || x == "X++" ){
            variation++;
        }
        if( x == "--X" || x == "X--"){
            variation--;
        }
    }

    printf("%d", variation);

    return 0;
}