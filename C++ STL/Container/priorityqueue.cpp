#include<iostream>
#include<queue>
using namespace std;
int main(){
    // priority_queue<int> pq;
    // pq.push(10);
    // pq.push(20);
    // pq.push(100);

    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;

    // min heap --> minimum value --> highest priority
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(20);
    pq.push(50);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;




    return 0;
}