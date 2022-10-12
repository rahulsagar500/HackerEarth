#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=1;i<=T;i=i+1){
        int G,P;
        cin>>G>>P;
        int part;
        cin>>part;
        int arr[10][2];
        int sum1=0,sum2=0;
        int min_cost;
        for(int j=0;j<part;j=j+1){
            for(int k=0;k<2;k=k+1){
                cin>>arr[j][k];
            }
        }
        for(int j=0;j<part;j=j+1){
            sum1=sum1+arr[j][0];
            sum2=sum2+arr[j][1];
        }
        if(sum1>=sum2 && G>=P){
            min_cost=sum1*P+sum2*G;

        }
        else if (sum1>=sum2 && P>=G)
        {
            min_cost=sum1*G+sum2*P;
        }
        else if (sum2>=sum1 && G>=P)
        {
            min_cost=sum2*P+sum1*G;
        }
        else if (sum2>=sum1 && P>=G)
        {
            min_cost=sum2*G+sum1*P;
        }
        cout<<min_cost<<endl;

    }
    return 0;
}