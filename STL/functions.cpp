#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool isEven(int x) { return x % 2 == 0; }
void print(int x) { cout << x << " "; }
bool greaterThan50(int x) { return x > 50; }

int main() {
    vector<int> v = {10, 20, 20, 30, 40, 50, 60, 20};
    vector<int> v2 = {10, 20, 30, 40, 50};
    vector<int> v_copy;

    cout << "Original vector: ";
    for_each(v.begin(), v.end(), print);
    cout << "\n\n";

    // 1️⃣ Searching and Counting Algorithms
    cout << "count(20): " << count(v.begin(), v.end(), 20) << endl;
    cout << "count_if(even): " << count_if(v.begin(), v.end(), isEven) << endl;

    cout << "equal(v2, first 5 elements of v): "
         << (equal(v.begin(), v.begin() + 5, v2.begin()) ? "Yes" : "No") << endl;

    auto it1 = find(v.begin(), v.end(), 30);
    cout << "find(30): " << (it1 != v.end() ? "Found" : "Not Found") << endl;

    auto it2 = find_if(v.begin(), v.end(), greaterThan50);
    cout << "find_if(x>50): " << (it2 != v.end() ? to_string(*it2) : "Not Found") << endl;

    auto mismatch_pair = mismatch(v.begin(), v.begin()+5, v2.begin());
    cout << "mismatch between v and v2: " 
         << *mismatch_pair.first << " and " << *mismatch_pair.second << endl;

    vector<int> pattern = {30, 40};
    auto search_it = search(v.begin(), v.end(), pattern.begin(), pattern.end());
    cout << "search({30,40}): " << (search_it != v.end() ? "Found" : "Not Found") << endl;

    auto search_n_it = search_n(v.begin(), v.end(), 2, 20);
    cout << "search_n (two 20s): "
         << (search_n_it != v.end() ? "Found" : "Not Found") << endl;

    cout << "\n";

    // 2️⃣ Modifying Algorithms
    v_copy = v;
    copy(v.begin(), v.end(), back_inserter(v_copy));
    cout << "copy(): ";
    for_each(v_copy.begin(), v_copy.end(), print);
    cout << "\n";

    fill(v_copy.begin(), v_copy.begin()+3, 100);
    cout << "fill(first 3 elements with 100): ";
    for_each(v_copy.begin(), v_copy.end(), print);
    cout << "\n";

    fill_n(v_copy.begin()+3, 2, 200);
    cout << "fill_n(2 elements from index 3 with 200): ";
    for_each(v_copy.begin(), v_copy.end(), print);
    cout << "\n";

    v_copy = v;
    auto new_end = remove(v_copy.begin(), v_copy.end(), 20);
    cout << "remove(20): ";
    for_each(v_copy.begin(), new_end, print);
    cout << "\n";

    v_copy.clear();
    remove_copy(v.begin(), v.end(), back_inserter(v_copy), 20);
    cout << "remove_copy(20): ";
    for_each(v_copy.begin(), v_copy.end(), print);
    cout << "\n";

    v_copy.clear();
    remove_copy_if(v.begin(), v.end(), back_inserter(v_copy), isEven);
    cout << "remove_copy_if(even): ";
    for_each(v_copy.begin(), v_copy.end(), print);
    cout << "\n";

    v_copy = v;
    new_end = remove_if(v_copy.begin(), v_copy.end(), isEven);
    cout << "remove_if(even): ";
    for_each(v_copy.begin(), new_end, print);
    cout << "\n";

    v_copy = v;
    replace(v_copy.begin(), v_copy.end(), 20, 99);
    cout << "replace(20 with 99): ";
    for_each(v_copy.begin(), v_copy.end(), print);
    cout << "\n";

    v_copy.clear();
    replace_copy(v.begin(), v.end(), back_inserter(v_copy), 30, 77);
    cout << "replace_copy(30->77): ";
    for_each(v_copy.begin(), v_copy.end(), print);
    cout << "\n";

    v_copy = v;
    replace_if(v_copy.begin(), v_copy.end(), isEven, 500);
    cout << "replace_if(even->500): ";
    for_each(v_copy.begin(), v_copy.end(), print);
    cout << "\n";

    v_copy.clear();
    replace_copy_if(v.begin(), v.end(), back_inserter(v_copy), isEven, 888);
    cout << "replace_copy_if(even->888): ";
    for_each(v_copy.begin(), v_copy.end(), print);
    cout << "\n\n";

    // 3️⃣ Reordering Algorithms
    v_copy = v;
    reverse(v_copy.begin(), v_copy.end());
    cout << "reverse(): ";
    for_each(v_copy.begin(), v_copy.end(), print);
    cout << "\n";

    v_copy.clear();
    reverse_copy(v.begin(), v.end(), back_inserter(v_copy));
    cout << "reverse_copy(): ";
    for_each(v_copy.begin(), v_copy.end(), print);
    cout << "\n";

    v_copy = v;
    rotate(v_copy.begin(), v_copy.begin()+2, v_copy.end());
    cout << "rotate(by 2): ";
    for_each(v_copy.begin(), v_copy.end(), print);
    cout << "\n";

    v_copy.clear();
    rotate_copy(v.begin(), v.begin()+2, v.end(), back_inserter(v_copy));
    cout << "rotate_copy(by 2): ";
    for_each(v_copy.begin(), v_copy.end(), print);
    cout << "\n";

    vector<int> a = {1, 2, 3}, b = {4, 5, 6};
    swap(a, b);
    cout << "swap two vectors:\na: ";
    for_each(a.begin(), a.end(), print);
    cout << "\nb: ";
    for_each(b.begin(), b.end(), print);
    cout << "\n";

    v_copy = v;
    new_end = unique(v_copy.begin(), v_copy.end());
    cout << "unique(): ";
    for_each(v_copy.begin(), new_end, print);
    cout << "\n";

    v_copy.clear();
    unique_copy(v.begin(), v.end(), back_inserter(v_copy));
    cout << "unique_copy(): ";
    for_each(v_copy.begin(), v_copy.end(), print);
    cout << "\n";

    return 0;
}
