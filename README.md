
##   Generating libraries
    g++ -c tools.cpp 
    ar rcs libtools.a tools.o 
    
g++ -c main.cpp
g++ main.o -L . -ltools -o main
./main