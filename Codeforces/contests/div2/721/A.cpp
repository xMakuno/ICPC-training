#include<bits/stdc++.h>
using namespace std;

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

void solve(int n){
    bool firstOne = false;
    int ans = 0;
    for(int i = 31; i>=0; i--){
        if(TEST(n,i)){
            ans = (SET(ans,i))-1;
            cout << ans << '\n';
            break;
        }
    }
}

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        solve(N);
    }
    return 0;
}
