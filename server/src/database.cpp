#include "database.h"

using namespace std;

int main(int argc, char *argv[])
// int initDatabase(string username, string email, string password)
{
	sqlite3 *db;
	int exit = 0;
	char *errMsg;

	stringstream ss1;
	ss1 << "CREATE TABLE USER"
		<< "("
        << "UID INTEGER PRIMARY KEY AUTOINCREMENT, "
		<< "USERNAME TEXT NOT NULL,"
		<< "EMAIL TEXT NOT NULL,"
		<< "PASSWORD TEXT NOT NULL"
		<< ")";
	stringstream ss2;
	ss2 << "CREATE TABLE LEAGUE"
		<< "("
        << "LID INTEGER PRIMARY KEY AUTOINCREMENT, "
        << "UID INTEGER NOT NULL, "
		<< "LNAME TEXT NOT NULL,"
		<< "ROUNDROBIN INTEGER NOT NULL,"
		<< "QUALIFIERS INTEGER NOT NULL,"
		<< "NUMBEROFGROUPS INTEGER NOT NULL,"
		<< "NUMBEROFTEAMS INTEGER NOT NULL,"
		<< "STARTDATE TEXT NOT NULL,"
		<< "NUMBEROFMATCHTIMES INTEGER NOT NULL,"
		<< "MATCHTIMES TEXT NOT NULL"
		<< ")";
	stringstream ss3;
	ss3 << "CREATE TABLE TEAM"
		<< "("
        << "TID INTEGER PRIMARY KEY AUTOINCREMENT, "
        << "UID INTEGER NOT NULL, "
        << "LID INTEGER NOT NULL, "
		<< "TNAME TEXT NOT NULL,"
		<< "TGROUP CHAR(1) NOT NULL,"
		<< "POSITION INTEGER NOT NULL,"
		<< "MP INTEGER NOT NULL,"
		<< "WIN INTEGER NOT NULL,"
		<< "LOSS INTEGER NOT NULL,"
		<< "DRAW INTEGER NOT NULL,"
		<< "GF INTEGER NOT NULL,"
		<< "GA INTEGER NOT NULL,"
		<< "GD INTEGER NOT NULL,"
		<< "POINTS INTEGER NOT NULL,"
		<< "GROUND TEXT NOT NULL"
		<< ")";
	stringstream ss4;
	ss4 << "CREATE TABLE MATCH"
		<< "("
        << "MID INTEGER PRIMARY KEY AUTOINCREMENT, "
        << "UID INTEGER NOT NULL, "
        << "LID INTEGER NOT NULL, "
		<< "TID1 INTEGER NOT NULL,"
		<< "TID2 INTEGER NOT NULL,"
		<< "TEAM1GOAL INTEGER NOT NULL,"
		<< "TEAM2GOAL INTEGER NOT NULL,"
		<< "MATCHDATE TEXT NOT NULL,"
		<< "MATCHTIME TEXT NOT NULL,"
		<< "PLAYED INTEGER NOT NULL"
		<< ")";

	std::string sqlCreateUser;
	sqlCreateUser = ss1.str();
	std::string sqlCreateLeague;
	sqlCreateLeague = ss2.str();
	std::string sqlCreateTeam;
	sqlCreateTeam = ss3.str();
	std::string sqlCreateMatch;
	sqlCreateMatch = ss4.str();

	exit = sqlite3_open("uploads/leaguedata.db", &db);
	if(exit){
		cerr << "Failed to open database: " << sqlite3_errmsg(db) << endl;
		return 1;
	}
	else{
		cout << "Database opened successfully" << endl;
	}

	exit = sqlite3_exec(db, sqlCreateUser.c_str(), NULL, 0, &errMsg);
	if(exit!=SQLITE_OK){
		cerr << "Error creating user table" << endl;
		cerr << errMsg << endl;
		sqlite3_free(errMsg);
	}
	else{
		cout << "User Table created successfully" << endl;
	}
	exit = sqlite3_exec(db, sqlCreateLeague.c_str(), NULL, 0, &errMsg);
	if(exit!=SQLITE_OK){
		cerr << "Error creating league table" << endl;
		cerr << errMsg << endl;
		sqlite3_free(errMsg);
	}
	else{
		cout << "League Table created successfully" << endl;
	}
	exit = sqlite3_exec(db, sqlCreateTeam.c_str(), NULL, 0, &errMsg);
	if(exit!=SQLITE_OK){
		cerr << "Error creating team table" << endl;
		cerr << errMsg << endl;
		sqlite3_free(errMsg);
	}
	else{
		cout << "Team Table created successfully" << endl;
	}
	exit = sqlite3_exec(db, sqlCreateMatch.c_str(), NULL, 0, &errMsg);
	if(exit!=SQLITE_OK){
		cerr << "Error creating team table" << endl;
		cerr << errMsg << endl;
		sqlite3_free(errMsg);
	}
	else{
		cout << "Match Table created successfully" << endl;
	}
	
	sqlite3_close(db);
	return 0;
}