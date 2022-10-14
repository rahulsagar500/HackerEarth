#include<iostream>
using namespace std;
int main(){
    int l,r,k;
    cin>>l>>r>>k;
    int count=0;
    for(int i=l;i<=r;i=i+1){
        if(i%k==0){
            count=count+1;
        }
    }
    cout<<count;
    return 0;
}