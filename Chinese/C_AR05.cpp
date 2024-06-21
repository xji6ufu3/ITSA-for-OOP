#include <iostream>
using namespace std;
int main(){
    int n, time[25], maxx = 0;
    for(int i = 0; i < 25; i++) time[i] = 0;
    cin >> n;
    while(n--){
        int s, t;
        cin >> s >> t;
        for(; s < t; s++) time[s]++;
    }
    for(int i = 0; i < 25; i++){
        if(maxx < time[i]) maxx = time[i];
    }
    cout << maxx << '\n';
}