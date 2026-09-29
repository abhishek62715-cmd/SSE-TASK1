#include<iostream>
using namespace std;

float a;
float c;

int main(){

    float n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(i*i<=n){
            continue;
        }
        else{
           // cout<<i-1<<endl;
            ::a=(i-1)*(i-1);
            ::c=(i-1);
            break;
        }
    }

    //cout<<a*a;

    float d=float(::c)+((float(n-a)/float(2*::c)));
    cout<<d;

    return 0;
    
}