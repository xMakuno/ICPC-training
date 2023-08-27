#include<bits/stdc++.h>

using namespace std;


/* void moveAlpha(string * alphabet, int * move, string * eAlpha){
    for (int i = 0; i < alphabet->size(); i++){
        if(i + move <= alphabetsize()){
            //Desplazamiento sin overflow
            eAlpha[i] = alphabet[i+move];
        }else{
            //Desplazamiento con overflow
            eAlpha[i] = alphabet[i + move - alphabet.size()];
        }
    }
    
}
 */

int main(){

    int move;
    string alphabet = "abcdefghijklmnopqrstuvwxyz", message, eAlpha = "abcdefghijklmnopqrstuvwxyz";
    

    scanf("Insert the desplazamienting: &d\n", &move);

    if(move % 27 == 0){
        printf("El desplazamiento es igual de largo que el sistema de encriptado. \n");
        return 0;
    }

    cout << "Insert the message to encrypt D: \n";
    cin >> message;

    

    string eMessage[message.size()];
    // Alfabeto Desplazado

    // Encryptar Mensaje
    for(int i = 0; i < message.size();  i++){
         
    }

    return 0;
}