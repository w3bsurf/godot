/* logwriter.cpp */

#include "logwriter.h"
#include <fstream>
#include <ctime>
#include <string>
#include <iostream>
using namespace std;

void Logwriter::session_start() {
	ofstream logfile;
	logfile.open("log.txt", std::ios_base::app);
	logfile << "\n*** Started new session ***\n\n";
	logfile.close();
}

void Logwriter::write_log(String event) {
	ofstream logfile;
	logfile.open("log.txt", std::ios_base::app);
	
	time_t now = time(0);
   	char* dt = ctime(&now);
   
	std::wstring ws = event.c_str();
	std::string s( ws.begin(), ws.end() );
	logfile << s << ", " << dt;
	logfile.close();
}

void Logwriter::_bind_methods() {
	ClassDB::bind_method(D_METHOD("session_start"), &Logwriter::session_start);
	ClassDB::bind_method(D_METHOD("write_log", "event"), &Logwriter::write_log);
}

Logwriter::Logwriter() {
}
