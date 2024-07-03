#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    double a,b,x;
    cin >> a >> b >> x;
    double z = atan(a*b/x);
    cout << setprecision(12) << z * (180.0/3.141592653589793238463)<< '\n';
    return 0;
}