#include<iostream>
using namespace std;
int main(){
    int x,y;
    x=0;
    y=0;
    string dir;
    cout<<"Enter your path in capital letters (N/E/S/W) : ";
    cin>>dir;
    // cout<<dir.length();
    for(int i=0;i<=dir.length()-1;i++){
        if(dir[i]=='S'){
            y--;
        }
        else if(dir[i]=='N'){
            y++;
        }
        else if(dir[i]=='E'){
            x++;
        }
        else if(dir[i]=='W'){
            x--;
        }
        
        else{
            cout<<"wrong input"<<endl;
            break;
        }
        }
        cout<<x<<" "<<y<<endl;
    cout<<"RESULT:"<<" ";
    for(int j=0;j<abs(y);j++){
        if(y>=0){
            cout<<"N";
        }
        else if(y<0){
            cout<<"S";
        }
    }
    for(int k=0;k<abs(x);k++){
        if(x>=0){
            cout<<"E";
        }
        else if(x<0){
            cout<<"W";
        }
        
    }
    if((x==0)&&(y==0)){
            cout<<"origin";
        }
    return 0;
}