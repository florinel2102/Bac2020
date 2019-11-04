#include <bits/stdc++.h>
using namespace std;
#define IN "numere.in"
/*
    Ideea unui algoritm ar fi de a retine toate elementele intr-un vector , dar datorita numarului extrem de mare 1 miliard
    observam ca avem nevoie doar de actualul element si precedentul (spre exemplu sirului lui fibonnaci , programare dinamica) ;
    La fiecare pas aflam numarul de numere care lipseste dintre actual si precedent , pt ca e sortat descrescator
    Timpul algoritmului este liniar O(n) , n - reprezinta numarul de numere din fisier 
    Implementare / Rezolvare : Florin PRicopie
*/
int main()
{
    unsigned int a,b,i,n,nr;
    bool ok = false;
    a=b=nr=0;
    ifstream cin(IN);
    cin>>n;
    while(!cin.eof())
    {
        cin>>a;
        if(!ok && a<=n) // initial avem nevoie sa aflam numarul de numere care lipseste de la n pana la a
        {
            ok = true;
            if(a < n) // daca a == n atunci numarul de numere care lipsesc e 0 , dar aplicand formula e -1 , care va influenta rezultatul
                nr += (n-a);
        }
        else if(b != 0  && b>a)
            nr += (b-a-1);
        b = a; // actualizam precedentul
    }
    if(a != 1) // daca in fisier nu am avut elementul 1 atunci trebuie sa aflam si acest nr de nr pt ca se cere in intervalul [1,n]
        nr += (a-1);

    cout<<nr;
    return 0;
}
