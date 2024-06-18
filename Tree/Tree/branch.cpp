#include "branch.h"

Branch::Branch(double h, double l, double x, double y, double z) {
	height_pos = h;
	length = l;
	x_dir = x;
	y_dir = y;
	z_dir = z;
};

void Branch::printBranches() {
	std::cout << "Height position: " << height_pos << " Length: " << length
		<< " Direction: " << x_dir << "|" << y_dir << "|" << z_dir << std::endl;
};