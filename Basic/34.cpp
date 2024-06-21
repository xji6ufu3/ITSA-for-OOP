#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a;
    int s;
    while(cin >> a >> s){
        if(s == 1){
            cout << fixed << setprecision(1) << (a-80)*0.7;
        } else {
            cout << fixed << setprecision(1) << (a-70)*0.6;
        }
        cout << '\n';
    }
}