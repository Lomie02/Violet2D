#pragma once
#include <iostream>

class VioletTestPrint
{
public:
	VioletTestPrint() {};

	/// <summary>
	/// Print message for test purposes.
	/// </summary>
	void PrintMessageTest();
	/// <summary>
	/// Print custom messages from Violet.
	/// </summary>
	/// <param name="_message"></param>
	void PrintCustomMessage(std::string _message);

private:

};

