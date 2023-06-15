#include <iostream>
using namespace std;

/*
 3 ice cream , C , V < S
read their prise ans show
1st fun - showing the ice cream price ,
  and asking the amount og how much they want
2nd function - discount giving based on the no of ice cream they brought
*/

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
/*


int pC=0,pV=0,pS=0;
if (nC>nbC)
{
    pC=nbC*C;
    nC-=nbC;
}
if (nbV<nV)
{
    pV=nbV*V;
    nV-=nbV;
}
 while (nbS<nS)
{
    pS=nbS*S;
    nS-=nbS;
}
int pCd=0,pVd=0,pSd=0;
while(nbC>10)
{
    pCd=pC-(C/10);

}
 while(nbV>10)
{
    pVd= pV-(V/10);

}
 while(nbS>10)
{
    pSd=pS-(S/10);

}
int final = pCd + pVd + pSd;
cout<<"final amount ot pay"<<final;

return 0;
*/
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
