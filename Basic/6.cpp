#include <iostream>
using namespace std;
int main(){
    int mon;
    cin >> mon;
    switch(mon){
        case 3: case 4: case 5:
            cout << "Spring\n";
            break;
        case 6: case 7: case 8:
            cout << "Summer\n";
            break;
        case 9: case 10: case 11:
            cout << "Autumn\n";
            break;
        default:
            cout << "Winter\n";
    }
}