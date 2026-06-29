#include <iostream>
#include <string>
using namespace std;

int main() {
  // Flush after every std::cout / std:cerr
  cout << std::unitbuf;
  cerr << std::unitbuf;
  string command;
  while (true)
  {
    cout << "$ ";
    // Safely reads the entire line at once
    if (!getline(cin, command)) {
      break;
    }

    if (command.empty()) {
      continue;
    }

    if (command == "exit") break;

    cout << command << ": command not found\n";
  }
  return 0;
}
