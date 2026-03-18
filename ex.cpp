#include <bits/stdc++.h>

using namespace std;

int main(){
    std::set<char> meuSet;
    
    string nome;
    cin >> nome;
    for(int i = 0.; i < nome.length(); i++){
        meuSet.insert(nome[i]);
    }

    if(meuSet.size()%2==0)cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";
    return 0;
}