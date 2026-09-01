# Guia docente — capítulo 05

## Preparação

1. Publique este diretório como `https://github.com/rafaelrezo/poo-composicao-responsabilidades`, separado do capítulo 04.
2. Oriente cada estudante a fazer fork; comunique prazo e receba o link da PR pelo canal institucional adotado.
3. Confirme na `main` apenas `make build` e `make run`; os testes funcionais devem falhar antes da implementação.
4. Não publique a solução de referência nem branches resolvidas.
5. A PR deve ir da branch para a `main` do próprio fork, nunca para o repositório-base.

## Contrato esperado

- Checkpoint 01: histerese estrita, ligando acima de `45` e desligando abaixo de `40`.
- Checkpoint 02: composição por valor/referência interna, atualização validada antes da avaliação e UML coerente.

Execute a solução de referência fora do starter com:

```bash
make test ETAPA=02
```

## Revisão além da automação

Inspecione se o estudante não duplicou a leitura na estação, não expôs escrita direta, não alterou testes e representou o losango no lado do todo. Solicite que explique oralmente por que uma leitura inválida não pode mudar o alarme.

## Limite dos testes visíveis

Os testes orientam o contrato e ficam visíveis no fork. Avalie também diff, histórico, justificativa, UML e `AI_LOG.md`.
