#ifndef CLASES_H
#define CLASES_H

#include <string>
using namespace std;


class cancion {
public:
    int codigo;
    string titulo;
    int duracion;

    cancion();
    void reproducir();
};




class publicidad {
public:
    string mensaje;
    string categoria;
    int prioridad;

    publicidad(const string &m = "", const string &cat = "c", int p = 1);
    void mostrar();
};


class listadefavoritos {
public:
    listadefavoritos(int cap = 10);
    void agregar(cancion *c);
    void eliminar(int codigo);
    void listar();
    void reproducir_aleatorio(int k = 5);
};


class usuario {
public:
    string nombre_usuario;
    string tipo_membresia;
    string ciudad;
    string pais;
    string fecha_registro;

    usuario(const string &nick = "", const string &tipo = "estandar",
            const string &ci = "", const string &pa = "", const string &fe = "");
    virtual ~usuario();
    virtual void mostrar_info();
    string obtener_tipo();
};


class usuariopremium : public usuario {
public:
    listadefavoritos *mis_favoritos;
    usuariopremium *siguiendo_a;

    usuariopremium(const string &nick = "");
    ~usuariopremium();
    void agregarfavorito(cancion *c);
    void seguir_usuario(usuariopremium *u);
    void reproducir_favoritos();
};


class album {
public:
    int codigo;
    string titulo;

    album(int id = 0, const string &t = "");
    void agregar_cancion(cancion *c);
    void listar_canciones();
};


class artista {
public:
    int codigo;
    string nombre;

    artista(int id = 0, const string &n = "");
    void agregar_album(album *a);
    void listar_albumes();
};

#endif // CLASES_H





