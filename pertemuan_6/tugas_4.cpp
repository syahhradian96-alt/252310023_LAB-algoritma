#include <iostream>
#include <cstdlib> // untuk system("cls")
using namespace std;

int main() {
    int a = 3, b = 2, c = 1;

    system("cls");
    cout << "Bil-A | Bil-B | Bil-C\n";
    cout << "----------------------" << endl;

    for (int bil = 1; bil <= 10; ++bil) {
        a += b;
        b += c;
        c += 2;

        cout << a << "\t| " << b << "\t| " << c << endl;

        if (c == 13)
            break;
    }

    system("pause");
    return 0;
}
