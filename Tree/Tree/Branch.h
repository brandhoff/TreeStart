#pragma once
#include <iostream>

class Branch
{
    private:
        double height_pos;
        double length;
        double x_dir, y_dir, z_dir;
    public:
        Branch(double h, double l, double x, double y, double z);
        void printBranches();
};