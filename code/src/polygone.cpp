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

void Polygone::afficher(){
    for(size_t i = 0; i < p_arr.size(); i++){
        cout << "Point " << i << " = ";
        p_arr[i].afficher();
        cout << endl;
    }
}