#include<bits/stdc++.h>
using namespace std;

struct Node{
    int id, height;
    float x, y;
    Node *left, *right;
    int getHeight(){
        if(!height) return 0;
        return height;
    }
    int getBalance(){
        return left->getHeight() - right->getHeight();
    }
    void print(){
        cout << "\n==========\n";
        cout << "Node info:";
        cout << "\nid: " << id;
        cout << "\nCoords: ";
        cout << "\nx: " << x;
        cout << "\ny: " << y;
        cout << "\nheight: " << (!height)? 0: height;
    }
};


/*
        A
       / \
      /   Ar
     /
    B
   / \
  /   Br
 /
C


    B
   / \
  /   \
 /     \
C       A
       / \
      /   \
     Br    Ar
*/

Node* rightRotation(Node* A){
    // Extraer 
    Node* B = A->left;
    Node* Br = B->right;
    B->right = A;
    A-> left = Br;

    A->height = max(A->left->getHeight(), A->right->getHeight()) + 1;
    B->height = max(B->left->getHeight(), B->right->getHeight()) + 1;

    return B;
}

/*
Rotacion 
Antes:

  A
 / \
Al  \
     \
      B
     / \
    Bl  \
         \
          C

Despues:
        B
       / \
      /   \
     /     \
    A       C
   / \
  Al  Bl

*/

Node* leftRotation(Node* A){
    Node* B = A->right;
    Node* Bl = B->left;

    B->left = A;
    A->right = Bl;

    A->height = max(A->left->getHeight(), A->right->getHieght()) + 1;
    B->height = max(B->left->getHeight(), B->right->getHieght()) + 1;

    return B;
}

Node* insertNode(){
}

Node* search(Node* r, int ){
}

void showPre(Node* head){
    if(head != NULL){
        cout << head->id << " ";
        showPre(head->left);
        showPre(head->right);
    }
}
void showIn(){

}
void showPos(){

}

int main(){
    Node* tree;
    tree->id = 1;
    tree->x = 0.00001;
    tree->y = 0.00002;
    tree->print();
    return 0;
}