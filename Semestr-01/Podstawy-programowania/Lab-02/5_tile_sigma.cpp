#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt_hash = 0, cnt_slash = 0, cnt_star = 0;
    int half = n / 2;

    for (int i = 0; i < n; i++) {
        cout << '#';
        cnt_hash++;
    }
    cout << '\n';

    for (int i = 0; i < half - 1; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == n - 1) {
                cout << '#';
                cnt_hash++;
            } else {
                cout << '*';
                cnt_star++;
            }
        }
        cout << '\n';
    }

    for (int i = 0; i < half; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i) {
                cout << '\\';
                cnt_slash++;
            } else {
                cout << '*';
                cnt_star++;
            }
        }
        cout << '\n';
    }

    if (n % 2 != 0) {
        for (int i = 0; i < n; i++) {
            if (i == half) {
                cout << '#';
                cnt_hash++;
            } else {
                cout << '*';
                cnt_star++;
            }
        }
        cout << '\n';
    }

    for (int i = 0; i < half; i++) {
        for (int j = 0; j < n; j++) {
            if (j == half - i - 1) {
                cout << '/';
                cnt_slash++;
            } else {
                cout << '*';
                cnt_star++;
            }
        }
        cout << '\n';
    }

    for (int i = 0; i < half - 1; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == n - 1) {
                cout << '#';
                cnt_hash++;
            } else {
                cout << '*';
                cnt_star++;
            }
        }
        cout << '\n';
    }

    for (int i = 0; i < n; i++) {
        cout << '#';
        cnt_hash++;
    }

    cout << "\n\n# " << cnt_hash << '\n';
    cout << "\\/ " << cnt_slash << '\n';
    cout << "* " << cnt_star << '\n';
}
