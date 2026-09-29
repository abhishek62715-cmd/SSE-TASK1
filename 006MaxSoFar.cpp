#include <iostream>
using namespace std;
#include<climits>

int main(){

    int n;
    int num;
    int maxsofar=INT_MIN;
    int minsofar=INT_MAX;

    cout<<"enter total no of entries: ";
    cin>>n;

    int i=1;

    while(i<=n){

        i++;     // so that code still runs in case if maxsofar is not changed

        cin>>num;

        if (num>maxsofar){
            maxsofar=num;
        }
        if (num<minsofar){
            minsofar=num;
        }

    }

    cout<<"Max so far is: "<< maxsofar <<endl;
    cout<<"Min so far is : "<< minsofar <<endl;

    return 0;
    
}