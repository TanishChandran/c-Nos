#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int on=n;
    while(n>0){
        int lastdigit = n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }
    if(sum==on){
    cout<<"Armstrong";}
    else
    cout<<"Not Armstrong";
    cout<<sum;
    return 0;
}