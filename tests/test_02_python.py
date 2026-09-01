import unittest

from estacao_meteorologica import EstacaoMeteorologica


class TestEstacaoMeteorologica(unittest.TestCase):
    def test_colaboracao_e_rejeicao_sem_corromper_estado(self) -> None:
        estacao = EstacaoMeteorologica("TT-201", 42.0)
        self.assertEqual(estacao.temperatura, 42.0)
        self.assertFalse(estacao.alarme_ligado)

        self.assertTrue(estacao.registrar_temperatura(46.0))
        self.assertEqual(estacao.temperatura, 46.0)
        self.assertTrue(estacao.alarme_ligado)

        self.assertTrue(estacao.registrar_temperatura(42.0))
        self.assertTrue(estacao.alarme_ligado)

        self.assertFalse(estacao.registrar_temperatura(81.0))
        self.assertEqual(estacao.temperatura, 42.0)
        self.assertTrue(estacao.alarme_ligado)

        self.assertTrue(estacao.registrar_temperatura(39.0))
        self.assertFalse(estacao.alarme_ligado)


if __name__ == "__main__":
    unittest.main()
