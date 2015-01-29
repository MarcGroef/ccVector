#include <stdio.h>

#include <ccVector/ccVector.h>

CCV_DEFINE_VEC(2)

int main(int argc, char **argv) {
	ccvVec2 vec0, vec1, vec2;
	vec0.elements[0] = 0;
	vec0.elements[1] = 0;

	CCV_SET(vec1, 0, 0.5f);
	CCV_SET(vec1, 1, 0.5f);
	CCV_SET(vec2, 0, 0.2f);
	CCV_SET(vec2, 1, 0.3f);

	ccvVec2CrossProduct(&vec0, vec1, vec2);

	printf("%f\t%f\n", CCV_GET(vec0, 0), CCV_GET(vec0, 1));
	printf("Length: %f\n", ccvVec2Length(vec0));

	ccvVec2Normalize(&vec0);
	
	printf("%f\t%f\n", CCV_GET(vec0, 0), CCV_GET(vec0, 1));
	printf("Length: %f\n", ccvVec2Length(vec0));

	getchar();

	return 0;
}