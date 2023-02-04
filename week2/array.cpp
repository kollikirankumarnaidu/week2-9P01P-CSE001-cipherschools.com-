#include<bits/stdc++.h>
using namespace std;

void increment(int a, int arr[], int n){
    a++;
    arr[0]++;
    cout<<arr<<endl;
}
int main(){
    int a=10;

   int arr[]={1,2,3};

//cout<arr[0];
   increment(a,arr,10);
   //cout<<a<<" "<<arr[0];

   cout<<arr;
   return 0;
}