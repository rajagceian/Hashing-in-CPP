#include <iostream>
#include <unordered_set>
using namespace std;
/*
    Unordered: Elements are stored in no particular order.

    Implementation: It uses a hash table.

    Time Complexity:

    Insertion, Deletion, and Search: O(1) on average, but O(n) in worst case.

    Duplicates: Not allowed.

    Use Case: Suitable when fast lookups and insertions are required, and ordering doesn't matter.
*/
int main() {
    unordered_set<int> us;
    us.insert(1);
    us.insert(3);
    us.insert(9);
    us.insert(2);

    cout<<"Size : "<<us.size()<<endl;
    // to display data
    for (int x : us) cout << x << " ";
    cout<<endl;
    // to find and delete
    int target = 9;
    if(us.find(target) != us.end()) {
        cout<<target<<" is present"<<endl;
        us.erase(target);
    }
    else{
        cout<<target<<" is not present"<<endl;
    }
    cout<<"Size : "<<us.size()<<endl;
    // another way
    unordered_set<int> us1 = {5, 2, 8, 1, 7};
}
/*
    Key Differences
        Sorting:
        set: Sorted
        unordered_set: Unsorted

        Time Complexity:
        set: O(log n)
        unordered_set: O(1) on average

        Implementation:
        set: Balanced tree
        unordered_set: Hash table

        Use Case:
        set: When you need ordering
        unordered_set: When performance is critical
*/