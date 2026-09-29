#include<iostream>
using namespace std;

int main(){

    char character;
    cin>>character;
    int ascii=int(character);

    if ((ascii>=97)&&(ascii<=122)){
        cout<<character<<" is a lowercase alphabet"<<endl;
    }
    else if((ascii>=65)&&(ascii<=90)){
        cout<<character<<" is a uppercase alphabet"<<endl;
    }
    else if((ascii>=48)&&(ascii<=57)){
        cout<<character<<" is a digit"<<endl;
    }
    else{
        cout<<character<<" is a special character"<<endl;
    }

    return 0;
    
}