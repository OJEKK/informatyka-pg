#include<iostream>
using namespace std;

int main() {
    int size, y, x;
    cin >> size >> x >> y;
    for (int k = 0; k < y; k++) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size * x; j++) {
                if (i == j % size - size / 2)
                    cout << '*';
                else if (i == j % size + size / 2)
                    cout << '!';
                else if (i == -j % size + size / 2 - (size + 1) % 2)
                    cout << '@';
                else if (i == -j % size + size * 3 / 2 - 1)
                    cout << '$';
                else
                    cout << '.';
            }
            cout << '\n';
        }
    }

    return 0;
}
