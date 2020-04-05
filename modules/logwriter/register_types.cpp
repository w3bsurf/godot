/* register_types.cpp */

#include "register_types.h"

#include "core/class_db.h"
#include "logwriter.h"

void register_logwriter_types() {
	ClassDB::register_class<Logwriter>();
}

void unregister_logwriter_types() {
	// Nothing to do here in this example.
}
