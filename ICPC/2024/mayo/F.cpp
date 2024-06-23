#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> coords;
    vector<int> combs;
    for(int i = 0; i < 3*n;++i){ // O(3*n)
        /* int x, y;
        cin >> x >> y;
        coords.push_back({x,y}); */
        combs.push_back((i%n) + 1);
    }
    sort(combs.begin(), combs.end()); // O(3n*log(3n))
    for(int thing : combs){
        cout << thing << " ";
    }
    cout << '\n';
    int ans = 0;
    vector<vector<int>> x(n),y(n);
    int counter = 0;
    // cout << "x- size: " << x.size() << " y-size: " << y.size() << endl;
    do{
        counter++;
        /* for(int i = 0; i < 3*n; ++i){
            
        } */
    }while(next_permutation(combs.begin(), combs.end()));
    cout << counter << endl;
    // cout << fixed << setprecision(1) << ans;
    return 0;
}