#pragma once
#include <fstream>
#include <iostream>
#include "BasicWindow.h"
#include "Button.h"
#include "WelcomeConsts.h"




class WelcomeWindow : public BasicWindow
{
public:
	//constructor
	WelcomeWindow(const sf::Vector2f& size, const std::string& windowName);

	//public functions
	void draw();
	bool handleEvent();
	 

private:
	//members
	Button m_play;
	Button m_help;
	Button m_exit;
	Button m_backToMenu;
	sf::Text m_helpText;

	//private functions
	void getTextHelp();
	void helpSituation();
	void handleMovement(const sf::Vector2f& locMove, sf::Vector2f& lastMove, bool inHelp);
	void frameArranagement(Button& button);
	void deleteFrame(Button& button);
};