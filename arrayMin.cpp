// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-05-30
// This program generates random numbers using arrays and finds the min.

#include <iostream>
#include <random>
#include <array>


int FindMin(std::array<int, 10> numArray) {
    // this function finds the lowest number in the num_array
    int minNum = numArray[0];

    for (int numCheck = 0; numCheck < numArray.size(); numCheck++) {
        if (numArray[numCheck] < minNum) {
            minNum = numArray[numCheck];
        }
    }

    return minNum;
}


int main() {
    // this function generates 10 random numbers, calls a function,
    // and outputs the lowest one

    std::array<int, 10> numArray;
    int randomNum;
    int minNum;

    // random seed
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne twister
    std::uniform_int_distribution<int> idist(0, 100);  // random from 0 - 100

    std::cout <<
    "This program generates 10 random numbers and finds the lowest one.\n"
    << std::endl;

    // process and output
    for (int counter = 0; counter < 10; counter++) {
        randomNum = idist(rgen);
        numArray[counter] = randomNum;
        std::cout << "Random number generated: " << randomNum << std::endl;
    }

    minNum = FindMin(numArray);

    // output
    std::cout << "\nThe lowest number is " << minNum << "." << std::endl;

    std::cout << "\nDone." << std::endl;
}
