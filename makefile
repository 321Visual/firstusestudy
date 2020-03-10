cc=g++
target=exemain
source=main.cpp

$(target):$(source)
	$(cc) --std=c++11 -o $(target) $(source)