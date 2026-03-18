#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        if((n-i)%2 == 0 && i%2==0 && i!=0 && (n-i)!= 0){
            cout << "YES\n";
            n = -1;
            break;
        }
    }
    if(n != -1)cout << "NO\n";
}
