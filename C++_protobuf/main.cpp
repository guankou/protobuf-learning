#include <iostream>
#include "Person.pb.h"

using namespace std;

class Test {
public:
    Test(){

    }
    ~Test() {
    }
    void test() {
        //xuliehua
        Person person;
        person.set_name("nothing");
        person.set_id(10);
        person.set_age(20);
        person.set_sex("man");

        //
        std::string output;
        person.SerializeToString(&output);

        //
        Person person2;
        person2.ParseFromString(output);
        std::cout<<person2.name() << " , " << person2.id() << " , " 
        << person2.age() << " , " << person.sex() << std::endl;
    }
};

int main() {
    // std::cout << "Hello, World!" << std::endl;
    // return 0;
    Test t;
    t.test();
}