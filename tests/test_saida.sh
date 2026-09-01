#!/usr/bin/env bash
set -euo pipefail

esperado_cpp=$'TT-201: 42 C | alarme: desligado\nLeitura aceita: true\nTT-201: 46 C | alarme: ligado'
esperado_python=$'TT-201: 42 C | alarme: desligado\nLeitura aceita: True\nTT-201: 46 C | alarme: ligado'

obtido_cpp=$(./build/estacao)
obtido_python=$(PYTHONPATH=src python3 src/main.py)

if [[ "${obtido_cpp}" != "${esperado_cpp}" ]]; then
    echo "FALHA saida C++: compare make run com o contrato do README."
    diff -u <(printf '%s\n' "${esperado_cpp}") <(printf '%s\n' "${obtido_cpp}") || true
    exit 1
fi

if [[ "${obtido_python}" != "${esperado_python}" ]]; then
    echo "FALHA saida Python: compare make run com o contrato do README."
    diff -u <(printf '%s\n' "${esperado_python}") <(printf '%s\n' "${obtido_python}") || true
    exit 1
fi

echo "OK saida: C++ e Python produziram o contrato esperado"
