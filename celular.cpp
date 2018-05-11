#include "celular.hpp"

Celular::Celular() : _sistema_operacional(""),
		     _tam_tela_polegada(0),
		     _resolucao_camera_m_pixel(0),
		     _mem_interna_gb(0),
		     _mem_ram_gb(0),
		     _processador(""),
         Dispositivo()
{}

Celular::Celular(std::string sistema_operacional,
		 double tam_tela_polegada,
		 double resolucao_camera_m_pixel,
		 uint32_t mem_interna_gb,
		 uint32_t mem_ram_gb,
		 std::string processador,
		 std::string marca,
		 std::string modelo,
		 int referencia) :
		 _sistema_operacional(sistema_operacional),
		 _tam_tela_polegada(tam_tela_polegada),
		 _resolucao_camera_m_pixel(resolucao_camera_m_pixel),
		 _mem_interna_gb(mem_ram_gb),
		 _mem_ram_gb(mem_ram_gb),
		 _processador(processador),
	 Dispositivo(marca, modelo, referencia)
{}

std::string Celular::get_sistema_operacional()
{
    return _sistema_operacional;
}

double Celular::get_tam_tela_polegada()
{
    return _tam_tela_polegada;
}

double Celular::get_resolucao_camera_m_pixel()
{
    return _resolucao_camera_m_pixel;
}

uint32_t Celular::get_mem_interna_gb()
{
    return _mem_interna_gb;
}

uint32_t Celular::get_mem_ram_gb()
{
    return _mem_ram_gb;
}

std::string Celular::get_processador()
{
    return _processador;
}

void Celular::set_sistema_operacional(std::string sistema_operacional){
    _sistema_operacional = sistema_operacional;
}

void Celular::set_tam_tela_polegada(double tam_tela_polegada)
{
    _tam_tela_polegada = tam_tela_polegada;
}

void Celular::set_resolucao_camera_m_pixel(double resolucao_camera_m_pixel)
{
    _resolucao_camera_m_pixel = resolucao_camera_m_pixel;
}

void Celular::set_mem_interna_gb(uint32_t mem_interna_gb)
{
    _mem_interna_gb = mem_interna_gb;
}

void Celular::set_mem_ram_gb(uint32_t mem_ram_gb)
{
    _mem_ram_gb = mem_ram_gb;
}

void Celular::set_processador(std::string processador)
{
    _processador = processador;
}

Celular::~Celular()
{
}
