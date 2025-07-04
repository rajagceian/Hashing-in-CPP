// leetcode 1657
#include <bits/stdc++.h>
using namespace std;

bool closeStrings(string word1, string word2)
{
    int l1 = word1.length();
    int l2 = word2.length();
    if (l1 != l2)
        return false;
    unordered_map<char, int> mp1, mp2;
    for (int i = 0; i < l1; i++)
    {
        mp1[word1[i]]++;
        mp2[word2[i]]++;
    }
    for (char c : word1)
    {
        if (mp2.find(c) == mp2.end())
            return false;
    }
    unordered_map<int, int> s1, s2;
    for (auto &p : mp1)
    {
        s1[p.second]++;
    }
    for (auto &p : mp2)
    {
        s2[p.second]++;
    }
    for (auto &p : s1)
    {
        if (s2.find(p.first) == s2.end())
            return false;
        else
        {
            if (p.second != s2[p.first])
                return false;
        }
    }
    return true;
    /*----- Or ---- in another syntax
    bool closeStrings(string word1, string word2) {
    if(word1.length() != word2.length()) return false;
    unordered_map<char, int> mp1, mp2;
    for(char c : word1) mp1[c]++;
    for(char c : word2) mp2[c]++;
    for(char c : word1) if(mp2.find(c) == mp2.end()) return false;

    unordered_map<int, int> freq1, freq2;
    for(auto& [k, v] : mp1) freq1[v]++;
    for(auto& [k, v] : mp2) freq2[v]++;

    return freq1 == freq2;
    }

    
    */
}
int main()
{

    return 0;
}