#include <iostream>
using namespace std;
main()
{

    for (int i = 5; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {

            cout << j << " ";
        }

        for (int l = 5; l > i; l--)
        {
            cout << "  ";
        }
        for (int n = 5; n > i; n--)
        {
            cout << "  ";
        }

        for (int k = i; k>=1; k--)
        {

            cout<< k << " ";
        }

        cout << endl;
    }

}
