# icecreamshop
#include <iostream>
using namespace std;
  
int main()
{
    cout << "_______ICE CREAM SHOW MENU____________" << endl;

    int C = 100, V = 80, S = 120;

    cout << "chocolate = " << C << endl;
    cout << "Vanila = " << V << endl;
    cout << "strawberry = " << S << endl;
    int nC = 100, nV = 100, nS = 100;
    int nbC, nbV, nbS; // nbc means no of q, b wants for C choclate.

    cout << "enter amount of quantity buyers wants for Choclate";
    cin >> nbC;
    cout << "enter amount of quantity buyers wants for Vanila";
    cin >> nbV;
    cout << "enter amount of quantity buyers wants for strawberry";
    cin >> nbS;
    cout << endl;

    int DiscC, DiscV, DiscS;
    if (nbC != 0)
    {
        int pC = 0, dC = 0;
        int priceC = price(pC, C, nbC, nC);
        DiscC = discount(pC, dC, nbC);
    }
    if (nbV != 0)
    {
        int pV = 0, dV = 0;
        int priceV = price(pV, V, nbV, nV);
        DiscV = discount(pV, dV, nbV);
    }
    if (nbS != 0)
    {
        int pS = 0, dS = 0;
        int priceS = price(pS, S, nbS, nS);
        DiscS = discount(pS, dS, nbS);
    }
    int result = DiscC + DiscV + DiscS;
    cout << result;
}
  
int price(int pF, int F, int nbF, int nF)
{
    pF = nbF * F;
    nF = nF - nbF;
    return pF;
}
int discount(int pF, int dF, int nbF)
{
    if (nbF > 10)
        dF = pF - (pF / 10);
    return dF;
}  
