#include "SDL.h"
#undef main
#include <iostream>
#include "Pawn.h"



int main(int argc, char* argv[]) {

	Pawn p (Position(1, 2), ALLIANCE::BLACK);

	p.Move();

	std::cout << p.GatRank() << ", " << p.GatFile() << std::endl;


}