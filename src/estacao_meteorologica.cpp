#include "estacao_meteorologica.hpp"

EstacaoMeteorologica::EstacaoMeteorologica(const std::string& tag, double temperaturaInicial)

    : sensor_(tag, temperaturaInicial) {

}

bool EstacaoMeteorologica::registrarTemperatura(double temperatura) {

    if (!sensor_.atualizar(temperatura)) {
        return false;
    }

    alarme_.avaliar(temperatura);

    return true;
}

double EstacaoMeteorologica::temperatura() const { return sensor_.valor(); }

bool EstacaoMeteorologica::alarmeLigado() const { return alarme_.estaLigado(); }