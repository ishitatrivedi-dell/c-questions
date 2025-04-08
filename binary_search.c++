#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> n = {1, 8, 7, 6, 5, 3, 2, 1};
    
    // Sort in ascending order
    sort(n.begin(), n.end());

    // Print the sorted vector
    cout << "Sorted vector: ";
    for (int i : n) {
        cout << i << " ";
    }
    cout << endl;

    // Binary search for a specific number
    int key = 5;
    if (binary_search(n.begin(), n.end(), key)) {
        cout << key << " found in the vector!" << endl;
    } else {
        cout << key << " not found in the vector!" << endl;
    }

    return 0;
}

