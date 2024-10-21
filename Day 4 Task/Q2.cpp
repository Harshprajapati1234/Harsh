#include <iostream>
using namespace std;

main(){

int n ;
unsigned long long sum=1;

cout<<"Enter the number - ";
cin>>n;

int i=1;

do{

sum*= i;
i++;

}while(i<=n);

cout << sum ;
return 0;
}   