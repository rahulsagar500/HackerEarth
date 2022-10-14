#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    string b="";
    cin>>a;
    for(int i=a.length()-1;i>=0;i=i-1){
        b=b+a[i];
    }
    if(a==b){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
