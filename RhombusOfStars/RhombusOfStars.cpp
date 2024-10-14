#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= n; c++) {
            if (c > n - r && c < n + r) {
                cout << "* ";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int r = n + 1; r <= 2 * n - 1; r++) {
        for (int c = 1; c <= n; c++) {
            if (c > r - n && c < r + n) {
                cout << "* ";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
