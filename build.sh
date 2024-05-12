#!/bin/bash

# directory
DIRECTORY="build"

# if directory exists remove
if [ -d "$DIRECTORY" ]; then
    echo "removing $DIRECTORY dir"
    rm -r "$DIRECTORY"
fi

# create direcotry
echo "creating $DIRECTORY dir"
mkdir "$DIRECTORY"

# change directiory 
cd "$DIRECTORY"

# run cmake reciepy
cmake ../
#build and link project
make
