// LeetCode 1207
#include <bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) {
    unordered_map <int,int> mp;
    for(int ele : arr){
        mp[ele]++;
    }
    unordered_set <int> freq;
    for(auto &pair : mp){
        freq.insert(pair.second);
    }
    return mp.size() == freq.size();
}
int main() {
    vector <int> nums = {1,2,2,1,1,3};
    cout<<uniqueOccurrences(nums)<<endl;
    return 0;
}