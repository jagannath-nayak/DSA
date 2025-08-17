#include<iostream>
using namespace std;

int solve(int n){
    // Base case
    if(n==1) return 0;
    if(n==2) return 1;

    int ans = (n-1) * (solve(n-1)+solve(n-2));
    return ans;
}

int PaintWays(int n, int k){
    // Base case
    if(n==1) return k;
    if(n==2) return k + k*(k-1);

    int ans = (k-1) * (PaintWays(n-2,k)+PaintWays(n-1,k));
    return ans;
}

int main(){
    // int n = 3;
    // cout << solve(n) << endl;

    int n = 3;
    int k = 3;
    int ans = PaintWays(n,k);
    cout << ans << endl;


    return 0;
}