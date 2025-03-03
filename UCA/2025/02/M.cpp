#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct thing{
    int p;
    int id;
    int turn;
};

bool comp(thing A, thing B){
    if(A.p < B.p){
        return true;
    }else if(B.p < A.p){
        return false;
    }else{
        if(A.turn < B.turn){
            return true;
        }else{
            return false;
        }
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        priority_queue<pair<int,int>> pq;
        int pL[N], idL[N];
        for(int i = 0; i < N; ++i){        
            cin >> idL[i];
        }
        for(int i = 0; i < N; ++i){        
            cin >> pL[i];
        }
        thing arr[N];
        for(int i = 0; i < N; ++i){
            thing Temp;
            Temp.id = idL[i];
            Temp.p = pL[i];
            Temp.turn = i;

            // cout << Temp.id << " " << Temp.p << " " << Temp.id << endl;
            arr[i] = Temp;
        }
        sort(arr, arr + N, comp);
        for(thing &x : arr){
            cout << x.id << " ";
        }
        cout << '\n';
    }
    return 0;   
}