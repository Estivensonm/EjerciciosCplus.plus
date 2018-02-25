#include <iostream> //Bibliotecas

using namespace std;

//
int main()
{
    int monto,descuento;

    cout <<"Ingrese monto:";
    cin>>monto;

    if(monto <=10000){
        descuento = monto * 0.10;
    cout <<"Su desuento es:" <<descuento;
    }


    if(monto > 10000){
       descuento = monto * 0.20;
    cout <<"Su desuento es:" <<descuento;
    }
    return 0;
}
