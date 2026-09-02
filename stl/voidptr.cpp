#include<bits/stdc++.h>
using namespace std;
void solution (void *ptr,char type){
    switch (type)
    {
    case 'i':
        cout<<*(int*)ptr; //Ox0000 -> value_type -> value;
        break;
    
    case 'c':
        cout<<*(char*)ptr; //Ox0000 -> value_type -> value;
        break;

    case 'f':
    case 'd':
        cout<<*(float*)ptr; //Ox0000 -> value_type -> value;
        break;
    
    default:
        cout<<"wrong datatype, sorry!";
        break;
    }
}

int main()
{
    int x = 10;
    char ch = 'A';
    float f = 3.14;
    double d = 3.14;
    solution(&f,'d');
    return 0;
}
