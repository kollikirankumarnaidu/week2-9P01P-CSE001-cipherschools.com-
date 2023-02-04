// #include<bits/stdc++.h>
// using namespace std;



// int fact(int n){
//     //base case 
//     if(n==0){
//         return 1;
//     }
//      return  n*fact(n-1);
//     // int m=fact(n-1);  // 
//     // int ans=n*m; //5*24
//     // return ans;
// }




/// print n to 1 with recurssion

// #include<bits/stdc++.h>
// using namespace std;

// void printdescending(int n){
//     // base case
//     if(n==0){
//         return;
//     }

//     cout <<"resursive call"<<endl;
//     // small calculaTION
//     cout<<n<< " ";
//     // recursive call
//     printdescending(n-1);
// }

// int main(){
//     int n;
//     cin>>n;

//     printdescending(n);
// }


// #include<bits/stdc++.h>
// using namespace std;

// void printaccending(int start, int n){
//     // base case
//     if(start>n){
//         return;
//     }

//     cout <<"resursive call"<<endl;
//     // small calculaTION
//     cout<<start<< " ";
//     // recursive call
//     printaccending(start+1,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     int start=1;

//     printaccending(start, n);
// }

// printing natural number with recurssion......12546
// #include<bits/stdc++.h>
// using namespace std;

// void printnaturalnumber(int n){
//     // base case
//     if(n==0){
//         return;
//     }
//     printnaturalnumber(n-1);
//     cout<<n<<endl;

// }

// int main(){
//     int n;
//     cin>>n;
//     //int start=1;

//     printnaturalnumber(n);
// }

//counting elements of number....

// #include<bits/stdc++.h>
// using namespace std;

// int  countdigit(int n){
//     // base case
//     if(n==0){
//         return 0;
//     }
//     int otherdigit= countdigit(n/10);
//     int ans=1+otherdigit;
//     return ans;


// }

// int main(){
//     int n;
//     cin>>n;
//     //int start=1;

//     cout<<countdigit(n);

// }


// sum of digits of number.....

// #include<bits/stdc++.h>
// using namespace std;

// int  sumofdigits(int n){
//     // base case
//     if(n==0){
//         return 0;
//     }
//     int m= sumofdigits(n/10); // resuressive call
//     int ans=n%10+m; //// small calculation
//     cout<<"at n = "<<n<<" m is "<<m<<" ans  is "<<ans<<endl;// to konw the how recurrsion is calling the ans and the steps..
//     return ans;


// }

// int main(){
//     int n;
//     cin>>n;
//     //int start=1;
//     int ans= sumofdigits(n);
//     cout<<ans;

// }



//sum of arrays...
// #include<bits/stdc++.h>
// using namespace std;

// int  sumofarrayre(int arr[], int n){
//     // base case
//     if(n==0)
//         return 0;

//     int m= sumofarrayre(arr+1,n-1); // resuressive call
//     int ans=arr[0]+m; //// small calculation
//     //cout<<"at n = "<<n<<" m is "<<m<<" ans  is "<<ans<<endl;// to konw the how recurrsion is calling the ans and the steps..
//     return ans;


// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ans= sumofarrayre(arr,n);

//     cout<<ans;

//     return 0;

// }



// removing element from string....

// #include<bits/stdc++.h>
// using namespace std;

// int  sumofarrayre(int arr[], int n){
//     // base case
//     if(n==0)
//         return 0;

//     int m= sumofarrayre(arr+1,n-1); // resuressive call
//     int ans=arr[0]+m; //// small calculation
//     //cout<<"at n = "<<n<<" m is "<<m<<" ans  is "<<ans<<endl;// to konw the how recurrsion is calling the ans and the steps..
//     return ans;


// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ans= sumofarrayre(arr,n);

//     cout<<ans;

//     return 0;

// }



#include<bits/stdc++.h>
using namespace std;

int main(){
    char b[]="xyz";
    char *c =&b[0];
    c++;
      cout<< c<<endl;
    c++;
      cout<< c<<endl;
    c++;
    cout<< c<<endl;
}