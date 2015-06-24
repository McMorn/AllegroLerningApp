#pragma once

#include "ScreenManager.h"
#include "InputManager.h"
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>


class SplashScreen : public GameScreen
{
private:
	ALLEGRO_FONT *font;

public:
	SplashScreen();
	~SplashScreen();

	void LoadContent();
	void UnloadContent();
	void Update(ALLEGRO_EVENT ev);
	void Draw(ALLEGRO_DISPLAY *display);
};

