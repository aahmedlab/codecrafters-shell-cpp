#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  // Flush after every std::cout / std:cerr
  cout << std::unitbuf;
  cerr << std::unitbuf;

  string line;
  string command;
  string data;
  while (true)
  {
    cout << "$ ";
    // Safely reads the entire line at once
    if (!getline(cin, line)) {
      break;
    }

    if (line.empty()) {
      continue;
    }
    istringstream iss(line);
    iss >> command;
    if (command == "exit") break;
    if (command == "echo")
    {
      getline(iss, data);
      if (!data.empty() && data[0] == ' ')
      {
        data = data.substr(1);
      }
      cout << data << "\n";
      continue;
    }

    cout << line << ": command not found\n";
  }
  return 0;
}
