#include <bits/stdc++.h>
using namespace std;
string getPalindrome(string str);

int main() {
    string s="llaaqqzz";
    vector<vector<int>> A={{1,6},{1,2},{1,2},{1,8}};
    int q=4;

    for(int i=0;i<q;i++){
        int start=A[i][0]-1;
        int end=A[i][1]-1;
        int len=end-start+1;

        
        string sub=s.substr(start,len);
        string formed=getPalindrome(sub);

        if(formed!="0"){
            for(int j=0;j<len;j++){
                s[j+start]=formed[j];
            }
        }
    }


    cout<<s;
}

string getPalindrome(string str)
{
    map<char, int> hmap;
    for (int i = 0; i < str.length(); i++)
        hmap[str[i]]++;

    int oddCount = 0;
    char oddChar;
    for (auto x : hmap) {
        if (x.second % 2 != 0) {
            oddCount++;
            oddChar = x.first;
        }
    }
    if (oddCount > 1 || oddCount == 1 && str.length() % 2 == 0)
        return "0";

    string firstHalf = "", secondHalf = "";
    for (auto x : hmap) {
        string s(x.second / 2, x.first);
        firstHalf = firstHalf + s;
        secondHalf = s + secondHalf;
    }
    return (oddCount == 1)
               ? (firstHalf + oddChar + secondHalf)
               : (firstHalf + secondHalf);
}
