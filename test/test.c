#include <stdio.h>

#include <ccVector/ccVector.h>

#define PI 3.141592f

static void printVec3(ccVec3 v) {
	for(int i = 0; i < 3; i++) {
		printf("%.2f\n", v[i]);
	}
	printf("\n");
}

static void printMat3x3(ccMat3x3 m) {
	for(int c = 0; c < 3; c++) {
		for(int r = 0; r < 3; r++) {
			printf("%.2f\t", m[r][c]);
		}
		printf("\n");
	}
	printf("\n");
}

int main(int argc, char **argv) {
	ccVec3 vector, vectorMultiplied;
	ccVec2 add;
	ccMat3x3 transform;

	vector[0] = 10;
	vector[1] = 0;
	vector[2] = 1;

	add[0] = 1000;
	add[1] = 1000;

	printVec3(vector);

	ccMat3x3Identity(transform);
	ccMat3x3Rotate2D(transform, PI / 4);
	ccMat3x3Scale2D(transform, 2);
	ccMat3x3Translate(transform, add);

	printMat3x3(transform);

	printf("Applying transformation matrix...\n\n");

	ccMat3x3MultiplyVector(vectorMultiplied, transform, vector);

	printVec3(vectorMultiplied);

	printf("Length: %.2f\n", ccVec2Length(vector));

	getchar();

	return 0;
}