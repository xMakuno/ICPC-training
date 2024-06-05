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

Node* newNode(int id, float x, float y){
    Node* node = new Node();
    node->id = id;
    node->x = x;
    node->y = y;
    node->left = NULL;
    node->right = NULL;
}

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

Node* insertNode(Node* node, int id, float x, float y){
    if(node = NULL){
        return newNode(id, x, y);
    }
    if(id < node->id){
        node->left = insertNode(node->left, id, x, y);
    }else if( id > node->id){
        node->right = insertNode(node->right, id, x, y);
    }
    node->height = 1 + max(node->left->getHeight(), node->right->getHeight());

    int balance = node->getBalance();

    if(balance > 1 && id < node->left->id){
        return rightRotation(node);
    }

    if(balance < -1 && id > node->right->id){
        return leftRotation(node);
    }
    if(balance > 1 && id > node->left->id){
        node->left = leftRotation(node->left);
        return rightRotation(node);
    }
    if(balance < -1 && id < node->right->id){
        node->right = rightRotation(node->right);
        return leftRotation(node);
    }
    return node;
}

Node* search(Node* r, int id){
}

void showPre(Node* head){
    if(head != NULL){
        cout << head->id << " ";
        showPre(head->left);
        showPre(head->right);
    }
}
void showIn(Node* head){
    if(head != NULL){
        showIn(head->left);
        cout << head->id << " ";
        showIn(head->right);
    }
}
void showPos(Node* head){
    if(head != NULL){
        showPos(head->left);
        cout << head->id << " ";
        showPos(head->right);
    }
}

int main(){
    Node* tree;
    tree->print();
    return 0;
}