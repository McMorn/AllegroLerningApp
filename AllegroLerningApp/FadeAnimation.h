#pragma once
#include "Animation.h"


class FadeAnimation : public Animation
{
private:
	float fadeSpeed;
	bool increase;

public:
	FadeAnimation();
	~FadeAnimation();

	void LoadContent(ALLEGRO_BITMAP *image, std::string text, float position[2]);
	void UnloadContent();
	void Update(InputManager input);

	void setAlpha(int alpha);
};

