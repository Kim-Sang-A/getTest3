#include <iostream>
#include "Camera.h"
#include "Light.h"
#include "Animation.h"


int main()
{

	Camera camera;
	camera.~Camera();

	Light light;
	light.~Light();

	printf("Test Remote\n");
	printf("Test Success\n");

	Animation animation;

	printf("Test Add\n");

	return 0;

}