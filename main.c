#include<float.h>

#include"include/draw.h"
#include"include/output.h"
#include"include/parser.h"
#include"include/rcs.h"

int main(int argc, char **argv) {
	if (argc < 2) {
		printf("Please state an input file\n");
		exit(1);
	}
	struct Rcs_stack *s = new_rcs_stack(4);
	Frame f;
	zbuffer buf;
	clear(f, buf);
	
	struct Pixel p;
	pixel_color(&p, 255, 235, 205);
	
	parse_instructions(argv[1], s, f, buf);

	/*
	print_stack(s);
	//print_matrix(peek(s));
	printf("%d\n", s->capacity);
	
	move(peek(s), 2, 4, 6);
	print_matrix(peek(s));
	push_rcs(s);
	printf("%d\n", s->capacity);
	
	scale(peek(s), 1, 2, 3);
	print_matrix(peek(s));
	push_rcs(s);
	printf("%d\n", s->capacity);
	
	printf("%d\n", s->top);
	print_stack(s);
	
	printf("popping\n");
	pop_rcs(s);
	print_matrix(peek(s));
	printf("%d\n", s->top);
	
	pop_rcs(s);
	print_matrix(peek(s));
	printf("%d\n", s->top);
	
	pop_rcs(s);
	print_matrix(peek(s));
	printf("%d\n", s->top);
	*/

	free_stack(s);
	
	return 0;
}

