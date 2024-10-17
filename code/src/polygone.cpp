#include "../include/polygone.h"
#include <iostream>

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
    if (n < 3) return 0; // Un polygone doit avoir au moins 3 points

    float area = 0;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n; // Suivant le point, en bouclant au premier point à la fin
        area += p_arr[i].getX() * p_arr[j].getY() - p_arr[i].getY() * p_arr[j].getX();
    }
    return std::abs(area) / 2.0;
}

void Polygone::afficher(){
    for(size_t i = 0; i < p_arr.size(); i++){
        cout << "Point " << i << " = ";
        p_arr[i].afficher();
        cout << endl;
    }
}