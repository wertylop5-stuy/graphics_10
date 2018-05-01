#ifndef LIGHTING_H
#define LIGHTING_H

struct Light {
	//ambient, diffuse, specular
	struct Pixel ambient_color;
	struct Pixel point_color;
	struct Matrix point_vect;
};

struct Pixel get_lighting();
struct Pixel calc_ambient();
struct Pixel calc_diffuse();
struct Pixel calc_specular();

#endif

