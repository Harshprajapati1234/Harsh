#include <iostream>
using namespace std;
main(){

for(int i=1; i<=5; i++){
 
    for(int k=i; k>=1; k--){

        cout <<" ";

    }

    for(int j=5; j>=i; j--){

        cout << j <<"";

    }
    cout << endl;
}

}