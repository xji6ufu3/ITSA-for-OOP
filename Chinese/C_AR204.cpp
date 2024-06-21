#include <iostream>
#include <string>
using namespace std; 
int main(){
    int n,y,tmp;
    cin >> n;
    string str[] = {"pig","rat","ox","tiger","rabbit","dragon","snake","horse","sheep","monkey","rooster","dog"};
    while(n--){
        cin >> y;
        tmp = y;
        if(tmp<0) tmp++;
        while(tmp<0) tmp+=12;
        cout << y << ' ' << str[tmp%12]+'\n';
    }
}