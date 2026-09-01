#include "sensor_temperatura.hpp"

#include <utility>

SensorTemperatura::SensorTemperatura(std::string tag, double valorInicial)
    : tag_(std::move(tag)), valor_(valorInicial) {
}

bool SensorTemperatura::atualizar(double novoValor) {
    if (novoValor < -50.0 || novoValor > 80.0) return false;
    valor_ = novoValor;
    return true;
}

double SensorTemperatura::valor() const { return valor_; }
const std::string& SensorTemperatura::tag() const { return tag_; }
