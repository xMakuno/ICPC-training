#include<iostream>

using namespace std;

int main(){

    int TC;
    scanf("%d", &TC);
    int a, b, c, counter  = 0;

    while(TC--){
        scanf("%d %d %d", &a, &b, &c);
        if(a + b + c >= 2){
            counter++;
        }
    }

    cout << counter;

    return 0;
}