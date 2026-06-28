#include<bits/stdc++.h>
using namespace std;

/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

int main(){
    int n;
    cout<<"Enter N: \n";
    cin>>n;

    bool value;
    for (int i=1;i<=n;i++){

        if (i%2==0){
                value = false;
            }
        else{
                value = true;
            }
        for (int j=1;j<=i;j++){
            if (value == true){
                cout<<int(value);
                value= false;
            }
            else{
                cout <<int(value);
                value = true;
            }
            }
        cout<<endl;
    }

    
    return 0;
}