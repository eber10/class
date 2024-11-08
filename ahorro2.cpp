#include<iostream>
using namespace std;
class Ahorro
{
    private:
        int ahorroInicial;
    public:
        Ahorro(int);
        void ahorrar(int);
        void retirar(int);
        void mostrar();
};
Ahorro::Ahorro(int cantidad)
{
    if(cantidad<0)
    {
        ahorroInicial=150;
    }
    else
    {
        ahorroInicial=cantidad;
    }
}
void Ahorro::ahorrar(int cantidad)
{
    ahorroInicial+=cantidad;
    cout<<"Al momento tienes un ahorro de "<<ahorroInicial<<" pesos"<<endl;
}
void Ahorro::retirar(int cantidad)
{
    if(cantidad>ahorroInicial)
    {
        cantidad=ahorroInicial;
    }
    ahorroInicial-=cantidad;
    cout<<"Al momento tienes un ahorro de "<<ahorroInicial<<" pesos"<<endl;
}
void Ahorro::mostrar()
{
    cout<<" Al momento tienes un ahorro de "<<ahorroInicial<<" pesos "<<endl;

}
int main()
{
    Ahorro inicial(100);
    int a;
    cout<<"Ahorrar:"; cin>>a;
    inicial.ahorrar(a);
    return 0;
}

