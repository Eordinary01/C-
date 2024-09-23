#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    int SwapCount=0;

    for(int i =0; i<n-1;i++){
        for(int j = 0;j< n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                SwapCount++;
            }
        }
    }
    cout<<"Number of Swaps: "<<SwapCount<<endl;
}
int main(){
    int A[]={9,10,11,6,15,2};
    int N = sizeof(A)/sizeof(A[0]);

    bubbleSort(A,N);
    cout<<"Sorted Array: ";
    for(int i  =0;i<N;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}