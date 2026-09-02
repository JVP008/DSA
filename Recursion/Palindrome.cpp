#include<bits/stdc++.h>
using namespace std;

void Palindrome(size_t i,string &s,size_t j){
    
    if (i>=j){
        cout<<"Palindrome";
        return;
    }
    else if (s[i]==s[j]){
        Palindrome(i+1,s,j-1);
    }
    else{
        cout<<"Not Palindrome";
        return;
    }
}

int main(){
    string s;
    cin>>s;
    size_t size = s.size(); 
    Palindrome(0,s,size-1);    
    return 0;
}