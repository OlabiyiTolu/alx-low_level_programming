#!/bin/bash

# Get the current directory
current_dir=$(pwd)

# Get all the .c files in the current directory
c_files=$(find $current_dir -type f -name "*.c")

# Create the static library
ar -rcs liball.a $c_files

# Display a message
echo "Static library liball.a created successfully!"
