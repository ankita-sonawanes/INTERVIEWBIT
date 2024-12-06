#include<iostream>
using namespace std;
int product(int arr[],int size){
    int prod=1;
    for(int i=1;i<size;i++){
        prod *=arr[i];
    }
    return prod;

}
int main(){
    int a;
    
    cout<<"enter the number array:";
    cin>>a;
    int arr[a];
    int sum=0;
    cout<<"enter the array:"<<endl;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        sum +=arr[i];
        

    }
    int prod = product(arr, a);

    // Output results
    cout << "Sum of the array elements: " << sum << endl;
    cout << "Product of the array elements: " << prod << endl;

    return 0;
}
