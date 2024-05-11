# 定义编译器和编译标志
CXX = g++
CXXFLAGS = -Wall

# 定义输出文件名
TARGET = main

# 定义源文件和对象文件
SRCS = main.cpp Person.pb.cc
OBJS = $(SRCS:.cpp=.o)

# 默认目标，通常是第一个目标
all: $(TARGET)

# 链接目标
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ -lprotobuf -I/usr/local/include -L/usr/local/lib

# 编译依赖
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清除编译生成的文件
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
