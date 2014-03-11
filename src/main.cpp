#include "config.h"
#include <iostream>
#include <SFML/Window.hpp>

using namespace std;

void printHelp(char **argv)
{
   std::cout << argv[0] << " Version " << POY_DRAGONDROP_VERSION_MAJOR << "."
             << POY_DRAGONDROP_VERSION_MINOR << "." << POY_DRAGONDROP_VERSION_PATCH
             << std::endl;
}

int main(int argc, char **argv)
{
   if (argc > 1)
   {
      printHelp(argv);
      return 0;
   }

   sf::Window window(sf::VideoMode(600, 600), "SFML works!");

   while (window.isOpen())
   {
      sf::Event event;
      while (window.pollEvent(event))
      {
         if (event.type == sf::Event::Closed)
            window.close();
      }
      window.display();
   }

   return 0;
}
