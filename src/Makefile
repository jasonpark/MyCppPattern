CXX=g++
RM=rm -f
INC=
CPPFLAGS= -O2 -g -D_REENTRANT -D_DEBUG -Wall
CPPFLAGS= -std=c++11
LDFLAGS= -g
LDLIBS=

SOURCES=$(wildcard *.cpp)
OBJS:=$(SOURCES:.cpp=.o) 
DEPS=$(SOURCES:.cpp=.d)

TARGET=coffe
all:$(TARGET)
$(TARGET):$(OBJS)
	$(CXX) -o $(LDFAGS) $@ $(OBJS) $(LDLIBS)

clean:
	$(RM) $(OBJS) $(DEPS) $(TARGET)

-include $(DEPS)
