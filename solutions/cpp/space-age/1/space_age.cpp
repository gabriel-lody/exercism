#include "space_age.h"

namespace space_age {

const float YEAR = 31557600.0f;
const float MERCURY = 0.2408467f;
const float VENUS = 0.61519726f;
const float EARTH = 1.0f;
const float MARS = 1.8808158f;
const float JUPITER = 11.862615f;
const float SATURN = 29.447498f;
const float URANUS = 84.016846f;
const float NEPTUNE = 164.79132f;

space_age::space_age(const long iAge): iAgeInSeconds(iAge) {}

long space_age::seconds() const {return iAgeInSeconds;}

float space_age::on_earth() const {return static_cast<float>(iAgeInSeconds) / YEAR * EARTH;}

float space_age::on_mercury() const {return static_cast<float>(iAgeInSeconds) / YEAR / MERCURY;}

float space_age::on_venus() const {return static_cast<float>(iAgeInSeconds) / YEAR / VENUS;}

float space_age::on_mars() const {return static_cast<float>(iAgeInSeconds) / YEAR / MARS;}

float space_age::on_jupiter() const {return static_cast<float>(iAgeInSeconds) / YEAR / JUPITER;}

float space_age::on_saturn() const {return static_cast<float>(iAgeInSeconds) / YEAR / SATURN;}

float space_age::on_uranus() const {return static_cast<float>(iAgeInSeconds) / YEAR / URANUS;}

float space_age::on_neptune() const {return static_cast<float>(iAgeInSeconds) / YEAR / NEPTUNE;}

}  // namespace space_age
