#include <iostream>
#include <string>

struct physical_constants{
   physical_constants(std::string name, float s, float w, float h)
   {
     this->name = name;
     Speed = s;
     weight = w;
     height = h;
     status = true; 
    }
   std::string name;
   float Speed;
   float weight;
   float height;
   bool status;
    };
    void collide(physical_constants *car)
    {
        std::cout << "getting collide " << (*car).name << std::endl;
     (*car).status = false;


    }

int main()
{
    physical_constants garage[3] = {
    physical_constants("lamborghini", 30, 20, 30),
    physical_constants("mustang", 40, 50, 60),
    physical_constants("ford", 70, 80, 90)
    };
    physical_constants *imaginary_quantity = nullptr;

    std::cout << "before calculate ptr" << std::endl;
    //ptr to lamborghini
    imaginary_quantity = &garage[0];
    garage[0].weight = 100;
    std::cout << "lamborghini weight: " << (*imaginary_quantity).weight << std::endl;
    //ptr to mustang
    imaginary_quantity = &garage[1];
    garage[1].Speed = 200;
    std::cout << "mustang Speed: " << (*imaginary_quantity).Speed << std::endl;
    //ptr to forg
    imaginary_quantity = &garage[2];
    garage[2].height = 300;
    std::cout << "forg height: " << (*imaginary_quantity).height << std::endl;
    //calculate ptr
    std::cout << "after calculate ptr" << std::endl;
    imaginary_quantity = &garage[0];
    imaginary_quantity = imaginary_quantity + 1;
    std::cout << "lamborghini weight: " << (*imaginary_quantity).weight << std::endl;
    imaginary_quantity = &garage[1];
    imaginary_quantity = imaginary_quantity - 1;
    std::cout << "mustang Speed: " << (*imaginary_quantity).Speed << std::endl;
    imaginary_quantity = &garage[2];
    imaginary_quantity = imaginary_quantity - 1;
    std::cout << "forg height: " << (*imaginary_quantity).height << std::endl;
    //take drive
    for (imaginary_quantity = &garage[0]; imaginary_quantity < garage + 3; imaginary_quantity++)
    {
        std::cout << "take drive " << (*imaginary_quantity).name << std::endl; 
    }
    //function ptr

    std::cout << "status checking..." << garage[0].name << ":" << (garage[0].status ? "intact" : "damaged") << std::endl;
    
    collide(&garage[0]);

    std::cout << "after take drive..." << garage[0].name << ":" << (garage[0].status ? "intact" : "damaged") << std::endl;
    //






  







     

    
     











    return 0;

}