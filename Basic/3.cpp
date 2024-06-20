#include <iostream>
using namespace std;
int main(){
    int x,y;
    while(cin >> x >> y)
    cout << (((x*x+y*y)>10000)?"outside\n":"inside\n");
}
