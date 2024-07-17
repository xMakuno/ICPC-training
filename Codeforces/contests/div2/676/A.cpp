#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// Bitmasking Section
#define TEST(a,b) ((a) & (1<<(b)))
#define SET(a,b) ((a) | (1<<(b)))
#define FLIP(a,b) ((a) ^ (1<<(b)))
#define CLEAR(a,b) ((a) & ~(1<<(b)))
#define EP2(n) (n == (n&-n))

void toBinary(unsigned int n){
	for(int i = 31; i>=0; i--)
		cout<<(TEST(n,i)?1:0);
	cout<<'\n';
}

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int a, b;
        cin >> a >> b;
        cout << (a ^ b) << '\n';
    }
    return 0;
}
