CC = g++
CCFLAGS = -Wall -std=c++11 -Iinclude
TARGET = Programa

SRCDIR = src
INCDIR = include
OBJDIR = obj

SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SOURCES))
HEADERS = $(wildcard $(INCDIR)/*.hpp)



all: $(TARGET)

$(TARGET): $(OBJECTS) 
	$(CC) $(CCFLAGS) $(OBJECTS) -o $(TARGET)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(HEADERS) | $(OBJDIR)
	$(CC) $(CCFLAGS) -c $< -o $@


clean:
	-@if exist $(TARGET) del $(TARGET)
	-@if exist $(OBJDIR) (for /R %%i in (*.o) do del %%i)
	-@if exist $(BUILDDIR) (for /R %%i in (*.exe) do del %%i)
.PHONY: clean
