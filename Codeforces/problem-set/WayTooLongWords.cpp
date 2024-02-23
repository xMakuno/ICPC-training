#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int TC;
    string word;
    scanf("%d", &TC);

    while(TC--){
        cin >> word;
        int size = word.length();
        if( size > 10){
            printf("%c%d%c\n", word.at(0), word.length()-2,word.back());
        }else{
            cout << word << "\n";
        }
    }

    return 0;
}