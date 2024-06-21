#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double arr[10], max, min;
    for(int i = 0; i < 10; i++) cin >> arr[i];
    max = min = arr[0];
    for(int i = 0; i < 10; i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    cout << fixed << setprecision(2) << "maximum:" << max << '\n';
    cout << fixed << setprecision(2) << "minimum:" << min << '\n';
    return 0;
}
