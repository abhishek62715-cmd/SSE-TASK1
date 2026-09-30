#include<iostream>
using namespace std;
#include<vector>
#include<climits>

//DNF SORT
//WORKS WHEN ARRAY ELEMENTS ARE IN 3 DIFFN FORMATS LIKE 0,1,2 BUT NOT IN LIKE 0,1,2,3
//WORKS IN ORDER OF N
int main(){
    vector<int> arr={1,0,1,2,0,1,2,0,1};
    int n=arr.size();
    int low=0;
    int mid=0;
    int high =n-1;
    //arr[0....low-1]: zeroes
    //arr[low...mid-1]: ones
    // arr[mid...high]: unknown
    // arr[high+1....n-1]
    while(mid<=high){
        if(arr[mid]==0){
            //put arr[mid] in zeros
            swap(arr[mid],arr[low]);
            low++;mid++;
        }
        else if(arr[mid]==1){
            //put arr[mid] in ones
            mid++;
        }
        else{
            //put arr[mid] in twos
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;

}