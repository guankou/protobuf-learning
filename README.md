# protobuf-learning

generate corresponding .cc and .h from .proto files 
protoc ./Person.proto --cpp_out=./
or protoc -I./ Person.proto --cpp_out=./