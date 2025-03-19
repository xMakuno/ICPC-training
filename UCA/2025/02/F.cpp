#include<bits/stdc++.h>
using namespace std;

struct coso{
    int id;
    int d;
    int s;

    bool operator<(const coso &other) const {
        if (d != other.d) return d > other.d;
        if (s != other.s) return s > other.s;
        return id > other.id;
    }
};

bool comp(const coso &a, const coso &b){
    if (a.d * b.s != b.d * a.s) 
        return a.d * b.s < b.d * a.s; 
    return a.id < b.id; 
}


int thing(vector<coso> &list){
    int penalty = 0, days = 0;
    for(int i = 0; i < list.size(); ++i){
        if(i!=0){
            penalty+=list[i].s*days;
        }
        days+= list[i].d;
    }
    return penalty;
}


int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<coso> v;
        for(int i = 0; i < N; ++i){
            coso Coso;
            cin >> Coso.d >> Coso.s;
            Coso.id = i + 1;
            v.push_back(Coso);
        }
        sort(v.begin(), v.end(), comp);
        for(auto &c : v){
            cout << c.id << " ";
        }
        cout << '\n';
    }
    return 0;
}