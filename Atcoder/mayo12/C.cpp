#include<bits/stdc++.h>
using namespace std;

bool checkAt(char c){
    switch(c){
        case 'a':
        case 't':
        case 'c':
        case 'o':
        case 'd':
        case 'e':
        case 'r':
            return true;
            break;
        default:
            return false;
            break;
    }

}

int main(){
    string s, t;
    cin >> s;
    cin >> t;
    multiset<char> mS, mT;
    int sAt = 0, tAt = 0;
    for(char c : s){
        mS.insert(c);
    }
    for(char c : t){
        mT.insert(c);
    }
    for(tuple<char,char> i : zip(mS,mT)){
        char a = get<0>(i), b = get<1>(i);
        cout << a << " " << b << endl;
    }

    return 0;
}