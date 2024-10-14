#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
   
    for (int r = 1; r <= (n+1)/2; r++) {
        for (int c = 1; c <= n; c++) {
            if (c == (n+1)/2 - r + 1 || c == n/2 + r) {
                cout << "*";
            }
            else {
                cout << "-";
            }
        }
        cout << endl;
    }

    for(int r=1; r<=(n-1)/2; r++){
        for (int c = 1; c <= n; c++) {
            if (c == r+1 || c == n - r) {
                cout << "*";
            }
            else {
                cout << "-";
            }
        }
        cout << endl;
    }

    return 0;
}
