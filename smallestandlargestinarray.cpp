#include<iostream>
using namespace std;
int main(){
int size=5;
int nums[size];
int smallest=INT16_MAX;
int indexnum=-1;
for(int i=0;i<size;i++){
    cout<<"enter the numbers:";
    cin>>nums[i];
}
for(int j=0;j<size;j++){
    if(nums[j]<smallest){
        smallest=nums[j];
        indexnum=j;
    }
}
cout<<"smallest no."<<smallest<<"index number:"<<indexnum<<endl;
return 0;

}