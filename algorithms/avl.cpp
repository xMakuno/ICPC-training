#include<bits/stdc++.h>
using namespace std;

struct Node{
    int id, height;
    float x, y;
    Node *left, *right;
    int getHeight(){
        return height;
    }
    void print(){
        cout << "\n==========\n";
        cout << "Node info:";
        cout << "\nid: " << id;
        cout << "\nCoords: ";
        cout << "\nx: " << x;
        cout << "\ny: " << y;
    }
};



int main(){
    Node* tree;
    tree->id = 1;
    tree->x = 0.00001;
    tree->y = 0.00002;
    tree->print();
    return 0;
}