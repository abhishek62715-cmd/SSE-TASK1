//LINEAR SEARCH

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> v={10,20,30,40,50};
    int t;
    cin>>t;
    int ans =-1;

    for(int i=0;i<v.size();i++){
        if (t==v[i]){
            ans=i;
            break;
        }
    }

    if(ans==-1){
        cout<<"Target "<<t<<" not found."<<endl;
        }
    else{
        cout<<"Target "<<t<<"found at "<<ans<<" position."<<endl;
    }

    return 0;

}
