#include<sstream>
#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<int>v = {2,2,2,2,2,2,0,1};
    int size = int (v.size());
    vector<int>zero(size,0);
    for (int i= 0;i<size;i++){
        zero[v[i]]+=1;
    }
    for (int i :zero){
        cout<<i<<" ";
    }
    return 0;

}