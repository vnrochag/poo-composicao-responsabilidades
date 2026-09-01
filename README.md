# Compondo uma estação meteorológica

Repositório-base da atividade do capítulo 05. O starter já contém um `SensorTemperatura` funcional e esqueletos compiláveis para `AlarmeTermico` e `EstacaoMeteorologica`.

Não continue a branch nem copie arquivos do capítulo 04. Faça fork de `rafaelrezo/poo-composicao-responsabilidades`, clone o seu fork e trabalhe na branch `pratica/02-compor-estacao`.

Depois do clone, `git remote -v` deve mostrar somente `origin` apontando para o seu fork. Não configure `upstream` e não envie PR ao repositório-base.

## Baseline

Requisitos: `g++` com C++17, Python 3 e GNU Make.

```bash
make build
make run
```

Saída inicial:

```text
TT-201: 42 C | alarme: desligado
Leitura aceita: false
TT-201: 42 C | alarme: desligado
TT-201: 42 C | alarme: desligado
Leitura aceita: False
TT-201: 42 C | alarme: desligado
```

Os `TODO` estão nos esqueletos. A baseline compila, mas os testes funcionais falham intencionalmente.

## O que pode ser alterado

| Artefato | Situação | Alterar? |
|---|---|---|
| `sensor_temperatura.*` | conhecimento prévio completo | não |
| `alarme_termico.*` | comportamento incompleto | sim |
| `estacao_meteorologica.*` | colaboração incompleta | sim |
| `docs/diagrama.md` | UML parcial | sim |
| `tests/`, `Makefile`, `.github/` | contrato da atividade | não |

## Checkpoints

### 01 — Alarme térmico

O alarme inicia desligado, liga acima de `45 °C`, desliga abaixo de `40 °C` e preserva o estado dentro dessa faixa.

```bash
make test ETAPA=01
```

### 02 — Estação composta e UML

A estação possui sensor e alarme, aceita apenas leituras entre `-50` e `80 °C` e só reavalia o alarme depois de uma leitura aceita. Complete também o diagrama com composição, multiplicidades e interfaces coerentes.

```bash
make test ETAPA=02
```

O segundo comando repete o primeiro e compara a saída C++/Python.

## Fluxo de entrega

```bash
git switch -c pratica/02-compor-estacao
make test ETAPA=01
git add include src
git commit -m "implementa transicoes do alarme termico"
make test ETAPA=02
git add include src docs AI_LOG.md
git commit -m "compoe estacao meteorologica e alarme"
git push -u origin pratica/02-compor-estacao
```

Abra PR para a `main` do próprio fork. Inclua resultado local, link da CI, UML final, justificativa da composição e rastreabilidade de IA.

Consulte também `CONTRIBUTING.md`. Orientações operacionais e solução de referência do docente não fazem parte do material entregue ao estudante além do que está documentado neste starter.

## Limite da automação

Os testes verificam comportamento público. O docente também inspeciona o diff e o diagrama e pode solicitar defesa oral curta.
