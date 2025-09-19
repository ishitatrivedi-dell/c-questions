//         1
//       1 2 3
//     1 2 3 4 5
//   1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int r = 1; r <= n; r++) {
        for (int s = 0; s < n - r; s++) cout << "  ";
        for (int k = 1; k < 2*r; k++) cout << k << " ";
        cout << endl;
    }
    return 0;
}
