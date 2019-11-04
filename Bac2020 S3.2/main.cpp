#include <bits/stdc++.h>

using namespace std;
/*
    Ideea se bazeaza pe faptul ca : se imparte tot textul cu ajutorul functiei strtok
    , iar mai apoi se verifica daca lungimea cuvantului e >= n (citit de la tast)
    atunci se afiseaza pe ecran , in caz contrar se retine intr-un matrice de caractere
    cuvantul respectiv , care va fi afisat dupa ce vor fi analizate toate cuvintele din text
*/
int main()
{
    char cuv_subn[100][101];
    unsigned int n,j,i;
    char prop[101];
    char *p ;
    j = 0;
    cin>>n;
    cin.get() ; // 'anulam' caracterul enter
    cin.getline(prop,101);
    p = strtok(prop," ");
    while(p)
    {
        if(strlen(p) >= n)
            cout<<p<<endl;
        else
            strcpy(cuv_subn[j++],p);
        p = strtok(NULL," ");
    }
    for(i=0;i<j;++i)
        cout<<cuv_subn[i]<<endl;
    return 0;
}
