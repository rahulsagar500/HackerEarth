#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    string b="";                                //initalising the empty string 
    cin>>a;
    for(int i=a.length()-1;i>=0;i=i-1){
        b=b+a[i];                              //adding the string from the last
    } 
    if(a==b){                                  
        cout<<"YES";                            //condition for both the strings are same or not
    }
    else{
        cout<<"NO";
    }
    return 0;
}
