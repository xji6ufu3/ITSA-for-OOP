#include <iostream>
using namespace std;
int main(){
    int year;
    cin >> year;
    scanf("%d",&year);
    if(!(year%400) || year%100 && !(year%4)) cout << "Bissextile Year\n";
    else cout << "Common Year\n";
}