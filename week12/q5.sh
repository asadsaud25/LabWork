#!/bin/bash
if [ -z "$1" ]; then
    echo "Usage: $0 <directory_path>"
    exit 1
fi
if [ ! -d "$1" ]; then
    echo "$1 is not a valid directory."
    exit 1
fi
for dir in "$1"/*/; do
    if [ -d "$dir" ]; then
        count=$(ls -1q "$dir" | wc -l)
        echo "Directory: $dir"
        echo "Number of entries: $count"
    fi
done