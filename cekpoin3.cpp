#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int flag = 0;
    cout << "Input a string: " << endl;
    cin >> str;
    int len = str.length();
    
    for (int i=0, j=len-1; i<len/2; i++, j--) {
        if (str[i] != str[j]){
            flag = 1;
            break;
        } else {
            flag = 0;
        }
    }
    
    if (flag == 0){
        cout << "String is Palindrome" << endl;
    } else {
        cout << "String is not Palindrome" << endl;
    }
    
    return 0;
}