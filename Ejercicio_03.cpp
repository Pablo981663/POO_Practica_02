#include <iostream>

using namespace std;

class Gato{
public:
    Gato (int edadInicial, int pesoInicial);
    int ObtenerEdad()const;
    void AsignarEdad (int edad);

    int ObtenerPeso() const;
    void AsignarPeso (int peso);
    ~Gato();
    void Maullar ();
private:
    int suEdad,suPeso;
};

Gato::Gato (int edadInicial, int pesoInicial){
    suEdad=edadInicial;
    suPeso=pesoInicial;
    cout<<"Se ha creado un Gato de edad: "<<edadInicial <<endl;
    cout<<"y tiene un peso de: "<<pesoInicial<<"kg"<<endl;
}

Gato::~Gato(){
    cout<<"El Gato se destruira en 3, 2, 1... ya fue." <<endl;
}

int Gato::ObtenerEdad()const{
    return suEdad;
}
void Gato::AsignarEdad(int edad){
    suEdad=edad;
}
int Gato::ObtenerPeso()const{
    return suPeso;
}
void Gato::AsignarPeso(int peso){
    suPeso=peso;
}
void Gato::Maullar(){
cout<<"Miawwwww"<<endl;
}
int main(){
Gato Michi(4,6);
Michi.Maullar();
cout<<"Michi es un gato que tiene: ";
 cout<<Michi.ObtenerEdad()<<" anios de edad"<<endl;
 cout<<"y un peso de: "; cout<<Michi.ObtenerPeso()<<"kg"<<endl;

 return 0;
}

