#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    vector<string> v2 = {"Jayesh","Patil","Tushar"};
    vector<string>::iterator it = v2.begin();
    vector<string>::iterator it2 = v2.end();
    cout<<*(v.end());
    ;
    for (it;it!=it2;it++){
        cout<<*it<<endl;
    }
    return 0;
}