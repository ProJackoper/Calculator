#include <iostream>

using namespace std;

int main()
{
    int o;
    for(int liczba = 1; o<20; liczba++)
    {
        int suma = 0;
        
        for(int dzielnik = 1; dzielnik<liczba;dzielnik++)
        {
            if((liczba%dzielnik)==0)
            {
                suma+=dzielnik;
            }
        }
        
        if(liczba==suma)
        {
            cout<<liczba<<endl;
        }
        
    }
    
    return 0;
}