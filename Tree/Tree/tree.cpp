
#include "tree.h"
        Tree::Tree(){
            this->printCoords();
        };

        Tree::Tree(double x0, double y0, double z0){
            this->x_base = x0;
            this->y_base = y0;
            this->z_base = z0;
            this->printCoords();
        };

         Tree::Tree(double x0, double y0, double z0, double height){
            this->x_base = x0;
            this->y_base = y0;
            this->z_base = z0;
            this->height = height;
            this->printCoords();
        };

        void Tree::grow_br(Branch b){
            this->branchList.push_back(b);
        };

        int Tree::getNumBranches(){

            return this->branchList.size();
        };

        void Tree::printCoords(){
            //std::cout<<"|" << x_base <<"|" << y_base <<"|"<< z_base <<"|"<<"|"<< height <<"|" << std::endl;

        };
