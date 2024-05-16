#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q;
    cin >>  n;
    int arr[n+1];
    for(int i = 1; i <= n; ++i){
        cin >> arr[i];
    }
    
    int ans[n][n+1]; // Se puede cambiar a ans[n][n+1] porque l solo llega hasta n-1 en posicion, osea n-2 en terminos de index
    for(int i = 1; i < n; ++i){
        for(int j = i+1; j < n+1; ++j){
            // Este primer caso del if talvez se puede mover arriba a su propio for  
            if(j - i == 1){ // si la distancia es de 1 solo asignarla para ahorrar operaciones
                int temp = abs(arr[j]-arr[i]);
                ans[i][j] = temp;
                continue;
            }else{
                //Calcular la respuesta
                // Se va a mover un puntero desde j (osea limite izq L) hasta i (osea limite der R)
                int currBest = ans[i][j-1];
                if(currBest != 0){
                    for(int l = i; l < j; ++l){
                        int curr = abs(arr[j] - arr[l]);
                        currBest = min(currBest, curr);
                        if(currBest == 0){ // Si se ha llegadoa la mejor respuesta de 0 solo quebrar
                            break;
                        }
                    }
                }
                ans[i][j] = currBest;
            }
            
        }
    }

    cin >> q;
    int l, r;
    for(int i = 0; i < q; ++i){
        cin >> l >> r;
        cout << ans[l][r] << '\n';
    }
    return 0;
}