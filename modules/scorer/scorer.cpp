/* scorer.cpp */

#include "scorer.h"

using namespace std;

// Add to score, affected by current score multiplier
void Scorer::add_score(int add) {
	score += (add * multiplier);
}

// Add a set amount to score unaffacted by multiplier
void Scorer::add_set(int add) {
	score += add;
}

// Remove a set amount from score
void Scorer::reduce_score(int reduction) {
	score -= reduction;
}

// Set the score multiplier, based on for example a power up or score streak
void Scorer::set_multiplier(int m) {
	multiplier = m;
}

// Multiply the score multiplier
void Scorer::super_multiplier(int m) {
	multiplier = multiplier * m;
}

// Reset score for current game session
void Scorer::reset_score() {
	score = 0;
}

// Get the current score value for displaying
int Scorer::get_score() const {
	return score;
}

// Get the current multiplier value for displaying
int Scorer::get_multiplier() const {
	return multiplier;
}

void Scorer::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add_score", "add"), &Scorer::add_score);
	ClassDB::bind_method(D_METHOD("reduce_score", "reduction"), &Scorer::reduce_score);
	ClassDB::bind_method(D_METHOD("set_multiplier", "m"), &Scorer::set_multiplier);
	ClassDB::bind_method(D_METHOD("super_multiplier", "m"), &Scorer::super_multiplier);
	ClassDB::bind_method(D_METHOD("reset_score"), &Scorer::reset_score);
	ClassDB::bind_method(D_METHOD("get_score"), &Scorer::get_score);
	ClassDB::bind_method(D_METHOD("get_multiplier"), &Scorer::get_multiplier);
}

// Initialize variables
Scorer::Scorer() {
	score = 0;
	multiplier = 1;
}
