#include <bits/stdc++.h>

using namespace std;

int main(){
    int valor_inicio, dinheiro, n_banana;
    int soma = 0;
    cin >> valor_inicio >> dinheiro >> n_banana;
    for(int i = 1; i <= n_banana; i++){
        soma += valor_inicio*i;
    }
    int resul = soma - dinheiro;
    if(resul >= 0)
        cout << resul << endl;
    else 
        cout << 0 << endl;
}
