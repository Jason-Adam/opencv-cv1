#!/usr/bin/env bash

# Set executable name (same as working dir)
EXECUTABLE_NAME="$(pwd | awk -F/ '{print $NF}')"
# Create build files
cmake -H. -Bbuild
# Build the executable
cmake --build build -j4
# Run Executable
./build/"$EXECUTABLE_NAME"
