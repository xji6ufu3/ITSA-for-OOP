#include <iostream>
#include <string>
#include <sstream>
using std::string;
using std::cin;
using std::cout;
using std::stringstream;
int main(){
    // char str1[10][6] = {"*****","    *","*****","*****","*   *","*****","*****","*****","*****","*****"};
    // char str2[10][6] = {"*   *","    *","    *","    *","*   *","*    ","*    ","    *","*   *","*   *"};
    // char str3[10][6] = {"*   *","    *","*****","*****","*****","*****","*****","    *","*****","*****"};
    // char str4[10][6] = {"*   *","    *","*    ","    *","    *","    *","*   *","    *","*   *","    *"};
    // char str5[10][6] = {"*****","    *","*****","*****","    *","*****","*****","    *","*****","    *"};
    // char num[5];
    string strNum;
    string str[5][10] = {
        {"*****","    *","*****","*****","*   *","*****","*****","*****","*****","*****"},
        {"*   *","    *","    *","    *","*   *","*    ","*    ","    *","*   *","*   *"},
        {"*   *","    *","*****","*****","*****","*****","*****","    *","*****","*****"},
        {"*   *","    *","*    ","    *","    *","    *","*   *","    *","*   *","    *"},
        {"*****","    *","*****","*****","    *","*****","*****","    *","*****","    *"}
    };
    int num;
    cin >> strNum;
    stringstream ss;
    ss << strNum;
    ss >> num;

    cout << (num%=1000);

    // for(int i = 0; i < 5; i++){
    //     cout << str[i][num%1000]+' '+str[i][num]
    // }

    /*
    for(int i = 0; i < 4; i++){
        printf("%s",str1[num[i]-'0']);
        if(i != 3) printf(" ");
        else printf("\n");
    }
    for(int i = 0; i < 4; i++){
        printf("%s",str2[num[i]-'0']);
        if(i != 3) printf(" ");
        else printf("\n");
    }
    for(int i = 0; i < 4; i++){
        printf("%s",str3[num[i]-'0']);
        if(i != 3) printf(" ");
        else printf("\n");
    }
    for(int i = 0; i < 4; i++){
        printf("%s",str4[num[i]-'0']);
        if(i != 3) printf(" ");
        else printf("\n");
    }
    for(int i = 0; i < 4; i++){
        printf("%s",str5[num[i]-'0']);
        if(i != 3) printf(" ");
        else printf("\n");
    }
    return 0;
    */
}
