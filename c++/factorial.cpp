#include <iostream>
using namespace std;
int main(){
    int fact=1,number=0;
    cout<<"enter number : ";
    cin>>number;

    for (int i = 2; i <= number; i++)
    {
        fact=fact*i;
    }
    cout<<"factorial of "<< number<<" is : "<<fact<<endl;
    return 0;
}