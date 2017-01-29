#include "display.h"
#include <iostream>

Display::Display(int width, int height, const std::string& title)
{
  std::cout << "Constructor!" << std::endl;
  colorValue = 255;
}

Display::~Display()
{
  std::cout << "Destructor!"  << std::endl;
}
void Display::isClosed()
{
}

int Display::getColorValue()
{
  return colorValue;
}

void Display::Update()
{
}
