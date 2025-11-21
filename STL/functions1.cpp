#include <bits/stdc++.h>
using namespace std;

int hack(int &x) {
    return x++;
}

int main() {
    vector<int> v = {10, 20, 10, 30, 10, 40};

    auto newEnd = remove(v.begin(), v.end(), 10);

    cout << "After remove(10): ";
    for(int x : v) cout << x << " ";  // print full container
    cout << "\nNew logical end index: " << (newEnd - v.begin()) << endl;

    cout <<"hack: " << "\n";
    int x = 10;
    int ans = hack(x);
    cout << "ans: " << ans << "\n";
    cout << "x :" << x << "\n";

    return 0;
}
