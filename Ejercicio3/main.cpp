#include <iostream>

using namespace std;

int main()
{
    float descuento,sueldo,sueldoneto;
    cout << "Ingrese sueldo:";
    cin >>sueldo;

    if(sueldo<=1000){
        descuento=sueldo*0.10;
        cout <<"Su descuento es:"<< descuento;
        sueldoneto=(sueldo-descuento);
        cout <<"su sueldo neto es:"<< sueldoneto;
    }
    else if(sueldo>1000 && sueldo <=2000){

            descuento=(sueldo-1000)* 0.05;
            cout <<"Su descuento es:" <<descuento <<endl;
            sueldoneto=(sueldo-descuento);
            cout <<"Su sueldo neto es:" <<sueldoneto;
        }

    else{
            descuento=(sueldo-2000)* 0.03;
            cout <<"Su descuento es:"<<descuento <<endl;
            sueldoneto=(sueldo-descuento);
            cout <<"Su sueldo neto es:" <<sueldoneto;
        }

    return 0;
}
