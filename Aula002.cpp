/*
Aula 002 - Tabuada
*/

#include <iostream>
using namespace std;

main()
{
    int j;
    cout << "Entrada de Numero: ";
    cin >> j;
    cout << "\n";
    for (int i=1; i<11; i++)
    {
        cout << "\t" << j << "x" << i << "=" << (i*j) << endl;
    }
    
    return 0;
}