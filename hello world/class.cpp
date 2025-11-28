#include <iostream>
#include <string>

class warrior
{
public:
        warrior()
        {

        }
        warrior( const std::string &name, int age, bool T = true)
        : resistant(T)
        {
        
              
        }
        ~warrior()
        {
            std::cout << "killed" << std::endl;
        }
        void attack()
        {
            
        }
        std::string attack(std::string tool)
        {

            return " ";
        }
        void reactive_resistant()
        {
            if (age < 29)
    {
            bool resistant = true;
     }
        }
        void active_passive()
        {
            
            std::cout << name << " " << (resistant ? "T" : "F")<< std::endl;
        }
         
//private: 
protected:
        std::string name;
        int age;
        bool resistant;
};
class berserker : public warrior
{
public:
berserker( const std::string &name, int age, bool T = true)
       : warrior(name, age, T)
       {}
       std::string attack(std::string tool)
       {

        return "dealing 10dame";
       }
       void rage()
       {
            std::cout << name <<
            " " << "in rage " << std::endl;
       }
};

class knight : public warrior
{
public:
knight( const std::string &name, int age, bool T = true)
        : warrior(name, age, T)
        {}
        void sword_master()
        {

        }

        
};
class King_slayer : public berserker, public knight
{

};
class madness: public berserker
{

};



class archer
{
public:

private:

};


int main(){

warrior *player_2 = new warrior( "player_2", 30, false);
player_2->attack("sword");
//delete player_2;
player_2->reactive_resistant();
player_2->active_passive();


archer *player_3 = new archer;





    return  0;
}