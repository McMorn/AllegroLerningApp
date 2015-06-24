#pragma once

#include <iostream>
#include <string>
#include "GameScreen.h"
#include "SplashScreen.h"
#include "TitleScreen.h"
#include "FadeAnimation.h"

// Allegro Inits
#include <allegro5\allegro.h>
#include <allegro5\allegro_image.h>


#define ScreenWidth 800
#define ScreenHeight 600

class ScreenManager
{
private:
	ScreenManager();
	ScreenManager(ScreenManager const&);
	void operator = (ScreenManager const&);

	std::string text;
	GameScreen *currentScreen, *newScreen;

	ALLEGRO_BITMAP *transitionImage;

	FadeAnimation transition;

	void Transition();

	bool startTransition;

public:
	~ScreenManager(void);
	static ScreenManager &GetInstance();

	void AddScreen(GameScreen *screen);
	void Initialize();
	void LoadContent();
	void UnloadContent();
	void Update(ALLEGRO_EVENT ev);
	void Draw(ALLEGRO_DISPLAY *display);
};

