CXX = g++
RM = rm -f
CXXFLAGS = -Wall -Wno-reorder -O3

SRCS = main.cpp dispositivo.cpp celular.cpp notebook.cpp
OBJS = $(subst .cpp,.o,$(SRCS))

TARGET = programa

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

dispositivo.o: dispositivo.cpp dispositivo.hpp

celular.o: celular.cpp celular.hpp
	$(CXX) $(CXXFLAGS) -c celular.cpp

notebook.o: notebook.cpp notebook.hpp
	$(CXX) $(CXXFLAGS) -c notebook.cpp notebook.hpp
clean:
	$(RM) $(OBJS)

distclean:
	$(RM) $(TARGET)
