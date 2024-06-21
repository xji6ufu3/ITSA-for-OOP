#include <iostream>
#include <string>
using namespace std; 
int main(){
    int n,a;
    cin >> n;
    string str[] = {"Mercury","Venus","Earth","Mars","Juputer","Saturn","Uranus","Neptunus","Pluto"};
    while(n--){
        cin >> a;
        cout << a << ' '+str[a-1]+'\n';
    }
}