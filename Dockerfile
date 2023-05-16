# Dockerfile for a Basic Linux with VIM and GCC
#Defenetely only useful thingies
FROM ubuntu
RUN apt-get update && apt-get install -y gcc && apt-get install -y vim && mkdir Inhere && cd Inhere && touch a.c && apt-get install -y tree && apt-get install -y sl