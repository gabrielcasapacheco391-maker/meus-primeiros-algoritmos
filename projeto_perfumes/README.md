# 🧪 Perfume Class - Praticando OO em C++

Este projeto foi desenvolvido para aplicar na prática os conceitos fundamentais de **Programação Orientada a Objetos (POO)** utilizando a linguagem C++. 

O programa simula um sistema de catálogo de fragrâncias, validando regras de negócio com base na origem do produto.

## 🚀 Conceitos Aplicados
- **Modularização:** Separação correta do código em arquivos de cabeçalho (`.h`) e arquivos de implementação (`.cpp`).
- **Encapsulamento:** Atributos protegidos através do modificador `private` para garantir a segurança dos dados da classe.
- **Formatação de Fluxo:** Utilização das bibliotecas `<iomanip>` e operadores como `std::boolalpha` e `std::setprecision` para exibir saídas limpas e profissionais no terminal.

## 🛍️ Perfumes Cadastrados no Teste
O método principal (`main.cpp`) utiliza exemplos do mercado real de perfumaria contemporânea:
1. **Natura Homem Identidad:** Representando com propriedade a perfumaria nacional.
2. **Azzure Oud (French Avenue):** Uma referência marcante e atual da perfumaria árabe e de nicho para validar o comportamento do produto importado.

## 🛠️ Como Compilar e Executar

Certifique-se de ter um compilador C++ instalado (como o `g++`). No terminal, dentro desta pasta, execute o comando abaixo para compilar os arquivos juntos:

```bash
g++ main.cpp Perfume.cpp -o perfume_app
./perfume_app
```
