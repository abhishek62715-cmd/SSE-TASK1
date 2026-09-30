//BINARY SEARCH

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector <int> v={10,20,30,40,50};     //SORTED ARRAY
    int t;
    cin>>t;

    int i=0;
    int j=v.size()-1;
    int ans=-1;

    while(i<=j){

        int mid=i+(j-i)/2;   //middle element

        if(v[mid]==t){
            ans=mid;
            break;
        }

        else if(v[mid]>t){  //target will be below mid
            j=mid-1;
        }
        else{  //target will be above mid ie v[mid]<t
            i=mid+1;
        }

    }

    if (ans == -1) {
        cout << "Target " <<t<< " not found."<<endl;
    } else {
        cout << "Target " <<t<< " found at index " << ans<<endl;
    }

    return 0;

}