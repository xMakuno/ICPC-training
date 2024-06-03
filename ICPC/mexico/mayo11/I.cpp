#include<bits/stdc++.h>
using namespace std;
int main(){
    int L[3], pa, pb, pc, result;
    cin >> L[0] >> L[1] >> L[2];
    pa = (L[0] >= 2)? 4 : 0;
    pb = (L[1] >= 2)? 2 : 0;
    pc = (L[2] >= 2)? 1 : 0;
    result = pa | pb | pc;
    int maxL = INT_MIN;
    for(int i=0; i < 3; ++i){
        maxL = max(maxL, L[i]);
    }
    int sum = L[0] + L[1] + L[2];
    if(maxL/2 > sum - maxL){
        cout << "0\n";
        return 0;
    }
    switch(result){
        // None repeat
        case 0:
            cout << "6\n" << endl;
            break;
        case 1:
        case 2:
        case 4:
            
            break;
    }


    return 0;
}