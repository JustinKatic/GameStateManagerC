#pragma once

//predeclare classes
//_____________________________
class GameStateManager;


class Application
{
public:

	Application(int windowWidth, int windowHeight);
	~Application();

	void Run();

	void Update(float deltaTime);
	void Draw();

	GameStateManager * GetGameStateManager() 
	{
		return m_gameStateManager;
	}

private:
	int m_windowWidth;
	int m_windowHeight;

	GameStateManager* m_gameStateManager = nullptr;

};