#include <iostream>
#include "Application.h"
/*
	Violet is a basic custom Physics Engine designed for Vertex Engine 2. As Vertex Engine evolves, so will Violet.

	©Developed by Dylan Smith
*/

int main() {

	Application App;

	App.Start();
	while (App.GetAppState())
	{
		App.Update();
	}

	return 0;
}