#include <bits/stdc++.h>
using namespace std;

bool canArrange(vector<int> &arr, int k)
{
    unordered_map<int, int> mp;
    for (int num : arr)
    {
        mp[(num % k + k) % k]++; // (num % k + k) % k) to handle -ve
    }
    for (auto &p : mp)
    {
        if (p.first == 0)
        {
            if (p.second % 2 != 0)
                return false;
        }
        else
        {
            if (mp[p.first] != mp[k - p.first])
                return false;
        }
    }

    return true;
}
int main()
{
    vector <int> nums = {1,2,3,4,5,10,6,7,8,9};
    cout<<canArrange(nums,5)<<endl;
    return 0;
}