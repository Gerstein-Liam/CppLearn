// CppBase.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "byreference.h"
#include "car.h"
using namespace std;

void PointerVersusReference();

int ptrVsReference_IncValue = 10;

int main()
{
    car myCar;

    myCar.brand = "Mercedez";


    cout << "MyCar:" << myCar.brand << endl;
    myCar.Turn();
    
    PointerVersusReference();
}

void PointerVersusReference() {

    func funcptr_refbyptr = arg_by_pointer;
    void (*funcptr_byref) (int&);

    funcptr_byref = arg_by_reference;

    int x = 2;
    arg_by_pointer(&x);
    arg_by_pointer(&x);
    arg_by_reference(x);
    funcptr_refbyptr(&x);
    funcptr_byref(x);

    cout << "X:" << x << endl;

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
