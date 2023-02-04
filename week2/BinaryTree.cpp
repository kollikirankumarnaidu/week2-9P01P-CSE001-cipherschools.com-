// taking input from user..

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n]; 
//     for(int i=0;i<=n-1;i++){    
//         cin>>arr[i];  
//     }
//     for(int i = 0; i < n; i++){  
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//    cin>>n;
//    int arr[n];
//    int sum=0;
//    for(int i=0;i<=n-1;i++){
//     cin>>arr[i];
//    }
//    for(int i=0; i<n;i++){
//     sum=sum+arr[i];
//    }
//    cout<<sum;
//    return 0;
// }

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