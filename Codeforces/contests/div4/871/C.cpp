#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// Bitmasking Section
#define TEST(a,b) ((a) & (1<<(b)))
#define SET(a,b) ((a) | (1<<(b)))
#define FLIP(a,b) ((a) ^ (1<<(b)))
#define CLEAR(a,b) ((a) & ~(1<<(b)))
#define EP2(n) (n == (n&-n))

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int s1 = 1e9+5, s2 = 1e9+5, s3 = 1e9+5;
        for(int i=0; i <n; ++i){
            int a;
            string b;
            cin >> a >> b;
            int task = stoi(b, nullptr, 2);
            // cout << "current task: " << task << '\n';
            if(task){
                switch(task){
                    case 1:
                        s1 = min(s1,a);
                        break;
                    case 2:
                        s2 = min(s2,a);
                        break;
                    case 3:
                        s3 = min(s3,a);
                        break;
                        
                }
            }
        }
        // FIXME: does not print -1
        cout << (s1+s2 < s3 ? s1+s2 :s3) << '\n';
    }
    return 0;
}