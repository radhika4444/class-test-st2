//name=RADHIKA MITTAL
//rollno=2010990558
//setno=4
//qno=1

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void minindex(int arr[],int n){
   map<int,int> arr1;
   for(int i=0;i<n;i++){
    arr1[arr[i]]++; //here keys are arr elements and value are their count when they appear in array
   }

   int ans;
   for(auto it=arr1.begin();it!=arr1.end();it++){
    if(it->second>=2){ //checking if count>=2 then we are storing key in ans
        ans=it->first;
    }
   }
   bool b=false;
   int i;
   for(i=0;i<n;i++){
    if(arr[i]==ans){ //checking that ans is in array or not and printing that position
        b=true;
        break;
    }
   }
   if(b==true){
    cout<<"The minimum index of the repeating element is "<<i<<endl;
   }
   else{
    cout<<"Invalid Input"<<endl;
   }
}

int main()
{
    cout<<"enter size of array  : ";
    int n;
    cin>>n; //taking size as input
    int arr[n];
    cout<<"enter elements in array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i]; //taking array elements as input
    }
    minindex(arr,n);
    return 0;
}
