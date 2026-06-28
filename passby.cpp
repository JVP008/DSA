#include<bits/stdc++.h>
using namespace std;


// Pass By Value 
class V {
    public:
        int sum(int a,int b){
        a++;
        b++;
        return a+b;
}
};


// Pass By Reference
class R {
    public:
        int sum(int &a,int &b){
        a++;
        b++;
        return a+b;
}
};

int main()
{
    V v;R r;
    
    int a,b;
    cout<<"Enter Two Integers"<<endl;
    cin>>a>>b;
    printf("A: %d + B: %d is %d\n",a,b,v.sum(a,b));
    printf("A: %d + B: %d is %d",a,b,r.sum(a,b));
    

    return 0;
}




