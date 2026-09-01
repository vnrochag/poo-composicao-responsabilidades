#ifndef ESTACAO_METEOROLOGICA_HPP
#define ESTACAO_METEOROLOGICA_HPP

#include "alarme_termico.hpp"
#include "sensor_temperatura.hpp"

class EstacaoMeteorologica {
public:
    EstacaoMeteorologica(const std::string& tag, double temperaturaInicial);
    bool registrarTemperatura(double temperatura);
    double temperatura() const;
    bool alarmeLigado() const;

private:
    SensorTemperatura sensor_;
    AlarmeTermico alarme_;
};

#endif
