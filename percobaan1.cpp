#include <iostream>
using namespace std;

int main() {
    int i, batas;
    cout << "Masukkan jumlah perulangan: ";
    cin >> batas;

    for (int i = 0; i < batas; i++) {
        cout << i-1 << endl;
    }
    return 0;
}

