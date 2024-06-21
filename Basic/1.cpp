#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int power(int num, int power){
    int count = 1;
    for(int i = 0; i < power; i++) count *= num;
    return count;
}
int main(){
    string strNum;
    string str[5][10] = {
        {"*****","    *","*****","*****","*   *","*****","*****","*****","*****","*****"},
        {"*   *","    *","    *","    *","*   *","*    ","*    ","    *","*   *","*   *"},
        {"*   *","    *","*****","*****","*****","*****","*****","    *","*****","*****"},
        {"*   *","    *","*    ","    *","    *","    *","*   *","    *","*   *","    *"},
        {"*****","    *","*****","*****","    *","*****","*****","    *","*****","    *"}
    };
    int num;
    cin >> strNum;
    stringstream ss;
    ss << strNum;
    ss >> num;
    for(int i = 0; i < 5; i++){
        for(int j = 3; j >= 1; j--)
            cout << str[i][num%power(10,j+1)/power(10,j)]+' ';
        cout << str[i][num%power(10,1)/power(10,0)]+'\n';
    }
}
