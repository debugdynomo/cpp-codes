#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1️⃣ Create and display a vector
    vector<int> v = {10, 20, 30, 40, 50};
    cout << "Original vector: ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    // 2️⃣ at() — Access element safely (with bounds checking)
    cout << "Element at index 2 using at(): " << v.at(2) << "\n";

    // 3️⃣ insert() — Insert element at specific position
    v.insert(v.begin() + 2, 25);  // Insert 25 at index 2
    cout << "After insert(25 at index 2): ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    // 4️⃣ erase() — Remove element at position
    v.erase(v.begin() + 3);  // Erase element at index 3
    cout << "After erase(index 3): ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    // 5️⃣ resize() — Change size (add zeros or remove elements)
    v.resize(3); // Shrinks to size 3 (removes extra elements)
    cout << "After resize(3): ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    v.resize(6); // Expands to size 6 (adds zeros)
    cout << "After resize(6): ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    // 6️⃣ swap() — Swap two vectors
    vector<int> v2 = {100, 200, 300};
    cout << "\nSecond vector before swap: ";
    for(int x : v2) cout << x << " ";
    cout << "\n";

    v.swap(v2);  // Swap contents of v and v2

    cout << "First vector after swap: ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    cout << "Second vector after swap: ";
    for(int x : v2) cout << x << " ";
    cout << "\n";

    return 0;
}
