#include"include/lighting.h"

struct Light* new_light(float aR, float aG, float aB,
		float pR, float pG, float pB,
		float x, float y, float z) {
	struct Light *res = (struct Light *)malloc(sizeof(struct Light)); 

	res->ambient_color.r = aR;
	res->ambient_color.g = aG;
	res->ambient_color.b = aB;
	
	res->point_color.r = pR;
	res->point_color.g = pG;
	res->point_color.b = pB;

	res->light_vector[0] = x;
	res->light_vector[1] = y;
	res->light_vector[2] = z;
	
	return res;
}

//normal and view are 3 element arrays for the corresponding vector
struct Pixel* get_lighting(struct Light *l, float *normal, float *view,
		float aReflect, float dReflect, float sReflect) {
	return 0;
}

struct Pixel* calc_ambient(struct Light *l, float aReflect) {
	struct Pixel *res = (struct Pixel *)malloc(sizeof(struct Pixel));

	res->r = l->ambient_color.r * aReflect;
	res->r = l->ambient_color.g * aReflect;
	res->r = l->ambient_color.b * aReflect;
	
	return res;
}

struct Pixel* calc_diffuse(struct Light *l, float *normal, float dReflect) {
	return 0;
}

struct Pixel* calc_specular(struct Light *l, float *normal, float *view,
		float sReflect) {
	return 0;
}

