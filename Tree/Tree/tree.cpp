#include "tree.h"

Tree::Tree(){
    printCoords();
};

Tree::Tree(double x0, double y0, double z0){
    x_base = x0;
    y_base = y0;
    z_base = z0;
    printCoords();
};

Tree::Tree(double x0, double y0, double z0, double height){
    x_base = x0;
    y_base = y0;
    z_base = z0;
    height = height;
    printCoords();
};

void Tree::printCoords() {
    std::cout << "Coordinates: " << x_base << "|" << y_base << "|" << z_base << " Height: " << height << std::endl;
};

void Tree::grow_branches(Branch b){
    branchList.push_back(b);
};

int Tree::getNumBranches(){
    return branchList.size();
};

void Tree::printBranchList() {
    for (auto b : branchList) {
        b.printBranches();
    }
};
        
