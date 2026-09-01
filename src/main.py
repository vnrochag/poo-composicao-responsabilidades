from estacao_meteorologica import EstacaoMeteorologica


estacao = EstacaoMeteorologica("TT-201", 42.0)
estado = "ligado" if estacao.alarme_ligado else "desligado"
print(f"TT-201: {estacao.temperatura:g} C | alarme: {estado}")
aceita = estacao.registrar_temperatura(46.0)
print(f"Leitura aceita: {aceita}")
estado = "ligado" if estacao.alarme_ligado else "desligado"
print(f"TT-201: {estacao.temperatura:g} C | alarme: {estado}")
