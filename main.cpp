//name=RADHIKA MITTAL
//rollno=2010990558
//setno=4
//qno=2

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void consecutive_array_or_not(int arr[],int n){
    set<int> s1; //declaring array
    for(int i=0;i<n;i++){
        s1.insert(arr[i]); //inserting elements in set
    }
    set<int>::iterator it;
    int a=*(s1.begin()); //putting 1st element of set in a
    int b=*(s1.rbegin());  //putting last element of set in b
    if(b-a==n-1 && s1.size()==n){ //if size of b-a==no of elements in array means consecutive else not
        cout<<"array contains consecutive integers of "<<a<<" to "<<b<<endl;
    }
    else{
        cout<<"array does not contain consecutive integers as element "<<b<<" is repeated"<<endl;
    }
}
int main()
{
    int n,t;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements in array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i]; //taking array elements as input
    }
    consecutive_array_or_not(arr,n);
    return 0;
}
