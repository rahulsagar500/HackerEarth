#include<iostream>
using namespace std;
int main(){
    int T;   // number of test cases
    cin>>T;
    for(int i=1;i<=T;i=i+1){            // loop for running number of test cases times
        int G,P;
        cin>>G>>P;                      //taking input for green and purple balloon cost
        int part;
        cin>>part;
        int arr[10][2];
        int sum1=0,sum2=0;
        int min_cost;
        for(int j=0;j<part;j=j+1){       // for taking input of the array who solved which problem
            for(int k=0;k<2;k=k+1){
                cin>>arr[j][k];
            }
        } 
        for(int j=0;j<part;j=j+1 {        //for finding if the first question is solved by many people or second question is solved by many people
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
        cout<<min_cost<<endl;                     //for printing the minimum cost

    }
    return 0;
}
