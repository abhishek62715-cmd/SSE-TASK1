#include<iostream>
using namespace std;
#include<climits>
#include<vector>
//TARGET SUM PAIRS
int main(){
//GIVEN SORTED ARRAY 
//MORE OPTIMISED WAY
vector<int> v={10,20,30,40,50,60};
int n=v.size();
int target;
int count=0;
cin>>target;
int i=0;
int j=n-1;
while(i<j){
    //time: O[n]
    //space: O[1]
    int pairsum=v[i]+v[j];
    if(pairsum==target){
        count++;
        i++;
        j--;
    }
    else if(pairsum>target){
        j--;
    }
    else{
        //pairsum<target
        i++;
    }
}
cout<<count<<endl;
return 0;

}