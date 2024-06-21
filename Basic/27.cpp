#include <iostream>
#include <iomanip>
using namespace std;
int A, B;
char arr[6];
void check(char n, int i){
    if(n == arr[i]) A++;
    else{
        for(i = 0; i < 4; i++)
            if(n == arr[i]){
                B++;
                break;
            }
    }
}
int main(){
    char tmp[6];
    cin >> arr;
    while(1){
        A = B = 0;
        cin >> tmp;
        if(!(tmp[0]-'0' || tmp[1]-'0' || tmp[2]-'0' || tmp[3]-'0')) break;
        for(int i = 0; i < 4; i++) check(tmp[i], i);
        cout << A << 'A' << B << 'B' << '\n';
    }
}
