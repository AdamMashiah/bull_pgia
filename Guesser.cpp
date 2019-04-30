#include "Guesser.hpp"
#include <string>
using std::string;
namespace bullpgia{

uint len;
string ans;

string Guesser::virtual guess(){
 return "";
}

void Guesser::virtual startNewGame(uint len){
 cout<<len<<endl;
}

void Guesser::virtual learn(string ans){
 cout<<ans<<endl;
}
}
