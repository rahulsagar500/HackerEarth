#include<iostream>
using namespace std;
int main(){
    long N,A[100000];
    cin>>N;
    for(long i=0;i<N;i++){
        cin>>A[i];
    }
    if(A[N-1]%10==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;

}

