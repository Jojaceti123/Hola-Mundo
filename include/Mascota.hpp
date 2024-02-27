#pragma once
#include <Alimento.hpp>
class Mascota
{
    private:
        int vida;
        int Felicidad;//Entero el cual es un objeto
        int Energia;

    public:
        Mascota()
            {
                this->vida = 0;
                this->Energia = 0;
            }//Constructor solo recibe
        ~Mascota(){}//Destructor solo cuando la mascota muere
        void Comer(Alimento alimento)
            {
                    //vida +=alimento.ExtraerEnergía();
                    this->Energia += alimento.ExtraerEnergia();//Cada vez que come la mascota se sube la energía
            }
        int LeerEnergia()
        {
            return this->Energía;
        }
};