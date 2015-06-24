#pragma once

#include <allegro5\allegro.h>
#include <allegro5\allegro_image.h>
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>
#include <string>
#include "InputManager.h"


class Animation
{
protected:
	ALLEGRO_BITMAP *image, *sourceRect;
	ALLEGRO_FONT *font;
	std::string text;
	float position[2];
	float alpha;
	bool isActive;

public:
	Animation();
	~Animation();

	virtual void LoadContent(ALLEGRO_BITMAP *image, std::string text, float position[2]);
	virtual void UnloadContent();
	virtual void Update(InputManager input);
	void Draw(ALLEGRO_DISPLAY *display);

	virtual void setAlpha(float value);
	float getAlpha();

	void SetIsActive(bool value);
	bool GetIsActive();
};

