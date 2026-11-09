#include<bits/stdc++.h>
using namespace std;
int main (){
    int a = 5;
    int b = 6;
    a = a^b; //3
    b = a^b; //5
    a = a^b; //6
    cout<<"a: "<<a<<" b: "<<b<<"\n";
    return 0;
}
