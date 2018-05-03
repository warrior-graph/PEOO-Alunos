#include "dispositivo.hpp"

Dispositivo::Dispositivo() : 
			 _marca(""),
			 _modelo(""),
			 _referencia(-1)
{}

Dispositivo::Dispositivo(std::string marca,
			 std::string modelo,
			 int referencia) : 
			 _marca(marca),
			 _modelo(modelo),
			 _referencia(referencia)
{}

std::string Dispositivo::get_marca()
{
    return _marca;
}

std::string Dispositivo::get_modelo()
{
    return _modelo;
}

int Dispositivo::get_referencia()
{
    return _referencia;
}

void Dispositivo::set_marca(std::string marca)
{
    _marca = marca;
}

void Dispositivo::set_modelo(std::string modelo)
{
    _modelo = modelo;
}

void Dispositivo::set_referencia(int referencia)
{
    _referencia = referencia;
}

Dispositivo::~Dispositivo()
{
}
