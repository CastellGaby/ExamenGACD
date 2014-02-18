#include <iostream>

using namespace std;

class Animal{
public:
        string nombre;
        Animal();
        virtual void hablar()=0;
        bool esFelino(){ false; }

        void setNombre(string Name){
            nombre=Name;
            cout<<nombre;
        }

        string getNombre(){
            return nombre;
        }
};


class Gato : public Animal
{
public:
     void hablar(){
        cout<<"Miau";
    }
    bool esFelino(){ return true; }
    virtual ~Gato (){}
};

class Perro : public Animal
{
public:
    void hablar(){
        cout<<"Guau";
    }
    bool esFelino(){return false; }
    virtual ~Perro(){}
};

class Lora : public Animal
{
public:
    void hablar(){
        cout<<"Hola";
    }
    bool esFelino(){ return false; }
    virtual ~Lora() {}
};
/*
class Nodo:Animal{
    Animal animalito;
    Nodo*animaal=NULL;
};
*/
/*
class Lista{
    agregarAnimal(){
       Nodo*nuevo;
    }
    guardarAnimales();
    leerAnimales();

};
*/
int main()
{
    cout << "Me falto implementarlas" << endl;
/*
    Animal *Ani[3];
    Ani[0] = new Gato();
    Ani[1] = new Perro();
    Ani[2] = new Lora();
*/

    return 0;
}
