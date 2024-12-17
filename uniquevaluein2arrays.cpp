#include<iostream>
using namespace std;
bool existarray(int a[],int s, int value){
    for(int i=0;i<s;i++){
        if(a[i]==value){
            return true;
        }
        
    }
    return false;
}

void uniqueelement(int a1[],int s1, int a2[], int s2){
    cout<<"unique element:";
    for(int i=0;i<s1;i++){
        if(!existarray(a2,s2,a1[i])){
            cout<<a1[i]<<" ";
        }
    }
    for(int i=0;i<s2;i++){
        if(!existarray(a1,s1,a2[i])){
            cout<<a2[i]<<" ";
        }
    }
    cout<<endl;
}


int main(){
    int s1,s2;
    cout<<"enter the size of array1:";
    cin>>s1;
    int a1[s1];
    cout<<"enter the array1 element:";
    for(int i=0;i<s1;i++){
        cin>>a1[i];
    }
    cout<<"enter the size of array2:";
    cin>>s2;
    int a2[s2];
    cout<<"enter the array2 element:";
    for(int i=0;i<s2;i++){
        cin>>a2[i];
    }
    uniqueelement(a1,s1,a2,s2);
    return 0;
}