#include "../include/polygone.h"
#include <iostream>
#include <cmath>

Polygone::Polygone(const std::vector<Point> p_arr0){
    p_arr = p_arr0;
}

Polygone::~Polygone(){
    //delete p_arr;
}

float Polygone::perimetre(){
    float sum = p_arr[p_arr.size()-1].distanceEuclidienne(p_arr[0]);
    for(size_t i = 0; i < p_arr.size()-1; i++){
        sum += p_arr[i].distanceEuclidienne(p_arr[i+1]);
    }
    return sum;
}

float Polygone::surface() {
    int n = p_arr.size();
    if (n < 3){
        cout << "Il y a moins de 3 points, impossible de calculer une Surface" << endl;
        return 0;
    }

    // Calcul du terme reliant le dernier point au premier
    float area = p_arr[n-1].getX() * p_arr[0].getY() - p_arr[n-1].getY() * p_arr[0].getX();
    // Boucle sur les autres points
    for (int i = 0; i < n - 1; i++) {
        area += p_arr[i].getX() * p_arr[i+1].getY() - p_arr[i].getY() * p_arr[i+1].getX();
    }

    return std::abs(area) / 2.0;
}


void Polygone::afficher(){
    for(size_t i = 0; i < p_arr.size(); i++){
        cout << "p" << i << " = ";
        p_arr[i].afficher();
        cout << endl;
    }
}