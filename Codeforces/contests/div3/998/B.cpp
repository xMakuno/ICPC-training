#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct cow{
    ll id;
    vector<ll>  cards;
};

bool comp(cow a, cow b){
    return a.cards[0] < b.cards[0];
}

int main(){
    ll  T =1;
    cin >> T;
    while(T--){
        ll n, m;
        cin >> n >> m;
        vector<cow> matrix(n);
        for(int i = 0; i < n; ++i){
            cow C;
            vector<ll> v;
            for(int j = 0; j < m; ++j){
                ll temp;
                cin >> temp;
                v.push_back(temp);
            }
            C.id = i + 1;
            C.cards = v;
            matrix.push_back(C);
        }
        sort(matrix.begin(),matrix.end(), comp);
        bool flag = true;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m-1; ++j){
                if(matrix[i].cards[j] > matrix[i].cards[j+1]){
                    flag = false;
                    break;
                }
            } 
        }
        if(!flag){
            cout << "-1\n";
        }else{
            for(int i = 0; i < n; ++i){
                cout << matrix[i].id << " \n"[i == n-1];
            }
        }
    }
    return 0;
}