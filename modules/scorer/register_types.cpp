/* register_types.cpp */

#include "register_types.h"

#include "core/class_db.h"
#include "scorer.h"

void register_scorer_types() {
	ClassDB::register_class<Scorer>();
}

void unregister_scorer_types() {
}
