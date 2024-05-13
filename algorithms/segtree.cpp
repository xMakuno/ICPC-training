#include<bits/stdc++.h>
using namespace std;

void constructTree(int input[], int segTree[], int lo, int hi, int pos){
    // cout << "lo: " << lo << " hi: " << hi << " pos: " << pos << '\n';
    if(lo == hi){
        // cout << "Segtree at pos: "<< segTree[pos] << " input at lo: " << input[lo] << endl;
        segTree[pos] = input[lo];
        return;
    }
    int mid = (lo + hi) / 2;
    constructTree(input, segTree, lo, mid, 2*pos + 1);
    constructTree(input, segTree, mid+1, hi, 2*pos + 2);
    // segment tree for sum queries
    // segTree[pos] = segTree[2*pos+1] + segTree[2*pos+2];
    
    // segment tree for min queries
    segTree[pos] = min(segTree[2*pos+1], segTree[2*pos+2]);
}

int main(){
    int size, segSize;
    cin >> size;
    
    int arr[size], nextPower = log2(size);;
    for(int i = 0; i < size; ++i){
        cin >> arr[i];
    }
    /* for(int i = 0; i < size; ++i){
        cout << arr[i] << " \n"[i == size-1];
    } */
    
    /*
    Formulatic Approach
    int h = ceil(log2(size+1));
    segSize = pow(2, h) - 1;
    */

    if( pow(2,nextPower) == size){
        segSize = size*2 - 1;
    }else{
        segSize = pow(2,nextPower+1)*2 - 1;
    }
    int segTree[segSize];
    constructTree(arr,segTree, 0 ,size-1, 0);
    for(int i = 0; i < segSize; ++i){
        cout << segTree[i] << " \n"[i == segSize - 1];
    }
    // cout << segSize << '\n';
    return 0;
}

/*
4
-1 2 4 0

5
-1 2 4 0 -2 
*/