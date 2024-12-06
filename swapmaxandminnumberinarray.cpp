#include<iostream>
using namespace std;
int findmaxindex(int arr[],int size){
    int maxindex=0;
    for(int i=1;i<size;i++){
        if(arr[i] > arr[maxindex]){
            maxindex=i;
        }
    }
    return maxindex;
}
int findminindex(int arr[],int size){
    int minindex=0;
    for(int i=1;i<size;i++){
        if(arr[i] < arr[minindex]){
            minindex=i;
        }
    }
    return minindex;
}
void swapelements(int arr[],int index1, int index2){
    int temp=arr[index1];
        arr[index1]=arr[index2];
        arr[index2]=temp;
}

int main(){
    int n;
    cout<<"enter the array number:";
    cin>>n;

    int arr[n];
    cout<<"enter the array:"<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }

    int maxindex=findmaxindex(arr,n);
    int minindex=findminindex(arr,n);

    swapelements(arr,maxindex,minindex);

    cout<<"after wapping element:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
   
}
