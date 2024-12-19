#include "pch.h"
#include "VioletTestPrint.h"

void VioletTestPrint::PrintMessageTest()
{
	std::cout << "Hello from Violet!" << std::endl;
}

void VioletTestPrint::PrintCustomMessage(std::string _message)
{
	std::cout << _message << std::endl;
}
