#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;


int main()
{
    int Primero, Segundo;
    cin >> Primero >> Segundo;
    vector<int> numero;
    for(int i = 0;i < Segundo;i++)
    {   
        int valor;
        cin >> valor;
        numero.push_back(valor);
    }

    sort(numero.begin(),numero.end());
    int inf = 0;
    int sup = Primero - 1;

    int res = numero[sup] - numero[inf];
    while(sup<=(Segundo - 1))
    {
        int aux = numero[sup] - numero[inf];
        if(aux < res)
        {
            res = aux;
        }
        sup++;
        inf++; 
    }
    cout << res;
    return 0;
}