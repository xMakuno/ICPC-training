#include<bits/stdc++.h>
using namespace std;
#define foi(m,n) for(int i=m;i<n;i++)
#define foj(m,n) for(int j=m;j<n;j++)
#define rev(n) for(int i=n-1;i>=0;i--)
#define revj(n) for(int j=n-1;j>=0;j--)
#define mp make_pair
#define fi first
#define sec second
#define all(v) v.begin(),v.end()
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define endl '\n'
#define printArr(v,n) for(int i = 0; i < n; ++i) { cout << v[i] << " \n"[i==n-1];}
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define newL cout << '\n';
typedef long long ll;
// Double-Type Operations Section
// safe double operations and etc. Stole it from my buddy @arctan

int isqrt(int n) {
    int lo = 0, hi = n;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (mid * mid <= n) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return lo - 1;
}

long long div_ceil(long long a, long long b) {
    return (b >= 0 ? (a + b - 1) : a) / b;
}

const int MAX = 1e9 +5;

double dist(int i, int j) {
    int x[MAX], y[MAX];
	return sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
}

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
    return 0;
}