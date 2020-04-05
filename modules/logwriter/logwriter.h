/* logwriter.h */

#ifndef LOGWRITER_H
#define LOGWRITER_H

#include "core/reference.h"
#include <iostream>
#include <string>
using namespace std;


class Logwriter : public Reference {
	GDCLASS(Logwriter, Reference);

protected:
	static void _bind_methods();

public:
	void session_start();
	void write_log(String event);


	Logwriter();
};

#endif // LOGWRITER_H
