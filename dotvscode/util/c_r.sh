#!/bin/bash

mkdir -p .vscode/util/stored_builds
echo -e     "\033[33m ================== COMPILING... ================== \033[0m"
g++ -o ".vscode/util/stored_builds/${1##*/}" "$1"
if [ $? -eq 0 ]; then
    echo -e "\033[32m ================== COMPILED! ================== \033[0m"
    clear
else
    echo -e "\033[31m================ COMPILATION FAILED. ===============\033[0m"
    exit 1
fi
echo -e "\033[32m================== OUTPUT ================== \033[0m"
echo
echo
".vscode/util/stored_builds/${1##*/}"
echo
echo
echo -e "\033[32m=================== END =================== \033[0m"
exit
