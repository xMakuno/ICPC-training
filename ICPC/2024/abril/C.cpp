#include<bits/stdc++.h>
using namespace std;
int main(){
    int L, W, H;
    cin >> L >> W >> H;
    int d[3];
    for(int i = 0; i < 3; ++i){
        cin >> d[i];
    }
    if(L*W*H < d[0]*d[1]*d[2]){
        cout << "0\n";
        return 0;
    }
    sort(d,d+3);
    int m = -1;
    int pseudo_l, pseudo_w, pseudo_h;
    do{
        pseudo_l = L/d[0];
        pseudo_w = W/d[1];
        pseudo_h = H/d[2];
        //cout << "Testing: " << pseudo_l << " " << pseudo_w << " " << pseudo_h << endl;
        m = max(m, pseudo_l*pseudo_w*pseudo_h);
    }while(next_permutation(d,d+3));
    cout << m << "\n";
    return 0;
}