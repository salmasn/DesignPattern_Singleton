#include <iostream>
using namespace std;
#include "Sing.h"
#pragma once


// Exemple d'utilisation
int main() {
    // Création de l'instance unique
    Sing& s1 = Sing::creation(10);
    s1.afficher();

    Sing& s3= s1;

    s3.afficher();


    Sing& s2 = Sing::creation(20);
    s2.afficher();
    //il y a pas creation d'un autre objet 

    // Les deux références pointent vers la même instance
    cout << "Adresse de s1: " << &s1 << endl;
    cout << "Adresse de s2: " << &s2 << endl;
    cout << "Adresse de s2: " << &s3<< endl;

    return 0;
}



