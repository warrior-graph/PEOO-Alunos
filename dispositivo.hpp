#ifndef DISPOSITIVO_HPP
#define DISPOSITIVO_HPP

#include <string>

class Dispositivo
{
private:
    std::string _marca;
    std::string _modelo;
    int _referencia;

public:
    Dispositivo();
    Dispositivo(std::string marca, std::string modelo, int referencia);
    std::string get_marca();
    std::string get_modelo();
    int get_referencia();
    void set_marca(std::string marca);
    void set_modelo(std::string modelo);
    void set_referencia(int referencia);
    virtual ~Dispositivo();

};

#endif

