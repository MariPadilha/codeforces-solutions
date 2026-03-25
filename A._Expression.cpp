#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >>b >>c;
    int maior = 0;
    if(a+b+c > maior)maior=a+b+c;
    if(a*b*c>maior)maior=a*b*c;
    if((a+b)*c > maior)maior=(a+b)*c;
    if((a*b)+c > maior)maior=(a*b)+c;
    if(a+(b*c) > maior)maior=a+(b*c);
    if(a*(b+c) > maior)maior=a*(b+c);
    cout << maior << endl;
}
