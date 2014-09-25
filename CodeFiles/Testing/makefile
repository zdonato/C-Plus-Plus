CXX       = g++
OBJS      = display_fib.o
CXXFLAGS  = -g
TARGET    = display_fib

all: $(TARGET)
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)
clean:
	rm -f $(OBJS) $(TARGET)