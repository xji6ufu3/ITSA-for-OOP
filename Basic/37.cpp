#include <iostream>
using namespace std;
int main(){
    int a[4], s1, s2, d1, d2;
    for(int i = 0; i < 4; i++) cin >> a[i];
    int check = 1;
    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 4; j++){
            if(a[i] == a[j]){
                check = 0;
                s1 = i;
                s2 = j;
                for(int k = 0; k < 4; k++){
                    if(k != s1 && k != s2){
                        d1 = k;
                    }
                }
                break;
            }
        }
    }
    if(check) cout << "R\n";
    else{
        for(int i = 0; i < 4; i++){
            if(i != s1 && i != s2 && i != d1) d2 = i;
        }
        if(a[d1] != a[d2] && (a[d1] == a[s1] || a[d2] == a[s1])) cout << "R\n";
        else if(a[d1] == a[d2] && a[s1] == a[d1]) cout << "WIN\n";
        else if(a[d1] == a[d2]){
            cout << ((a[s1]+a[s2])>(a[d1]+a[d2])?(a[s1]+a[s2]):(a[d1]+a[d2])) << '\n';
        }
        else cout << a[d1]+a[d2] << '\n';
    }
}