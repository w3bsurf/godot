/* scorer.h */

#ifndef SCORER_H
#define SCORER_H

#include "core/reference.h"

class Scorer : public Reference {
    GDCLASS(Scorer, Reference);
    int score;
    int multiplier;

protected:
    static void _bind_methods();

public:
    void add_score(int add);
	void add_set(int add);
	void reduce_score(int reduction);
	void set_multiplier(int m);
	void super_multiplier(int m);
	void reset_score();
	int get_score() const;
	int get_multiplier() const;

    Scorer();
};

#endif // SCORER_H
