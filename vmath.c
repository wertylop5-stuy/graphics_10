#include"include/vmath.h"

float dot_product(float *a, float *b) {
	return 0;
}

void normalize(float *v) {

}

void find_norm(struct Matrix *m, int p1, int p2, int p3,
		float *norm_out) {
	//create vectors
	float tempA[] = {
		m->m[0][p2] - m->m[0][p1],
		m->m[1][p2] - m->m[1][p1],
		m->m[2][p2] - m->m[2][p1],
	};
	
	float tempB[] = {
		m->m[0][p3] - m->m[0][p1],
		m->m[1][p3] - m->m[1][p1],
		m->m[2][p3] - m->m[2][p1]
	};
	
	//cross product
	norm_out[0] = tempA[1]*tempB[2] - tempA[2]*tempA[1];
	norm_out[1] = tempA[2]*tempB[0] - tempA[0]*tempB[2];
	norm_out[2] = tempA[0]*tempB[1] - tempA[1]*tempB[0];
}

