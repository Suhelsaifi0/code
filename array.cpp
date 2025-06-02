#include<iostream>
using namespace std;
  int main(){
     int n;
     cout<<"ENTER NUMBER : ";
     cin>>n;

     int arr[n];
     cout<<"ENTER ARRAY : ";
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }

     cout<<"ENTER ARRAY : ";
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
     }

    return 0;
 }