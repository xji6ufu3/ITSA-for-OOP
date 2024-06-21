#include <iostream>
using namespace std;
int main(){
    int a[105], c = 0;
    while(cin >> a[c++]);
    c--;
    while(c--) cout << a[c] << (c!=0?' ':'\n');
}