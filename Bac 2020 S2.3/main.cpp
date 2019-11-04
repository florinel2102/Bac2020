#include <iostream>

using namespace std;

int main()
{
    int a[5][7];
    for(int i=0;i<5;++i) //parcurgem fiecare linie
        if(a[i][0] == 2020 || a[i][6] == 2020) // daca elementul de pe poz 0 sau poz 6  e 2020 afisam i ( care reprezinta indicele\numarul de ordine al linii)
            cout<<i<<' ';

    return 0;
}
