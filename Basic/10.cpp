#include <iostream>
using namespace std;
int main(){
    int a,s,tmp;
    cin >> a >> s;
    while(s){
        tmp = s;
        s = a%s;
        a = tmp;
    }
    cout << a << '\n';
}
