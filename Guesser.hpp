#pragma once
#include <string>
using std::string;
namespace bullpgia{

class Guesser{
 protected:
 uint length;
 string ans;
 
 public:
 virtual string guess()=0;//When we add a pure virtual function to our class, we are effectively saying, “it is up to the derived classes to implement this function”.
 virtual void startNewGame(uint length){};
 virtual void learn(string ans){};

};
}
