// leetCode 1
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map <int,int> mp; // {element , index}
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(mp.find(target - nums[i]) != mp.end())
         return {mp[target - nums[i]] , i};
        else mp[nums[i]] = i;
    }
  return {-1 , -1};
}

int main() {
    vector <int> nums = {2,7,11,15};
    vector <int> res = twoSum(nums , 9);

    for(int ele : res){
        cout<<ele<<" ";
    }
    return 0;
}