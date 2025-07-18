#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void insertionsort(vector<int> &v){
    int n = v.size();
    for(int i=0; i<n; i++){
        int j=i-1;
        int key = v[i];
        while(j>=0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}

int main(){
    vector<int> v = {56,445,333,222,-1};
    insertionsort(v);
    print(v);

    return 0;
}