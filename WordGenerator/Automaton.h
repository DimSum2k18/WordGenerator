
#include <iostream>
#include <string>
#include <map>
#include "Node.h"

class Automaton{
private:
    int memoryLength; //memory of the Automaton 
    std::map<int,Node> mapNode;//the nodes
public:
    Automaton(std::string path, int memoryLength);
    void learnFromWord(std::string word); //on généralisera aux mots plus tard
    void add_map(int idNode, Node node);
    void display();
};
