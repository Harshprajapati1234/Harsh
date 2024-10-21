#include <iostream>
using namespace std;

main()
{

    int n;
    int sum = 0;

    cout << "Enter the number :-  ";
    cin >> n;

    int i = n;
    do
    {
        sum+=i;
        i--;
    } while (i>0);

    cout << sum ;
    return 0;
}
