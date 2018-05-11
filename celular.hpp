#ifndef CELULAR_HPP
#define CELULAR_HPP

#include <string>
#include "dispositivo.hpp"

class Celular : public Dispositivo
{
private:
    std::string _sistema_operacional;
    double _tam_tela_polegada;
    double _resolucao_camera_m_pixel;
    uint32_t _mem_interna_gb;
    uint32_t _mem_ram_gb;
    std::string _processador;

public:
    Celular();
    Celular(std::string sistema_operacional,
	    double tam_tela_polegada,
	    double resolucao_camera_m_pixel,
	    uint32_t mem_interna_gb,
	    uint32_t mem_ram_gb,
	    std::string processador,
	    std::string marca,
	    std::string modelo,
	    int referencia);
    
    virtual ~Celular();
    
    std::string get_sistema_operacional();
    double get_tam_tela_polegada();
    double get_resolucao_camera_m_pixel();
    uint32_t get_mem_interna_gb();
    uint32_t get_mem_ram_gb();
    std::string get_processador();

    void set_sistema_operacional(std::string sistema_operacional);
    void set_tam_tela_polegada(double tam_tela_polegada);
    void set_resolucao_camera_m_pixel(double resolucao_camera_m_pixel);
    void set_mem_interna_gb(uint32_t mem_interna_gb);
    void set_mem_ram_gb(uint32_t mem_ram_gb);
    void set_processador(std::string processador);



};

#endif
