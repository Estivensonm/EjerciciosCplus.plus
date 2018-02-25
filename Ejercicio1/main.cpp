#include <iostream>

using namespace std;

int main()
{
    float Radio,Area;
    cout << "Ingrese el radio del circulo:"<<endl;
    cin >>Radio;
    Area =3.1416 * (Radio*Radio);

    if(Area>5000){
        cout <<" Datos Erroneos";
    }
    else
        {
        cout <<"El Area del circulo es:"<<Area;
    }


    return 0;
}
