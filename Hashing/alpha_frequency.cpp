#include<bits/stdc++.h>
using namespace std;
int main(){
    //so, in few programming languages we can do something like :
    //'a' which is character + 0 which is an integer.
    //and if you are thinking it will show error then -> NO!
    //"the compiler is pretty intellgent program"
    // it will first convert the 'a' to its ASCII (American Stand. code for info. exchange).
    //so ASCII value of 'a' is 97 and ASCII value of 'b' is 98
    // and as we can see that we are just adding one to it to get our next alphabet 
    // we can/will use the formula or whatever in our solution:
    //for ex: 'a'+0 = 'a' , 'a'+1 = b; 
    char ch = 'a';
    vector<char>input = {'a','x','a','b','i','v','z','x','v','b'};
    vector<char>result(26,0);
    vector<char>alpha;
    for (int i =0;i<25;i++){
        alpha.emplace_back(ch+i);
    }
    int size = 26;
    for (int i=0;i<size;i++){
        result[input[i]-'a']+=1;
    }
    for (int i:result){
        cout<<i<<" ";
    }

    return 0;
}