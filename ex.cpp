#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, escolha, soma, acumular = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        soma = 0;
        for(int j = 0; j < 3; j++){
            cin >> escolha;
            if(escolha) soma++;
        }
        if(soma >= 2)acumular++;
    }
    cout << acumular << endl;
}