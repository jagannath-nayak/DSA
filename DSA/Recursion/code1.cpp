#include<iostream>
using namespace std;

int getFactorial(int n){
    //Base case -> mandatory
    if(n==0 || n==1) return 1;
    // Recursive call -> mandatory
    // fact(n) = n * fact(n-1);
    // fact(n-1) -> recursion
    int RecursionkaAns = getFactorial(n-1);
    int Finalans = n * RecursionkaAns;
    return Finalans;
    // Processing -> optional

}

void printcounting(int n){
    // Base case 
    if(n==0) return;
    // Recursive call
    printcounting(n-1);
    // Processing
    cout << n << " ";
}

int pow(int n){
    // Base case
    if(n==0) return 1;
    // Recursive relation
    // pow(n) = 2 * pow(n-1);
    int recursionkaans = pow(n-1);
    int finalans = 2 * recursionkaans;
    return finalans;
}

int main(){
   int n;
   cout << "Enter the value of n: ";
   cin>>n;

   //int ans = getFactorial(n);
   //cout << "Factorial of " << n << " " << "=" << " " << ans << endl;
  //printcounting(n);

  cout << pow(n);


    return 0;
}