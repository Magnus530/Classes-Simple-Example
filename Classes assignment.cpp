#include <iostream>
#include <string>

class Player
{
public:
    std::string name = "name", newName, item;
    int health = 6, hitPower = 4, index = 0;
    std::string inventory[5];

public:
    void gameSolution()
    {
        health = takeDamage(health, hitPower);
        newName = setName(name);

        printInfo();
    }

    void printInfo()
    {
        std::cout << newName << " " << health << " " << hitPower << " " << std::endl;
        invFill(inventory[0], index);
    }

    int takeDamage(int health, int damage)
    {
        health -= damage;
        return(health);
    }

    void invFill(std::string item, char itemIndex)
    {
        itemIndex = '1';


            item += itemIndex;
            item += " Wings\n";
            itemIndex++;
            item += itemIndex;
            item += " Excellence\n";
            itemIndex++;
            item += itemIndex;
            item += " Joyjuice\n";
            itemIndex++;
            item += itemIndex;
            item += " Mana\n";
            itemIndex++;
            item += itemIndex;
            item += " Ham \n";

            std::cout << item;
    }

    std::string setName(std::string name)
    {
        name = "Mort";
        return(name);
    }
};

class Magic
{
public:
    std::string thought;
    int thoughtVolume = 0, amountOfThought = 15;
public:
    void magic()
    {
        thought = setThought(thought);
        thoughtVolume = extractThought(amountOfThought);

        printMagic();
    }

    void printMagic()
    {
        std::cout << "\nMy thought is: " << thought << ". My thought has a power of: " << thoughtVolume << " after extraction.\n";
    }

    std::string setThought(std::string think)
    {
        think = "Forever";
        return(think);
    }

    int extractThought(int extractedAmount)
    {
        extractedAmount -= 7;
        return(extractedAmount);
    }
};


int main()
{
    Player p;
    Magic m;

    p.gameSolution();
    m.magic();
}

