#include <iostream>
#include "Camera.h"
#include "Light.h"

int main()
{

	Camera camera;
	camera.~Camera();

	Light light;
	light.~Light();

	printf("Test Remote\n");
	printf("Test Success\n");
	return 0;

}