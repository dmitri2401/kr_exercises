#!/bin/bash
 
# Typical bash header garbage. By default, bash will not
# exit on errors. This is bad. This tells bash to exit
# if any command fails.
set -euo pipefail
 
# Make sure we are in the same directory as the script,
# regardless of where it is called from.
cd "$(dirname "$0")"
 
# Remove the build directory and recreate it.
rm -rf build/
mkdir build
 
# Build the project.
gcc -o build/main.out main.c
 
# Run the binary.
./build/main.out