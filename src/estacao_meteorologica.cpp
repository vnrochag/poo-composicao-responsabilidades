#include "estacao_meteorologica.hpp"

EstacaoMeteorologica::EstacaoMeteorologica(const std::string& tag, double temperaturaInicial)
    : sensor_(tag, temperaturaInicial) {
}

bool EstacaoMeteorologica::registrarTemperatura(double temperatura) {
    (void)temperatura;
    // TODO checkpoint 02: atualizar sensor e avaliar alarme somente se aceito.
    return false;
}

double EstacaoMeteorologica::temperatura() const { return sensor_.valor(); }
bool EstacaoMeteorologica::alarmeLigado() const { return alarme_.estaLigado(); }
