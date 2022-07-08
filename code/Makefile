CPP = g++
LFLAGS = 
CFLAGS = -std=c++17

SOURCES = $(wildcard *.cpp)
OBJECTS = $(subst .cpp,.o,$(SOURCES))

main.ex: $(OBJECTS)
	$(CPP) $(LFLAGS) $(CFLAGS) -o $@ $(OBJECTS) 

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $<

.PHONY: clean

clean:
	rm -f main.ex $(OBJECTS) *.out *.err
