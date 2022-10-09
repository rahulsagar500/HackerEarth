#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,m;
        cin>>n>>m;
        char arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        int a=0;
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=0;j<m;j++){
                if(arr[i][j]=='#'){
                    temp=temp+1;
                }
                else{
                    continue;
                }
            }
            if(temp>a){
                a=temp;
            }
        }
        cout<<a<<endl;
        t=t-1;
    }
}