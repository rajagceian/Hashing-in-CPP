#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;

    // Inserting elements
    ms.insert(10);
    ms.insert(20);
    ms.insert(20); // duplicate
    ms.insert(30);
    ms.insert(40);

    // Display elements
    cout << "Multiset elements: ";
    for (int val : ms) {
        cout << val << " ";
    }
    cout << endl;

    if (!ms.empty()) {
        cout << "Last element (using rbegin): " << *ms.rbegin() << endl;
        cout << "Last element (using --end): " << *(--ms.end()) << endl;
    } else {
        cout << "Multiset is empty." << endl;
    }
    
    // Finding an element
    auto it_find = ms.find(20);
    if (it_find != ms.end()) {
        cout << "Element 20 found at: " << *it_find << endl;
    } else {
        cout << "Element 20 not found" << endl;
    }

    // Erasing a single occurrence of 20
    if (it_find != ms.end()) {
        ms.erase(it_find); // only one instance erased
        cout << "One occurrence of 20 erased." << endl;
    }

    // Using lower_bound to find first element >= 25
    auto it_lb = ms.lower_bound(25);
    if (it_lb != ms.end()) {
        cout << "Lower bound of 25 is: " << *it_lb << endl;
    } else {
        cout << "No element >= 25 found." << endl;
    }

    // Final multiset contents
    cout << "Final multiset elements: ";
    for (int val : ms) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
