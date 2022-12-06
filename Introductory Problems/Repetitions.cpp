#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
string s;
cin >> s;
int c = 1, ans = 1;
for(int i=1; i<s.length(); i++){
if(s[i] == s[i-1]){
    c++;
    ans = max(c,ans);  
}
else if(s[i] != s[i-1]){
    ans = max(ans,c);
    c=1;
}
}
