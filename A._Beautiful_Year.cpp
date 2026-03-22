#include <bits/stdc++.h>

using namespace std;

int main(){
    std::set<char> meuSet;
    string ano;
    int anoInt;
    cin >> anoInt;
    anoInt += 1;
    ano = std::to_string(anoInt);
    while(true){
        for(int i = 0; i < 4; i++)
            meuSet.insert(ano[i]);
        if(meuSet.size()==4){
            cout << ano; 
            break;
        }
        int anoInt = std::stoi(ano);
        anoInt++;
        ano = std::to_string(anoInt);
        meuSet.clear();
    }
}
