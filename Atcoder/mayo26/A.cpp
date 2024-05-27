#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i < n; ++i){
        arr[i] = i + 1;
    }
    priority_queue<int> p;
    int temp;
    for(int i = 0; i < n; ++i){
        cin >> temp;
        p.push(-temp);
    }
    int pointer = 0;
    while(!p.empty()){
        if(-p.top() == arr[pointer]){
            p.pop();
            pointer++;
        }else{
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}