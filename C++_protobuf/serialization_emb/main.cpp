#include <iostream>
#include "Person.pb.h"
#include "Personcopy.pb.h"

class Test {
public:
    void test(){
        Person person;
        person.set_name("nothing");
        person.set_id(10);
        person.set_age(20);
        person.set_sex("man");
        person.mutable_addr()->set_house_id(10086);
        person.mutable_addr()->set_house_addr("hit");

        std::string output;
        person.SerializeToString(&output);

        Person person2;
        person2.ParseFromString(output);
        std::cout<<"the house id is: "<< person2.addr().house_id()<<std::endl;
        std::cout<<"the house addr is: "<< person2.addr().house_addr()<<std::endl;
    }
    //接下来是name 数组，在proto文件中需要先将name 加上repeated 关键字
    void test1(){
        Person2 person3;
        //需要注意的是name 数组为动态内存，即使用一个得先申请
        person3.add_name();
        person3.set_name(0, "nothing");
        //第一次需申请内存，第二次的时候已经有内存的，这时候添加自动会到后一位，所以可以直接添加
        person3.add_name("anything");
        person3.add_name("something");
        person3.set_id(10);
        person3.set_age(20);
        person3.set_sex("man");
        person3.mutable_addr()->set_house_id(10086);
        person3.mutable_addr()->set_house_addr("hit");

        std::string output;
        person3.SerializeToString(&output);

        Person person4;
        person4.ParseFromString(output);
        std::cout<<"the house id is: "<< person4.addr().house_id()<<std::endl;
        std::cout<<"the house addr is: "<< person4.addr().house_addr()<<std::endl;
        int namesize = person3.name_size();
        for(int i = 0; i < namesize; i++){
            std::cout<<person3.name(i) <<std::endl;
        }
    }
};

int main() {
    Test t;
    t.test1();
}