#include <iostream>

using namespace std;

int main (){
int n, x = 1, y= 1, num=1;

cout << "Input the number of rows";
cin >> n;

while (x <= n) {
    y=1;
    while (y <= n){
        cout << num << " ";
        num ++, y++;
    } cout << endl;
    x++;
}
return 0;
}