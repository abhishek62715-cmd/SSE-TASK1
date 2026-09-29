#include<iostream>
using namespace std;

int main(){
int n;
int i=2;

cout<<"Enter a number: ";
cin>> n;

if (n<=1){
    cout<<"Not Prime"<<endl;
    return 0;
}

else if(n==2){
    cout<<"Prime"<<endl;
    return 0;
}

else{

    while (i*i<=n){
        if (n%i==0){
            cout<<"Not Prime"<<endl;
            return 0;                          //key statement to terminate the program if a factor is found
        }
        i++;

    if (i*i>n){
        cout<<"Prime"<<endl;
        return 0;
        }
        }
    }

return 0;

}
