#include<iostream>
using namespace std;
int main(){
    int row=1,n,count=1;
    cout<<"Enter The Number"<<endl;
    cin>>n;
    cout<<endl;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<count;
            count=count+1;
            cout<<"\t";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}