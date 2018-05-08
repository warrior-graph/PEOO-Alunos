#ifndef NOTEBOOK_HPP
#define NOTEBOOK_HPP
#include "dispositivo.hpp"
#include <string>

class Notebook : public Dispositivo
{
private:
    uint32_t _mem_gb;
    std::string _processador;
    double _freq_processador;
    uint32_t _armazenamento;
    std::string _tipo_armazenamento;


public:
    Notebook();
    Notebook(uint32_t mem_gb,
	     std::string processador,
	     double freq_processador,
	     uint32_t armazenamento,
	     std::string tipo_armazenamento,
	     std::string marca,
	     std::string modelo,
	     int referencia);
    
    virtual ~Notebook();

    //getters
    uint32_t get_mem_gb();
    std::string get_processador();
    double get_freq_processador();
    uint32_t get_armazenamento();
    std::string get_tipo_armazenamento();
    
    //setters
    void set_mem_gb(uint32_t mem_gb);
    void set_processador(std::string processador);
    void set_armazenamento(uint32_t armazenamento);
    void set_tipo_armazenamento(std::string tipo_armazenamento);

};

#endif
