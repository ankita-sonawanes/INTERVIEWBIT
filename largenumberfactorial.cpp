// #include<iostream>
// using namespace std;
// string factorial(int A){
//     string result="1";
//     for(int i=2;i<=A;i++){
//         int carry=0;
//         for(int j=result.size()-1;j>=0;j--){
//             int product=(result[j] - '0')*i+ carry;
//             result[j]=(product % 10)+ '0';
//             carry=product / 10;
            
//         }
//         while(carry){
//             result.insert(result.begin(),(carry%10)+'0');
//             carry /=10;
//         }
//     }
//     return result;
// }
// int main(){
//     int A;
//     cout<<"enter the number:";
//     cin>>A;
//     if(A<1 || A>100){
//         cout<<"please enter the number between 1 to 100:"<<endl;
//         return 0;
//     }
//     cout<<"factorial of"<<A<<"is:"<<factorial(A)<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    cout<<"enter the number:"<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        fact=fact*i;
        
    }
    cout<<"the factorial of"<<n<<"is:"<<fact<<endl;
    
    return 0;
}