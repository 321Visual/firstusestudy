cc=g++
target=main
source=main.cpp

$(target):$(source)
	$(cc) --std=c++11 -o $(target) $(source)