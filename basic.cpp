#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> mySet = {30, 10, 50, 20, 40};

    // Insert and Print
    mySet.insert(60);
    for (int num : mySet) 
       cout << num << " ";
    cout<<endl;
    // Find and Erase
    if (mySet.find(20) != mySet.end()) 
       mySet.erase(20);

    for (int num : mySet) 
       cout << num << " ";
}
