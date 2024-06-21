#include <iostream>
#include <iomanip>
using namespace std; 
int main(){  
    int a[6];
    int b[6][6];
    for(int i = 0; i < 6; i++) cin >> a[i];
    for(int i = 0; i < 6; i++)
        for(int j = 0; j < 6; j++)
            cout << setw(3) << setfill('0') << a[i]*a[j] << (j==5?'\n':' ');
}  