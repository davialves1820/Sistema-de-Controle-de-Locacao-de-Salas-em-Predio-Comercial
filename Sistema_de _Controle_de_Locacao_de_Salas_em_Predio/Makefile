# Variáveis do compilador e flags de compilação
CXX = g++
CXXFLAGS = -Wall -Wextra -g -Iinclude

# Diretórios e arquivos
SRC_DIR = src
OBJ_DIR = obj
BUILD_DIR = build
SOURCES = $(SRC_DIR)/main.cpp $(SRC_DIR)/Enterprise.cpp $(SRC_DIR)/Room.cpp $(SRC_DIR)/PrivateRoom.cpp $(SRC_DIR)/SharedRoom.cpp $(SRC_DIR)/CommercialBuilding.cpp
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SOURCES))
EXECUTABLE = $(BUILD_DIR)/my_program

# Regra principal (target): compila o programa
all: $(EXECUTABLE)

# Regra para criar o executável
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regra para compilar arquivos .cpp em arquivos .o, criando o diretório obj se necessário
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Criação do diretório obj caso não exista
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Limpeza dos arquivos gerados
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)