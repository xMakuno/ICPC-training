#include<bits/stdc++.h>
using namespace std;
int main(){
    int box[3], choco[3];
    cin >> box[0] >> box[1] >> box[2];
    cin >> choco[0] >> choco[1] >> choco[2];
    sort(box, box + 3);
    sort(choco, choco + 3);
    int ans = 1, ans2 = (box[0] * box[1] * box[2]) / (choco[0] * choco[1] * choco[2]);
    int j = 2;
    for(int i = 0; i < 3; ++i){
        int temp = box[i]/choco[j];
        j--;
        ans *= temp;
    }
    cout << ans << ' ' << ans2 << '\n';
    return 0;
}