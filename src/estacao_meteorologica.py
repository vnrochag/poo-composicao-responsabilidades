from alarme_termico import AlarmeTermico
from sensor_temperatura import SensorTemperatura


class EstacaoMeteorologica:
    def __init__(self, tag: str, temperatura_inicial: float) -> None:
        self._sensor = SensorTemperatura(tag, temperatura_inicial)
        self._alarme = AlarmeTermico()

    def registrar_temperatura(self, temperatura: float) -> bool:
        _ = temperatura
        # TODO checkpoint 02: atualizar sensor e avaliar alarme somente se aceito.
        return False

    @property
    def temperatura(self) -> float:
        return self._sensor.valor

    @property
    def alarme_ligado(self) -> bool:
        return self._alarme.ligado
