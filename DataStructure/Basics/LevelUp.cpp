#include <iostream>

struct Character
    {
        std::string name;
        int hp;
        int power;
    };

void levelUp(Character* p_char);

int main()
{
    Character hero = {"용사", 100, 20};

    std::cout << "[레벨업 전]" << std::endl;
    std::cout << "이름: "<< hero.name << std::endl;
    std::cout << "HP: "<< hero.hp << std::endl;
    std::cout << "Power: "<< hero.power << std::endl;
    
    levelUp(&hero);

    std::cout << "[레벨업 후]" << std::endl;
    std::cout << "이름: "<< hero.name << std::endl;
    std::cout << "HP: "<< hero.hp << std::endl;
    std::cout << "Power: "<< hero.power << std::endl;
     
    
}

void levelUp(Character* p_char)
{
    p_char->hp += 50;
    p_char->power += 10;
    std::cout << "--------------------" << std::endl;
    std::cout << "레벨업!" << std::endl;
    std::cout << "--------------------" << std::endl;

    
};

