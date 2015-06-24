#pragma once

#include "ScreenManager.h"
#include "InputManager.h"
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>


class TitleScreen : public GameScreen
{
private:
	ALLEGRO_FONT *font;

public:
	TitleScreen();
	~TitleScreen();

	void LoadContent();
	void UnloadContent();
	void Update(ALLEGRO_EVENT ev);
	void Draw(ALLEGRO_DISPLAY *display);
};

