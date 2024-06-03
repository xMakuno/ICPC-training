#include<bits/stdc++.h>
using namespace std;
int main(){
    typedef pair<int,int> pii;
    int n,m;
    cin >> n >> m;
    vector<pii> road_segments;
    int carry = 0;
    for(int i=0; i<n;++i){
        int d, v;
        cin >> d >> v;
        carry += d;
        road_segments.push_back({carry, v});
    }
    for(pii r : road_segments){
        cout << "distance: " << r.first << " velocity: " << r.second << '\n';
    }
    int index = 0, maxDiff = INT_MIN, journey = 0;
    while(index < n){
        int d,v;
        cin >> d >> v;
        journey += d;
        
        if(road_segments[index].first < journey){
            cout << "distance - " << road_segments[index].first << " journey - "
            cout << "next\n";
            index++;
        }

        if(road_segments[index].second < v){
            cout << maxDiff << " vs " << road_segments[index].second - v << endl;
            maxDiff = max(maxDiff, road_segments[index].second - v);
        }
    }
    cout << maxDiff << '\n';
    return 0;
}