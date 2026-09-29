#include<iostream>
using namespace std;

int main(){

    int i=1;
    int n;
    cin>>n;

    while(i<=n){

        int j=1;
        while(j<=i){
            if(i%2!=0){
                if(j%2==0){
                    cout<<0;

                }
                else{
                    cout<<1;

                }}

            else{
                if(j%2==0){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
        j++;
        }
        i++;
        cout<<endl;
    }
    
    return 0;
    
}