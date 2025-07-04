#include <bits/stdc++.h>
using namespace std;

    bool isAnagram(string s, string t) {
        int n = s.length();
        vector <int> freq_s(26),freq_t(26);
        for(char c : s){
            freq_s[c - 'a']++;
        }
        for(char c : t){
            freq_t[c - 'a']++;
        }
    
            // for(int i=0;i<26;i++){
            //     if(freq_s[i] != freq_t[i]) 
            //        return false;
            // }
        return freq_s == freq_t;
    }
int main() {
    string s="anagram";
    string t="nagaram";
    cout<<isAnagram(s,t);
    return 0;
}