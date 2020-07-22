
#include "MenuState.h"
#include"raylib.h"
#include <iostream>

MenuState::MenuState(Application* app) : m_app(app)
{

}

MenuState::~MenuState()
{

}
void MenuState::Load()
{
	std::cout << "LOADING MENU" << std::endl;
}
void MenuState::Unload()
{
	std::cout << "UNLOADING MENU" << std::endl;
}

void MenuState::Update(float dt)
{

}
void MenuState::Draw()
{
	DrawText("MENU", 10, 10, 20, LIGHTGRAY);
}
