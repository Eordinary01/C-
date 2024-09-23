#include <iostream>
using namespace std;


int linearSearch(int arr[], int num,int n){
    
    for(int i =0; i<n;i++){
        if(arr[i] == num){
            return i;  // element found
        }
    }
    return -1;
}


int main(){

    int n, num;

    cout<<"Enter the size of an Array: ";
    cin>>n;

    int arr[n];
    cout<<" Enter "<<n<<" Elements:";
    for(int i =0; i <n;i++){
        cin>> arr[i];
    }

    cout<<" Enter the number to search: ";
    cin>>num;

    //perform linear search

    int result = linearSearch(arr,num,n);

    if(result != -1){
        cout<<"Element found at index "<<result<<endl;
    }
    else{
        cout<<"Element not found in the array! "<<endl;
    }


    return 0;
}