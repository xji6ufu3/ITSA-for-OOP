#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1, str2;
    cin >> str1 >> str2;
    int check, time = 0;
    for(int i = 0; i < str2.size()-str1.size()+1; i++){
        check = 1;
        for(int j = 0; j < str1.size(); j++){
            if(str1[j] != str2[i+j]){
                check = 0;
                break;
            }
        }
        if(check) time++;
    }
    cout << time << '\n';
}
