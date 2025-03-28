#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    string pk_1, pk_2, pk_3; // Variables de los Pokémon disponibles
    string pk_t;// Almacenará la elección del jugador para el Pokémon
    string decision, batalla;
     bool elegido = false;

    cout << "=====================================\n";
    cout << "      ¡Tu aventura Pokémon inicia!   \n";
    cout << "=====================================\n\n";
    cout << "El sol brilla sobre Pueblo Paleta. Hoy no es un día cualquiera, \n";
    cout << "hoy comienza la aventura que siempre soñaste.\n\n";
    
    
    cout << "Bienvenido a la aventura de Pokémon en la Región de Kanto." << endl;
    while (!elegido){
        cout << "Escoge tu compañero Pokémon que te acompañara desde ahora en adelante: " << endl;
        cout << "Charmander\n" << "Bulbasaur\n" << "Squirtle\n" << endl;
        cin >> pk_t;
        
        // Convertira las entradas a minusculas
        for(char &c : pk_t){
            c = tolower(c);
        }
        // Lista de las variables de los Pokémon disponibles
        pk_1="charmander";
        pk_2="bulbasaur";
        pk_3="squirtle";
    
        if(pk_1==pk_t || pk_t=="1"){
            cout << "Su eleccion es Charmander, Pokémon tipo Fuego" << " Numero de Pokédex #0004" << endl;
            elegido = true;
        }
        if(pk_2==pk_t || pk_t=="2"){
            cout << "Su eleccion es Bulbasaur, Pokémon tipo Planta y Veneno" << " Numero de Pokédex #0001" << endl;
            elegido = true;
        }
        if(pk_3==pk_t || pk_t=="3"){
            cout << "Su eleccion es Squirtle, Pokémon tipo Agua" << " Numero de Pokédex #0007" << endl;
            elegido = true;
        }else{
            cout << "Ese Pokémon no esta en la lista, Porfavor escoja alguno de los 3\n" << endl;

        }
    }
    cout << "\nProfesor Oak: \n";
    cout << "\"Si quieres ser uno de los mejores, debes derrotar a los 2 Líderes de Gimnasio \n";
    cout << "de la región de Kanto y conseguir sus medallas. Solo así podrás desafiar a la Liga Pokémon.\"\n\n";

    cout << "Con tu Pokémon en la Poké Ball y la emoción recorriendo tu cuerpo,\n";
    cout << "sales del laboratorio. ¡Tu aventura ha comenzado!\n";
    cout << "Con tu Pokémon listo, es momento de tomar tu primera decisión:\n";
    cout << "1. Ir directamente a la Ruta 1 para entrenar.\n";
    cout << "2. Visitar a tu rival antes de salir del pueblo.\n";
    
    bool decision_valida = false;
    while (!decision_valida) {
        cout << "Elige 1 o 2: ";
        cin >> decision;

        if (decision == "1") {
            cout << "\nDecides ir a la Ruta 1 para entrenar. El camino es tranquilo, pero pronto\n";
            cout << "te das cuenta de que los Pokémon salvajes no serán fáciles de vencer...\n";
            decision_valida = true;
        } else if (decision == "2") {
            cout << "\nDecides visitar a tu rival antes de partir. Al llegar a su casa, él te desafía a\n";
            cout << "una batalla Pokémon para demostrar quién es el mejor entrenador...\n";
            decision_valida = true;
        } else {
            cout << "Opción no válida. Inténtalo de nuevo.\n";
        }
    }
    if (decision == "1") {
        cout << "\nCaminando por la Ruta 1, escuchas un ruido entre la hierba alta...\n";
        cout << "Un Pokémon salvaje aparece!\n";
        
        string pokemon_salvaje;
        int aleatorio = rand() % 3; 
        if (aleatorio == 0) pokemon_salvaje = "Pidgey";
        else if (aleatorio == 1) pokemon_salvaje = "Rattata";
        else pokemon_salvaje = "Caterpie";
        
        cout << "Es un " << pokemon_salvaje << "! ¿Qué quieres hacer?\n";
        cout << "1. Luchar\n";
        cout << "2. Huir\n";
        bool batalla_valida = false; 
        while (!batalla_valida) {
            cout << "Elige 1 o 2: ";
            cin >> batalla;

            if (batalla == "1") {
                cout << "\nDecides luchar contra " << pokemon_salvaje << "!\n";
                cout << "Después de un combate intenso, tu Pokémon sale victorioso.\n";
                cout << "¡Tu Pokémon sube de nivel y ya esta listo para batallar en un Gimnasio Pokémon!\n";
                batalla_valida = true;
            } else if (batalla == "2") {
                cout << "\nDecides huir del combate. A veces, la mejor estrategia es evitar una batalla innecesaria.\n";
                cout << "Sigues explorando la Ruta 1, listo para nuevos desafíos.\n";
                cout << "Tu pokémon no subira de nivel.\n";
                cout << "No podras avanzar.\n";
                cout << "Fin del viaje.\n";
                return 0; // Si no batalla con algun pokemon seguira en su nivel inicial y no podra entrar a los gimnasios pokémones.
                batalla_valida = true;
            } else {
                cout << "Opción no válida. Inténtalo de nuevo.\n";
            }
        }
    }
    else if (decision == "2"){
        cout << "\nTu rival saca un Panpour\n";
        cout << "\nDespues de una ardua batalla tu pokémon sube de nivel\n";
        cout << "\ny ya esta listo para batallar en un Gimnasio Pokémon\n";
    }
    
    bool gimnasio_valido = false;
    while (!gimnasio_valido) {
        cout << "\nAhora que tu Pokémon está listo, es momento de decidir a qué gimnasio ir primero:\n";
        cout << "1. Gimnasio de Brock en Ciudad Plateada (Líder de Gimnasio: Brock, Pokémon tipo Roca)\n";
        cout << "2. Gimnasio de Misty en Cerulean City (Líder de Gimnasio: Misty, Pokémon tipo Agua)\n";
        cout << "Elige 1 o 2: ";
        cin >> decision;
        
       if (decision == "1") {
            cout << "\nDecides ir al gimnasio de Brock. Al llegar a Ciudad Plateada, te enfrentas a él.\n";
            cout << "Brock desafía a tu Pokémon con su Geodude y Onix. ¡La batalla será difícil!\n";
            
            // Si el jugador elige Charmander (fuego), pierde contra Brock (roca)
            if (pk_t == "charmander" || pk_t == "1") {
                cout << "¡Tu Pokémon es de tipo Fuego, y los Pokémon de tipo Roca de Brock son muy resistentes!\n";
                cout << "¡Has perdido la batalla contra Brock!\n";
                cout << "Fin del juego. ¡Mejor suerte la próxima vez!\n";
                return 0;  
            } else {
                cout << "Tu Pokémon lucha con valentía y derrota a los Pokémon de tipo Roca de Brock.\n";
                cout << "¡Has ganado la medalla de Roca de Brock!\n";
                cout << "¡Felicidades! Has ganado tu primera medalla. Fin del juego.\n";
                gimnasio_valido = true;
            }
       } else if (decision == "2") {
            cout << "\nDecides ir al gimnasio de Misty. Al llegar a Cerulean City, te enfrentas a ella.\n";
            cout << "Misty desafía a tu Pokémon con su Starmie. ¡Será una dura batalla!\n";

            // Si el jugador elige Squirtle (agua), pierde contra Misty (agua)
            if (pk_t == "squirtle" || pk_t == "3") {
                cout << "¡Tu Pokémon es de tipo Agua, y el Pokémon de Misty también lo es!\n";
                cout << "¡Has perdido la batalla contra Misty!\n";
                cout << "Fin del juego. ¡Mejor suerte la próxima vez!\n";
                return 0;  // Termina el juego si el jugador pierde
            } else {
                cout << "Tu Pokémon lucha con valentía y derrota a los Pokémon de tipo Agua de Misty.\n";
                cout << "¡Has ganado la medalla de Cascada de Misty!\n";
                cout << "¡Felicidades! Has ganado tu primera medalla. Fin del juego.\n";;
                gimnasio_valido = true;
            }

        } else {
            cout << "Opción no válida. Inténtalo de nuevo.\n";
        }
    }
     cout << "Gracias por vivir la experiencia de Pokémon";
    
    return 0;
}
