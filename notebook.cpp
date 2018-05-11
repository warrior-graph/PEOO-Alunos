#include "notebook.hpp"

Notebook::Notebook() : Dispositivo(),
		       _mem_gb(0),
		       _processador(""),
		       _freq_processador(0.0),
		       _armazenamento(0),
		       _tipo_armazenamento("")

{}

Notebook::Notebook(uint32_t mem_gb,
		   std::string processador,
		   double freq_processador,
		   uint32_t armazenamento,
	           std::string tipo_armazenamento,
		   std::string marca,
		   std::string modelo,
		   int referencia) :		   
		   _mem_gb(mem_gb),
		   _processador(processador),
		   _freq_processador(freq_processador),
		   _armazenamento(armazenamento),
		   _tipo_armazenamento(tipo_armazenamento),
	   Dispositivo(marca, modelo, referencia)
{}

Notebook::~Notebook()
{
}

uint32_t Notebook::get_mem_gb()
{
    return _mem_gb;
}

std::string Notebook::get_processador()
{
    return _processador;
}

double Notebook::get_freq_processador()
{
    return _freq_processador;
}

uint32_t Notebook::get_armazenamento()
{
    return _armazenamento;
}

std::string Notebook::get_tipo_armazenamento()
{
    return _tipo_armazenamento;
}

void Notebook::set_mem_gb(uint32_t mem_gb)
{
    _mem_gb = mem_gb;
}

void Notebook::set_processador(std::string processador)
{
    _processador = processador;
}

void Notebook::set_armazenamento(uint32_t armazenamento)
{
    _armazenamento = armazenamento;
}

void Notebook::set_tipo_armazenamento(std::string tipo_armazenamento)
{
    _tipo_armazenamento = tipo_armazenamento;
}
