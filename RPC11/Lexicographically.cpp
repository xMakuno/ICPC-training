#include<bits/stdc++.h>

using namespace std;


int partition(int arr[], int start, int end)
{
 
    int pivot = arr[start];
 
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
 
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
 
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (arr[i] <= pivot) {
            i++;
        }
 
        while (arr[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}

void quicksort(int arr[], int start, int end){
    // base case
    if (start >= end)
        return;
 
    // partitioning the array
    int p = partition(arr, start, end);
 
    // Sorting the left part
    quicksort(arr, start, p - 1);
 
    // Sorting the right part
    quicksort(arr, p + 1, end);
}


char findLetter(int position){
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    return alphabet[position];
}

int main(){

    string word;
    int k;
    cin >> word >> k;
    int height = k;
    int length = ceil( (double) word.size() / (float) k);

    int matrix[height][length];
    int (*ptr)[height][length];

    ptr = &matrix;
    int lane = 0, temp = 0;

    for(int i = 0; i < word.size(); ++i){
        lane = i % k;
        temp = i / k;

        //cout << word[i] <<  " position is " << (word[i] & 31) << "\n";
        matrix[lane][temp] = (word[i] & 31);
    }

    /* temp = 0;
    for(int i = 0; i < word.size(); ++i){
        lane = i % k;
        temp = i / k;
        printf("Coord %d %d (x,y) has: %d \n", lane, temp, matrix[lane][temp]);
    } */

    int flag = 0;
    for(int i = 0; i <= k; ++i){
        if(i % k == 0){
            quicksort(matrix[i], 0, length-1);
        }else{
            int rows = sizeof(matrix)/sizeof(matrix[i]);
            //cout << rows << endl;
            quicksort(matrix[i], 0, rows-1);
        }
        
    }
    string ans;
    for(int i = 0; i < word.size(); ++i){
        lane = i % k;
        temp = i / k;
        ans += findLetter(matrix[lane][temp]-1);
        //cout << matrix[lane][temp] << " ";
    }

    cout << ans << '\n';
    return 0;
}