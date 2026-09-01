CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -Werror -pedantic -Iinclude
PYTHON := python3
BUILD_DIR := build
CPP_SOURCES := src/sensor_temperatura.cpp src/alarme_termico.cpp src/estacao_meteorologica.cpp

.PHONY: all build run test clean

all: build

build: $(BUILD_DIR)/estacao

$(BUILD_DIR)/estacao: src/main.cpp $(CPP_SOURCES)
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) src/main.cpp $(CPP_SOURCES) -o $@

run: build
	./$(BUILD_DIR)/estacao
	PYTHONPATH=src $(PYTHON) src/main.py

test: build
	@if [ -z "$(ETAPA)" ]; then echo "Informe: make test ETAPA=01 ou ETAPA=02"; exit 2; fi
	@set -e; case "$(ETAPA)" in 01) etapas="01" ;; 02) etapas="01 02" ;; *) echo "Etapa desconhecida: $(ETAPA)"; exit 2 ;; esac; \
	for numero in $$etapas; do \
		$(CXX) $(CXXFLAGS) tests/test_$${numero}_cpp.cpp $(CPP_SOURCES) -o $(BUILD_DIR)/test_$${numero}_cpp; \
		./$(BUILD_DIR)/test_$${numero}_cpp; \
		PYTHONPATH=src $(PYTHON) -m unittest tests/test_$${numero}_python.py; \
	done; \
	if [ "$(ETAPA)" = "02" ]; then bash tests/test_saida.sh; fi

clean:
	rm -rf $(BUILD_DIR)
	find . -type d -name __pycache__ -prune -exec rm -rf {} +
