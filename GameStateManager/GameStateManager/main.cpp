
#include "Application.h"

int main(int argc, char* argv[])
{
	{
		Application app(800, 540);
		app.Run();
	}

	return 0;
}


//TODO:
// create play state
// create pause state
// create highScore state

// when we press 'space' on the 'menu' state change to play state
//when we press p on the play state - push state pause
// when press p on pause state pop the pause from stack

// challange see if you can update the GAME state manager so that only the top stop state is updated
//all states should draw