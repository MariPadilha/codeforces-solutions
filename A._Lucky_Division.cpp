#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    cin >> n;
    int is_lucky = 1;
    for(int i = 0; i < n.length(); i++){
        if(n[i]!='4' && n[i]!='7'){
            is_lucky=0;
            break;
        } 
    }

    if(is_lucky==1 || stoi(n)%4==0 || stoi(n)%7==0 || stoi(n)%47==0)cout<<"YES\n";
    else cout <<"NO\n";
}
