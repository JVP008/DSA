#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<pair<int,int>,pair<string,string>>p1 = {{6,7},{"Jayesh","Patil"}};
    cout<<p1.first.first<<endl;
    cout<<p1.first.second<<endl;
    cout<<p1.second.first<<endl;
    cout<<p1.second.second<<endl;

    pair<int,float>arr[] = {{1,2},{0,3},{4,5}};
    cout<<arr[0].first;
    cout<<arr[0].second;
    cout<<arr[1].first;
    cout<<arr[1].second;
    cout<<arr[2].first;
    cout<<arr[2].second;
    return 0;
}