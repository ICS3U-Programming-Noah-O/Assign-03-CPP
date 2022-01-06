// Copyright (c) 2021 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Dec. 14, 2021
// This program allows a user to input the weight and
// volume of a package to see if a company will accept it.
#include <unistd.h>
#include <iostream>
#include <iomanip>


// The cpplint says that global strings are an
// error, I am not sure how to fix this.
float weightNum;
float packageVolume;
int packageWeightInt;
int packageHeightInt;
int packageLengthInt;
int packageWidthInt;
std::string unitVolume;
std::string unitWeight;
std::string packageWeight;
std::string packageHeight;
std::string packageLength;
std::string packageWidth;

// Function that calculates the final result in cm.
int unitscm() {
      if (packageVolume > 10000 && packageWeightInt > weightNum) {
            std::cout << "Sorry, " << packageWeight << unitWeight;
            std::cout << " is too heavy and" << packageVolume;
            std::cout << "cm^3 is too large.\n";
            std::cout << " \n";

      } else if (packageVolume > 10000) {
            std::cout << "Sorry, " << packageWeight << unitWeight;
            std::cout << " is ok, but" << packageVolume;
            std::cout << "cm^3 is too large.\n";
            std::cout << " \n";

      } else if (packageWeightInt > weightNum) {
            std::cout << "Sorry, " << packageWeight << unitWeight;
            std::cout << " is too heavy, but" << packageVolume;
            std::cout << "cm^3 is ok.\n";
            std::cout << " \n";

      } else {
            std::cout << " \n";
            std::cout << "That pacakge is acceptable!\n";
            std::cout << "Thank you for choosing Bob’s Box delivery service.\n";
            std::cout << " \n";
      }
}

// Function that calculates the final result in mm.
int unitsmm() {
    if (packageVolume > 100000 && packageWeightInt > weightNum) {
          std::cout << "Sorry, " << packageWeight << unitWeight;
          std::cout << " is too heavy and" << packageVolume;
          std::cout << "mm^3 is too large.\n";
          std::cout << " \n";

    } else if (packageVolume > 100000) {
          std::cout << "Sorry, " << packageWeight << unitWeight;
          std::cout << " is ok, but" << packageVolume;
          std::cout << "mm^3 is too large.\n";
          std::cout << " \n";

    } else if (packageWeightInt > weightNum) {
          std::cout << "Sorry, " << packageWeight << unitWeight;
          std::cout << " is too heavy, but" << packageVolume;
          std::cout << "mm^3 is ok.\n";
          std::cout << " \n";

    } else {
          std::cout << " \n";
          std::cout << "That pacakge is acceptable!\n";
          std::cout << "Thank you for choosing Bob’s Box delivery service.\n";
          std::cout << " \n";
    }
}

// Function that calculates the final result in ft.
int unitsft() {
    if (packageVolume > 328.084 && packageWeightInt > weightNum) {
          std::cout << "Sorry, " << packageWeight << unitWeight;
          std::cout << " is too heavy and" << packageVolume;
          std::cout << "ft^3 is too large.\n";
          std::cout << " \n";

    } else if (packageVolume > 328.084) {
          std::cout << "Sorry, " << packageWeight << unitWeight;
          std::cout << " is ok, but" << packageVolume;
          std::cout << "ft^3 is too large.\n";
          std::cout << " \n";

    } else if (packageWeightInt > weightNum) {
          std::cout << "Sorry, " << packageWeight << unitWeight;
          std::cout << " is too heavy, but" << packageVolume;
          std::cout << "ft^3 is ok.\n";
          std::cout << " \n";

    } else {
          std::cout << " \n";
          std::cout << "That pacakge is acceptable!\n";
          std::cout << "Thank you for choosing Bob’s Box delivery service.\n";
          std::cout << " \n";
    }
}
int main() {
  // Prints intro message and asks user for volume units.
    std::cout << "Thank you for using Bob’s Box delivery service.\n";
    std::cout << "This program can tell you if we are able to ";
    std::cout << "accept your package for delivery.\n";
    std::cout << "We cannot take packages that are over 27 kg in";
    std::cout << " weight or 10000 cubic cm in volume.\n";
    std::cout << " \n";
    sleep(1);
    std::cout << "Enter the unit that you would to use to ";
    std::cout << "measure the volume cm/mm/ft: ";
    std::cin >> unitVolume;
    std::cout << " \n";

    // Determines if the user input for volume unit is valid
    if (unitVolume == "cm") {
       std::cout << " \n";
    } else if (unitVolume == "mm") {
       std::cout << " \n";
    } else if (unitVolume == "ft") {
       std::cout << " \n";
    } else {
        std::cout << "Invalid volume unit.\n";
        return(0);
    }

    // Asks user for weight units.
    std::cout << "Enter the unit that you would to use to";
    std::cout << " measure the weight kg/g/mg: ";
    std::cin >> unitWeight;
    std::cout << " \n";

    // Determines if the user input for weight unit is
    // valid for units and numbers.

    if (unitWeight == "kg") {
       weightNum = 27;
    } else if (unitWeight == "g") {
       weightNum = 27000;
    } else if (unitWeight == "mg") {
       weightNum = 27000000;
    } else {
        std::cout << "Invalid weight unit.\n";
        return(0);
    }

    sleep(1);
    // Ask user for weight
    std::cout << "Enter the weight of your package in " << unitWeight << ": ";
    std::cin >> packageWeight;
    std::cout << " \n";

    try {
        packageWeightInt = std::stoi(packageWeight);
        std::cout << " \n";

           if (packageWeightInt <= 0) {
            std::cout << packageWeightInt << " is an invalid number\n";
            std::cout << " \n";
            main();
            return(0);
        }
        } catch (std::invalid_argument) {
            std::cout << packageWeight << " is not a valid integer\n";
            std::cout << " \n";
            main();
            return(0);
        }
    sleep(1);
    // Ask user for height
    std::cout << "Enter the height of your package in " << unitVolume << ": ";
    std::cin >> packageHeight;
    std::cout << " \n";
    try {
        packageHeightInt = std::stoi(packageHeight);
        std::cout << " \n";

        if (packageHeightInt <= 0) {
            std::cout << packageHeightInt << " is an invalid number\n";
            std::cout << " \n";
            main();
            return(0);
        }
        } catch (std::invalid_argument) {
            std::cout << packageHeight << " is not a valid integer\n";
            std::cout << " \n";
            main();
            return(0);
        }
    sleep(1);
    // Ask user for length
    std::cout << "Enter the length of your package in " << unitVolume << ": ";
    std::cin >> packageLength;
    std::cout << " \n";

    try {
        packageLengthInt = std::stoi(packageLength);
        std::cout << " \n";

           if (packageLengthInt <= 0) {
            std::cout << packageLengthInt << " is an invalid number\n";
            std::cout << " \n";
            main();
            return(0);
        }
        } catch (std::invalid_argument) {
            std::cout << packageLength << " is not a valid integer\n";
            std::cout << " \n";
            main();
            return(0);
        }
    sleep(1);
    // Ask user for width
    std::cout << "Enter the width of your package in " << unitVolume << ": ";
    std::cin >> packageWidth;
    std::cout << " \n";

    try {
        packageWidthInt = std::stoi(packageWidth);
        std::cout << " \n";

           if (packageWidthInt <= 0) {
            std::cout << packageWidthInt << " is an invalid number\n";
            std::cout << " \n";
            main();
            return(0);
        }
        } catch (std::invalid_argument) {
            std::cout << packageWidth << " is not a valid integer\n";
            std::cout << " \n";
            main();
            return(0);
        }
    // Calculates package volume.
    packageVolume = (packageHeightInt * packageLengthInt * packageWidthInt);

    // Calls specific functions based on chosen units.
    if (unitVolume == "cm") {
       unitscm();
      std::cout << " \n";
    } else if (unitVolume == "mm") {
       unitsmm();
       std::cout << " \n";
    } else if (unitVolume == "ft") {
       unitsft();
       std::cout << " \n";
    }
}
