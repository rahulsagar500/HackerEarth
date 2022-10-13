#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    long z=0,o=0;
    for(long i=0;i<a.length();i=i+1){      //the loop is used to see number of z and o in the entered string
        if(a[i]=='z'){
            z=z+1;
        }
        else if (a[i]=='o')
        {
            o=o+1;
        }
    }
    if(2*z==o){                  //if the given condition is satisfied then print Yes
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}