#include <iostream>
using namespace std;
int main(){
    int a,s,d,f;
    while(cin>>a>>s>>d>>f){
        a=a*60+s;
        d=d*60+f;
        a=d-a;
        int sum = 0;
        if(a<=120) sum = 30*(a/30);
        else if(a<=240) sum = 120+40*((a-120)/30);
        else sum = 280+60*((a-240)/30);
        cout << sum;
    }
}