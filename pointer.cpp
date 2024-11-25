/*#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr;
    aptr=&a;

    cout<<aptr<<endl;
    cout<<&a<<endl;
    cout<<*aptr<<endl;
    return 0;
}*/


/*//Update value
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr =&a;
    

    cout<<*aptr<<endl;
    *aptr=20;
    cout<<a<<endl;
    return 0;
}*/

#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr=&a;
    

    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;
    return 0;
}