#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int n = 88;
    int target = 90;

    bool ans = binary_search(arr, arr+n, target);
    cout << ans << endl;

    return 0;
}