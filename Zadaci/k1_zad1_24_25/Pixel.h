#pragma once
//dato

#include <string>
#include <iostream>

class Pixel {
private:
	int R, G, B;
public:
    Pixel(int R, int G, int B) : R(R), G(G), B(B) {}
    int getR() {
        return R;
    }

    void setR(int R) {
        this->R = R;
    }

    int getG() {
        return G;
    }

    void setG(int G) {
        this->G = G;
    }

    int getB() {
        return B;
    }

    void setB(int B) {
        this->B = B;
    }

    void print() {
        std::cout << std::to_string(R) + " " + std::to_string(G) + " " + std::to_string(B) << std::endl;
    }
};