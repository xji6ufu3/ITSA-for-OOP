#include <iostream>
using namespace std;
int main(){
    int bit[8],a,p=1;
    cin >> a;
    for(int i = 0; i < 8; i++)
        bit[i] = (a&(p<<i))>>i;
    for(int i = 7; i >= 0; i--)
        cout << bit[i];
    cout << '\n';
}