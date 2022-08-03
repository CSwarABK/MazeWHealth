#include <iostream>
#include <Windows.h>
#include "Health.h"

Health::Health(int x, int y, ActorColor color)
	: PlacableActor(x, y, color)
{

}

void Health::Draw()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console, (int)m_color);
	std::cout << "H";
	SetConsoleTextAttribute(console, (int)ActorColor::Regular);
}
