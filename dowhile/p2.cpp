#include<iostream>
using namespace std;
int main(){
    int row=1,n;
    cin>>n;
    do{
        int col=1;
        do{
            cout<<col;
            col=col+1;
        }
        while(col<=n);
        row=row+1;
        cout<<endl;
    }
    while(row<=n);
    return 0;

}