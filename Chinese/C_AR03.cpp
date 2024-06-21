#include <iostream>
using namespace std;
int main(){  
    int arr[6];  
    for(int i = 0; i < 6; i++) cin >> arr[i];  
    long long sum = 0; 
    for(int i = 0; i < 6; i++){  
       sum += arr[i] * arr[i] * arr[i]; 
    }
    cout << sum << '\n';
}  