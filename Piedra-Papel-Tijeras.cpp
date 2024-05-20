#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
    int a, b, t, G=0, E=0, P=0;
    t = time (NULL);
    srand (t);
    do 
    {
        cout << "Quiere jugar pierda papel o tijeras?" << '\n' << "Elija 1 para pierda" <<'\n' << "Elija 2 para papel" << '\n' << "ELija 3 para Tijeras" << '\n' << "0 para Cancelar" << '\n'; 
        cin >> a;
        b=rand ()%3+1;
        if (a==b)
        {
            cout << "Es un empate! " << a << '\n';
            E++;
        }
        else if (((a==1)&&(b==3)) || a==2&&b==1 || a==3&&b==2)
        {
            cout << "Ganaste! " << b << '\n';
            G++;
        }
        else if (a==1&&b==2 || a==2&&b==3 || a==3&&b==1)
        {
            cout << "Perdiste... " << b << '\n';
            P++;
        }
    }while (a !=0);
    cout <<"Ganaste un total de: " << G << '\n' << "Perdiste un total de: " << P << '\n' << "Empataste un total de: " << E;
    return 0;
}
