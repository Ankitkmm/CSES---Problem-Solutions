#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
int t;
cin >> t;
while(t--){
int n;
cin >> n;
ll s = 1;
for(int i=0; i<n; i++){
    int z;
    cin >> z;
    s = s*z;
}
if(s % 10 == 2 || s % 10 ==3 || s % 10 == 5){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
}
}
}
