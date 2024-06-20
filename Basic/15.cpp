#include <iostream>
#include <string>
using namespace std;
int main(){
    int a[26] = {0};
    string str;
    getline(cin, str);
    // gets(str);
    int white = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ' ') white++;
        else if('A' <= str[i] && str[i] <= 'Z') str[i] += 'a'-'A';
        if('a' <= str[i] && str[i] <= 'z') a[str[i]-'a']++;
    }
    cout << white+1 << '\n';
    for(int i = 0; i < 26; i++){
        if(a[i]){
            cout << (char)(i+'a') << " : " << a[i] << '\n';
        }
    }
}
