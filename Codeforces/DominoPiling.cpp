#include<bits/stdc++.h>

using namespace std;

int main(){

    int m, n;

    scanf("%d %d", &m, &n);

    if( m % 2 == 0 || n % 2 == 0 ){
        printf("%d", m*n/2);
    } else{
        printf("%d", (m*n-1)/2);
    }
    return 0;
}