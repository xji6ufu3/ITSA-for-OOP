#include <iostream>
using namespace std; 
int main(){
    int sum = 0, a, b, c, d, e, f, g, h, i;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
    sum = a * e * i + d * h * c + g * b * f - c * e * g - b * d * i - a * f * h;
    cout << sum << '\n';
}