#include<iostream>
using namespace std;
#include<vector>

void generate_subarraays(const vector<int>& arr){
    int n=(int)arr.size();
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            //generate the sub arrays thats starts
            //at the ith index and ends at the
            // jth index
            for(int k=1;k<=j;k++){
                cout<<arr[k]<<" ";

            }
            cout<<endl;
        }
        cout<<endl;

    }
}
int main(){
    
    vector<int> arr={10,20,30,40};

    generate_subarraays(arr);
}