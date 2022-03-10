///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Jordan Cortado <jcortado@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <string>

//#ifndef EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
//#define EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H

const float UNKNOWN_WEIGHT = -1;

enum Gender { UNKNOWN_GENDER, MALE, FEMALE };

class Animal {
public:
    Animal(const std::string &newSpecies);

    Animal(const std::string &species, Gender gender);

    Animal(const std::string &species, Gender gender, float newWeight);

    Animal(const std::string &species, float newWeight);

    static const std::string &getKingdom();

    const std::string &getSpecies() const;

    Gender getGender() const;

    void setGender(Gender newGender);

    float getWeight() const;

    void setWeight(float newWeight);

    void printInfo();

    bool isValid();

protected:
    static const std::string    kingdom;
    std::string                 species;                    //Required
    enum Gender                 gender  = UNKNOWN_GENDER;   //Defaulting to UNKNOWN_GENDER
    float                       weight  = UNKNOWN_WEIGHT;   //Defaulting to UNKNOWN_WEIGHT

    bool validateWeight( const float newWeight );
    bool validateSpecies( const std::string newSpecies);

private:
    void setSpecies( const std::string newSpecies );

};


//#endif //EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
