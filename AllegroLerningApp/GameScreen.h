#pragma once

#include <allegro5\allegro.h>
#include "InputManager.h"


class GameScreen
{
protected:
	InputManager input;

public:
	GameScreen();
	~GameScreen();

	virtual void LoadContent();
	virtual void UnloadContent();
	virtual void Update(ALLEGRO_EVENT ev);
	virtual void Draw(ALLEGRO_DISPLAY *display);

	InputManager GetInput();
};

