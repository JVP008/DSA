#include<bits/stdc++.h>
using namespace std;
int main(){
    
    //max will be at top
    priority_queue<int>pq;
    pq.emplace(1);
    pq.push(2);
    pq.emplace(3);
    pq.push(4);
    cout<<"Descending Order: \n";
    size_t size = pq.size(); 
    // cout<<pq.top()<<" \n";
    // pq.pop();
    // cout<<pq.top()<<" \n";
    // pq.pop();
    // cout<<pq.top()<<" \n";
    // pq.pop();
    // cout<<pq.top()<<" \n";
    
    cout<<"size: "<<pq.size()<<endl;
    for (size_t i=1;i<=size;i++){
        cout<<"Element No: "<<i<<" "<<pq.top()<<endl;
        pq.pop();
    }
    cout<<"Ascending Order: \n";
    priority_queue<int,vector<int>,greater<int>>pq2;
    pq2.push(1);
    pq2.push(2);
    pq2.push(3);
    pq2.push(4);
    size = pq2.size(); 
    cout<<"size: "<<pq2.size()<<endl;
    for (size_t i=1;i<=size;i++){
        cout<<"Element No: "<<i<<" "<<pq2.top()<<endl;
        pq2.pop();
    }
    // cout<<pq2.top()<<endl;
    // pq2.pop();
    // cout<<pq2.top()<<endl;
    // pq2.pop();
    // cout<<pq2.top()<<endl;
    return 0;
}