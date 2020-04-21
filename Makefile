CC = g++
CFLAGS = -Wall -std=c++17 

.PHONY: all
all: p27-lambda.out p28-closuretype.out p31-transform.out p32-reduce.out p33-filter.out p35-functionalstyle.out p37-parallel.out p37-nonparallel.out p43-overload.out p44-stdfunc.out p47-byreference.out p48-capture.out

p37-parallel.out: p37-parallel.cpp
	$(CC) $< $(CFLAGS) -ltbb -o $@

%.out: %.cpp
	$(CC) $< $(CFLAGS) -o $@

