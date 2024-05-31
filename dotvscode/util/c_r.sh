#!/bin/bash

mkdir -p .vscode/util/stored_builds
echo -e "\033[31m[c_r] COMPILING...\033[0m"
echo "==================================="
g++ -o ".vscode/util/stored_builds/${1##*/}" "$1"
echo -e "\033[33m[c_r] RUNNING...\033[0m"
echo "==================================="
echo -e "\033[32m[c_r] OUTPUT:\033[0m"
echo
echo
".vscode/util/stored_builds/${1##*/}"
echo
echo
echo "==================================="
exit
