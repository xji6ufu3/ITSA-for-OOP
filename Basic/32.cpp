#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    char c;
    int n;
    getline(cin,str);
    cin >> n;
    for(int i = 0; i < str.size(); i++){
        if(('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z') || ('0' <= str[i] && str[i] <= '9')){
            if('a' <= str[i] && str[i] <= 'z')
                str[i] = (str[i]-'a'+n)%26+'a';
            else if('A' <= str[i] && str[i] <= 'Z')
                str[i] = (str[i]-'A'+n)%26+'A';
            else
                str[i] = (str[i]-'0'+n)%10+'0';
        }
    }
    cout << str << '\n';
}