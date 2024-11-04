#include <iostream>
using namespace std;
main()
{

// 1st 

for(int i=5; i>=1; i--)
{

for (int j=1; j<=i; j++)
{
    cout << j<< " ";
}
for (int k=5; k>i; k--)
{
    cout << "  ";
}
for (int l=5; l>i; l--)
{
    cout << "  ";
}
for (int j=i; j>=1; j--)
{
    cout << j << " ";
}
cout << endl;
}

// 2nd

for (int i=1; i<=5; i++)
{

for (int j=1; j<=i; j++)
{
    cout << j << " ";
}
for (int k=i; k<5; k++)
{
    cout << "  ";
}

for (int l=5; l>i; l--)
{
    cout << "  ";
}
for (int j=i; j>=1; j--)
{
    cout << j << " ";
}
    cout << endl;
}
}
