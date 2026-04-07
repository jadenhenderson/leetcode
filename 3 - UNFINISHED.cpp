#include <iostream>
using namespace std;

int lengthOfLongestSubstring(string s){
    int curlen = 1;
    int longestlen = 1;
    for (int i=0; i<s.length()-1; i++){
        if (s[i] == s[i+1]){
            cout << "test" << endl;
            curlen = 1;
        } else {
            curlen++;
        }
        if (curlen > longestlen) longestlen = curlen;
    }
    return longestlen;
}

int main(){
    cout << lengthOfLongestSubstring("abcabcbb") << endl;
    return 0;
}