#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a;
    while(cin >> a)
    cout << fixed << setprecision(1) << a*1.6 << '\n';
}
