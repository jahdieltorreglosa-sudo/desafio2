#include "clases.h"
#include <iostream>
using namespace std;


cancion::cancion() {
    cout << "se creo una cancion\n";
}

void cancion::reproducir() {
    cout << "reproduciendo cancion\n";
}

/*
publicidad::publicidad() {
    cout << "se creo una publicidad\n";
}
*/
void publicidad::mostrar() {
    cout << "mostrando anuncio\n";
}

/*
listadefavoritos::listadefavoritos() {
    cout << "lista de favoritos creada\n";
}

void listadefavoritos::agregar() {
    cout << "cancion agregada a favoritos\n";
}

void listadefavoritos::eliminar() {
    cout << "cancion eliminada de favoritos\n";
}
*/

void listadefavoritos::listar() {
    cout << "mostrando lista de favoritos\n";
}
/*
void listadefavoritos::reproducir_aleatorio() {
    cout << "reproduciendo canciones aleatorias\n";
}

usuario::usuario() {
    cout << "usuario creado\n";
}
*/

void usuario::mostrar_info() {
    cout << "mostrando informacion de usuario\n";
}

string usuario::obtener_tipo() {
    return tipo_membresia;
}
/*
usuariopremium::usuariopremium() {
    cout << "usuario premium creado\n";
}

void usuariopremium::agregarfavorito() {
    cout << "agregando favorito\n";
}

void usuariopremium::seguir_usuario() {
    cout << "siguiendo a otro usuario\n";
}
*/
void usuariopremium::reproducir_favoritos() {
    cout << "reproduciendo favoritos\n";
}

/*
album::album() {
    cout << "album creado\n";
}

void album::agregar_cancion() {
    cout << "agregando cancion al album\n";
}
*/
void album::listar_canciones() {
    cout << "listando canciones del album\n";
}

/*
artista::artista() {
    cout << "artista creado\n";
}

void artista::agregar_album() {
    cout << "agregando album al artista\n";
}
*/
void artista::listar_albumes() {
    cout << "listando albumes del artista\n";
}
