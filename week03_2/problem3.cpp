#include <iostream>

using namespace std;

typedef struct {
	int xpos;
	int ypos;
} Point;

int mul(int a, int b) {return a * b;}

double mul(double a, double b) {return a * b;}

void mul(Point* a, Point* b, Point* c) {
	c->xpos = a->xpos * b->xpos;
	c->ypos = a->ypos * b->ypos;

	return;
}

void s3x3_matrix_mul(int (*a)[3], int (*b)[3], int (*c)[3]) {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			for(int k = 0; k < 3; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

}


int main(void) {
	int a = 10, b = 20;
	double c = 15.0, d = 22.0;
	Point e = {1, 2}, f = {3, 4}, g = {0, 0};
	int h[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}}, i[3][3] = {{1, 2, 1}, {1, 2, 0}, {0, 2, 1}}, j[3][3] = {{0, }, };

	cout << mul(a, b) << endl;
	cout << mul(c, d) << endl;
	mul(&e, &f, &g);
	cout << g.xpos << ", " << g.ypos << endl;
	s3x3_matrix_mul(h, i, j);
	for(int row = 0; row < 3; row++) {
		for(int col = 0; col < 3; col++) {
			cout << j[row][col] << " ";
		}
		cout << endl;
	}

	return 0;
}
