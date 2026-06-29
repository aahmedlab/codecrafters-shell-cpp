#include <iostream>
#include <string>
using namespace std;

int main() {
  // Flush after every std::cout / std:cerr
  cout << std::unitbuf;
  cerr << std::unitbuf;

  cout << "$ ";
  while (true)
  {
    string command;
    cin >> command;
    if (command == "exit") break;
    else
    {
      cout << command << ": command not found\n";
      cout << "$ ";
    }
  }
}
