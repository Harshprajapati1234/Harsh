#include <iostream>
using namespace std;

main()
{

    for (char i = 'A'; i <= 'E'; i++)
    {

        for (char j = i; j >= 'A'; j--)
        {

            cout << j << " ";
        }
        cout << endl;
    }return 0;

}   
