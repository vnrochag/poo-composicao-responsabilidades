#ifndef SENSOR_TEMPERATURA_HPP
#define SENSOR_TEMPERATURA_HPP

#include <string>

class SensorTemperatura {
public:
    SensorTemperatura(std::string tag, double valorInicial);
    bool atualizar(double novoValor);
    double valor() const;
    const std::string& tag() const;

private:
    std::string tag_;
    double valor_;
};

#endif
