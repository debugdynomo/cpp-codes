#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &vec) {

    for(int i=0;i<(int)vec.size();i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";
}

int main() {
    vector<int> vec;
    int n = 10;
    for(int i=0;i<n;i++) {
        vec.push_back(i+1);
    }

    display(vec);
    vector<int> arr(n);

    for(int i=0;i<n;i++) {
        arr[i] = 10.65;
    }

    display(arr);
    return 0;
}