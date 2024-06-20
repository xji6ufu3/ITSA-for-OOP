#include <iostream>
using namespace std;
int main(){
    long long sum = 0;
    int n;
    cin >> n;
    for(int i = 3; i <= n; i+=3){
        sum += i;
    }
    cout << sum << '\n';
    return 0;
}