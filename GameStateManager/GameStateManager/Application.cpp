#include "Application.h"
#include "raylib.h"
#include "IGameState.h"
#include "SplashState.h"
#include "MenuState.h"
#include "GameStateManager.h"

Application::Application(int windowWidth, int windowHeight) :
	m_windowWidth(windowWidth), m_windowHeight(windowHeight)
{

}
Application::~Application()
{

}



//Game loop
void Application::Run()
{
	InitWindow(m_windowWidth, m_windowHeight, "AIE Game State Manager");

	m_gameStateManager = new GameStateManager();

	m_gameStateManager->SetState("Splash", new SplashState(this)); //load()
	m_gameStateManager->SetState("Menu", new MenuState(this));  //load()


	m_gameStateManager->PushState("Splash");



	while (!WindowShouldClose())
	{
		float dt = GetFrameTime();
		Update(dt);
		Draw();
	}

	delete m_gameStateManager;
	CloseWindow();
}

//use to update functionality every frame
void Application::Update(float deltaTime)
{
	m_gameStateManager->Update(deltaTime);
}
//use to draw to screen every frame
void Application::Draw()
{
	BeginDrawing();

	ClearBackground(RAYWHITE);
	m_gameStateManager->Draw();

	EndDrawing();
}

