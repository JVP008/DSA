#include<bits/stdc++.h>
using namespace std;
/* pattern:
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
  4 3 2 1
    3 2 1
      2 1
        1
*/

int main(){

int n = 5;
for (int i =1; i<=n; i++){
	//spaces:
	
	for(int j =1;j<=n-i;j++){
	cout<<"  ";
	}

	for(int j=i; j>=1; j--){
	cout<<j<<" ";
	}
cout<<endl;
}
for (int i = n-1;i>=1;i--){
for (int j = 1;j<=n-i;j++){
cout<<"  ";
}
for (int j=i;j>=1;j--){
cout<<j<<" ";
}
cout<<endl;
}
return 0;
}