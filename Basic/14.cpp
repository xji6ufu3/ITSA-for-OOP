#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1, str2;
    cin >> str1;
    int yes = 1;
    for(int i = str1.size()-1; i >= 0 ; i--) str2[str1.size()-1-i] = str1[i];
    for(int i = 0; i < str1.size(); i++){
        if(str1[i] != str2[i]){
            yes = 0;
            break;
        }
    }
    if(yes) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
