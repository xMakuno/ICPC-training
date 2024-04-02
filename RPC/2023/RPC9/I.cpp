#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(n) for(int i=0;i<n;i++)
#define foi(m,n) for(int i=m;i<n;i++)
#define foj(m,n) for(int j=m;j<n;j++)
#define rev(n) for(int i=n-1;i>=0;i--)
#define revj(n) for(int j=n-1;j>=0;j--)
#define mp make_pair
#define fi first
#define sec second
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define pb push_back
#define endl '\n'
#define printa(v) for(auto x: v) { cout << x << " ";}

void merge_function(int l, int r){
    int mid = l + (r - l)/2;

    int i = l, j = mid + 1, pos = i;

    while(i <= mid || j <= r){
        if(i <= mid && j <= r){
            if(arr[i] < arr[j]){
                temp[pos] = arr[i];
                i++;
            }else{
                temp[pos] = arr[j];
                j++;
            }
        }
        else{
            if(i <= mid){
                temp[pos] = arr[i];
                i++;
            }else{
                temp[pos] = arr[j];
                j++;
            }
        }
        pos++;
    }

    for(i = l; i <= r; i++){
        arr[i] = temp[i];
    }

    return;
}

void mergeSort(int l, int r){

    if(r - l > 2){
        int mid = l + (r - l) / 2;

        mergeSort(l, r);
        mergeSort(mid + 1, r);
        merge_function(l, r);
    }
    else if(r - l == 2 && arr[l] > arr[r]){
        swap(arr[l], arr[r]);
    }
    return;
}

int main(){
    string S;
    cin >> S;
    
    return 0;
}