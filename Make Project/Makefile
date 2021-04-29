#target: dependecies
#	actions

# $@ is replaced by the name of target
# $< is replaced by the name of first pre-requisite
# $^ is replaced by the name of all pre-requisite


compiler= g++
flags= -c -Wall -Werror
target = obj
objects = sample.o functions.o


default: $(target)

$(target): $(objects)
	$(compiler) $^ -o $@

sample.o: sample.cpp functions.h
	$(compiler) $(flags) $<

functions.o: functions.cpp functions.h
	$(compiler) $(flags) $<

clean: 
	rm -f $(objects) $(target)