#pragma once
#include<SFML/Graphics.hpp>

class Animation
{
private:
	sf::Vector2u imageCount;
	sf::Vector2u currentImage;
	float totalTime;
	float switchTime;
public:
	sf::IntRect uvRect;
	Animation(sf::Texture* texture,sf::Vector2u imgCount,float swTime);
	~Animation();
	void Update(int row, float deltaTime,bool faceRight);
};