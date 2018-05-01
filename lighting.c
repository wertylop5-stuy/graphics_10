#include"include/lighting.h"

struct Light* new_light(float aR, float aG, float aB,
		float pR, float pG, float pB,
		float x, float y, float z) {
	return 0;
}

void free_light(struct Light *l) {
	
}

//normal and view are 3 element arrays for the corresponding vector
struct Pixel* get_lighting(struct Light *l, float *normal, float *view,
		float aReflect, float dReflect, float sReflect) {
	return 0;
}

struct Pixel* calc_ambient(struct Light *l, float aReflect) {
	return 0;
}

struct Pixel* calc_diffuse(struct Light *l, float *normal, float dReflect) {
	return 0;
}

struct Pixel* calc_specular(struct Light *l, float *normal, float *view,
		float sReflect) {
	return 0;
}

