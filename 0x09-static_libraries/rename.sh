#!/bin/bash

# Get the current directory
current_dir=$(pwd)

# Find all files that end with .c
files=$(find $current_dir -type f -name "*.o")

# For each file, replace .c with .o
for file in $files; do
  new_file=${file:0:${#file}-2}.c
  mv $file $new_file
done
