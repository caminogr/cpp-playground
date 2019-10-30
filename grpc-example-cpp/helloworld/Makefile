GRPC_ROOT = /Users/kaminoura/granola/cpp-playground/grpc-example-cpp/helloworld
CFLAGS = -Wall -I$(GRPC_ROOT)/include -I$(GRPC_ROOT)/third_party/protobuf/src -std=c++11
LDFLAGS = -L$(GRPC_ROOT)/libs/opt -lgrpc++ -lgrpc -lgpr -L$(GRPC_ROOT)/libs/opt/protobuf -lprotobuf

.SUFFIXES: .cc .o

all : server
all : client server

client : client.o greet.pb.o
	g++ -o client client.o greet.pb.o $(LDFLAGS)

server : server.o greet.pb.o
	g++ -o server server.o greet.pb.o $(LDFLAGS)

.cc.o :
	g++ -c $(CFLAGS) -I. $< -o $@

greet.pb.h : greet.proto
	$(GRPC_ROOT)/bins/opt/protobuf/protoc --cpp_out=. --grpc_out=. --plugin=protoc-gen-grpc=$(GRPC_ROOT)/bins/opt/grpc_cpp_plugin greet.proto

clean :
	rm -f *.o server client
