#include <iostream>
using namespace std;

void LTRRE(string& s, char x, int i, int& ans){
    // Base case
    if(i >= s.size()) return;
    // Ek case mai solve karunga
    if(s[i]==x) ans = i;
    // Recursion
    LTRRE(s, x, i+1, ans);
}


void RTLRE(string& s, char x, int i, int& ans){
    // Base case
    if(i < 0) return;
    // Ek case mai solve karunga
    if(s[i]==x){
        ans = i;
        return;
    }
    // Recursion
    LTRRE(s, x, i-1, ans);
}

void ReverseRE(string& s, int start, int end){
    // Base case
    if(start >= end) return;
    // Ek case mai dekh lunga
    swap(s[start], s[end]);
    // Baki RE dekh lega
    ReverseRE(s, start+1, end-1);
}

int main(){
    string s;
    cin>>s;
    // char x;
    // cin>>x;
    // int ans = -1;

    // // LTRRE(s, x, 0, ans);
    // RTLRE(s, x, s.size()-1, ans);
    // cout << ans << endl;

    ReverseRE(s, 0, s.size()-1);
    cout << s << endl;




    return 0;
}