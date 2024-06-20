#include <iostream>
using namespace std;
int main(){
    int a,check = 1;
    cin >> a;
    for(int i = 2; i < a; i++){
        check = a%i;
        if(!check) break;
    }
    if(!check) cout << "NO\n";
    else cout << "YES\n";
}