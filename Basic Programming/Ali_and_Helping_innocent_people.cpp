#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b=a.substr(0,2);
    string c=a.substr(3,2);
    string d=a.substr(7,2);
    string h=a.substr(4,2);
    int e=stoi(b);                  // converting the string to int
    int f=stoi(c);
    int g=stoi(d);
    int i=stoi(h);
    if(a[2]=='A' || a[2]=='E' || a[2]=='I' || a[2]=='O' || a[2]=='U' || a[2]=='Y'){             // condition for not being a vovel which included Y
        cout<<"invalid";
    }
    else if ((e/10+e%10)%2==0 && (f/10+f%10)%2==0 && (g/10+g%10)%2==0 && (i/10+i%10)%2==0)     //sum of the consecutive integers
    {
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }
    
    return 0;
}
