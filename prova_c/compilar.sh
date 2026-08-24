#!/bin/bash
# Compila e roda todos os exercícios de teste de mesa
# Uso: bash compilar.sh  (ou ./compilar.sh se tiver permissão)

cd "$(dirname "$0")"

for f in teste_mesa/ex*.c; do
    nome=$(basename "$f" .c)
    bin="teste_mesa/${nome}.exe"
    gcc -Wall "$f" -o "$bin" || { echo "ERRO ao compilar $f"; exit 1; }
    echo "=== $nome ==="
    "$bin"
    echo
done

rm -f teste_mesa/*.exe
