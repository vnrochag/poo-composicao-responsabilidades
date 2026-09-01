class SensorTemperatura:
    def __init__(self, tag: str, valor: float) -> None:
        self._tag = tag
        self._valor = valor

    def atualizar(self, novo_valor: float) -> bool:
        if not -50.0 <= novo_valor <= 80.0:
            return False
        self._valor = novo_valor
        return True

    @property
    def valor(self) -> float:
        return self._valor

    @property
    def tag(self) -> str:
        return self._tag
