GRPC_ROOT = /Users/kaminoura/granola/cpp-playground/grpc-example-cpp/helloworld
CFLAGS = -Wall -I$(GRPC_ROOT)/include -I$(GRPC_ROOT)/third_party/protobuf/src -std=c++11
LDFLAGS = -L/usr/local/lib `pkg-config --libs protobuf grpc++ grpc`\
           -lgrpc++_reflection\
           -ldl

GRPC_CPP_PLUGIN = grpc_cpp_plugin
GRPC_CPP_PLUGIN_PATH ?= `which $(GRPC_CPP_PLUGIN)`

.SUFFIXES: .cc .o

all : client server

client : client.o hello.pb.o hello.grpc.pb.o
	g++ -o client client.o hello.pb.o hello.grpc.pb.o $(LDFLAGS)

server : server.o hello.pb.o hello.grpc.pb.o
	g++ -o server server.o hello.pb.o hello.grpc.pb.o $(LDFLAGS)

.cc.o :
	g++ -c $(CFLAGS) -I. $< -o $@

hello.pb.h : hello.proto
	protoc --cpp_out=. --grpc_out=. --plugin=protoc-gen-grpc=$(GRPC_CPP_PLUGIN_PATH) hello.proto

.PRECIOUS: %.grpc.pb.cc
%.grpc.pb.cc: %.proto
	protoc --grpc_out=. --plugin=protoc-gen-grpc=$(GRPC_CPP_PLUGIN_PATH) $<

clean :
	rm -f *.o server client
