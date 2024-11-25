/*#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp=a;
    b=a;
    b=temp;
}
int main(){
    int a=23;
    int b=44;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}*/


#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=23;
    int b=44;
    
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}