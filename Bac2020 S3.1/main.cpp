#include <bits/stdc++.h>
using namespace std;

void duplicare(unsigned int n , unsigned int &d);
int main()
{
    unsigned int x,n;
    n=2019;
    duplicare(n,x);
    cout<<x;
    return 0;
}

void duplicare(unsigned int n , unsigned int &d) //transmitere prin referinta variabila d
{
    int cifre[5]; //vector in care retinem cifrele
    int i=0;
    while(n)
    {
        cifre[i++]= n%10;
        n/=10;
    } //stocam toate cifrele in vector
    --i;
    d=0;
    while(i>=0)  // parcurgem vectorul in sens invers
    {
        d=d*10+cifre[i]; // adaugam cifra actuala in numarul d
        if(cifre[i] %2 == 1) // o duplicam daca respecta propietatea
            d=d*10+cifre[i];
        i--; // actualizam i-ul
    }
}
