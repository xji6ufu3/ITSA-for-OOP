#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int arr[a][b];
    for(int i = 0; i < a; i++)  
        for(int j = 0; j < b; j++)
            cin >> arr[i][j];
    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            cout << arr[j][i];
            if(j != a-1) cout << ' ';
            else cout << '\n';
        }
    }
}
