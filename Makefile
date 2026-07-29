CXX := g++
CXXFLAGS := -std=c++98 -Isrc -Isrc/app -Isrc/config -Isrc/handlers -Isrc/http -Isrc/network -Isrc/routing -Isrc/services -Isrc/utils -pthread
SRCS := $(shell find src -name '*.cpp' -print)
TARGET := webserv

all: $(TARGET)

$(TARGET):
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)