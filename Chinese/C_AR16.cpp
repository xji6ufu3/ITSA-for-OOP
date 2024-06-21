#include <iostream>
#include <string>
using namespace std;
int main(){  
    string str[4], tmp;
    for(int i = 0; i < 4; i++) cin >> str[i];
    int n;
    int p[7];
    for(int i = 0; i < 7; i++) p[i] = 0;
    cin >> n;
    while(n--){
        cin >> tmp;
        if(tmp != str[0]) p[0]++;
        else if(tmp != str[1] || tmp != str[2] || tmp != str[3]) p[1]++;
        else if(tmp.substr(1) != str[1].substr(1) || tmp.substr(1) != str[2].substr(1) || tmp.substr(1) != str[3].substr(1)) p[2]++;
        else if(tmp.substr(2) != str[1].substr(2) || tmp.substr(2) != str[2].substr(2) || tmp.substr(2) != str[3].substr(2)) p[3]++;
        else if(tmp.substr(3) != str[1].substr(3) || tmp.substr(3) != str[2].substr(3) || tmp.substr(3) != str[3].substr(3)) p[4]++;
        else if(tmp.substr(4) != str[1].substr(4) || tmp.substr(4) != str[2].substr(4) || tmp.substr(4) != str[3].substr(4)) p[5]++;
        else if(tmp.substr(5) != str[1].substr(5) || tmp.substr(5) != str[2].substr(5) || tmp.substr(5) != str[3].substr(5)) p[6]++;
    }
    long long sum = 0, price[7] = {2000000, 200000, 40000, 10000, 4000, 1000, 200};
    for(int i = 0; i < 7; i++){
        cout << p[i] << ((i==6)?'\n':' ');
        sum += price[i]*p[i];
    }
    cout << sum << '\n';    
}  