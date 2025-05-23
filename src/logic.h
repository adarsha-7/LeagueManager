#pragma once

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <time.h>
#include <vector>
#include "db.h"

using namespace std;

#define MAX_TEAMS 50
#define MAX_GROUPS 16
#define MAX_MATCHES_PT 16
#define MAX_MATCHES_GT 100

class Match;

//class for a team
class Team
{
    public:

    //properties of a team that are fixed, initialized using user input
    string team_name;
    int team_id;
    int team_user_id;
    int team_league_id;
    string team_ground;

    //properties of a team that are fixed, initialized by program
    char team_group;

    //properties of a team that are not fixed
    int team_position = 0;
    int team_mp = 0;
    int team_w = 0;
    int team_d = 0;
    int team_l = 0;
    int team_gf = 0;
    int team_ga = 0;
    int team_gd = 0;
    int team_points = 0;

    //methods
    Team() {}
    //function to initialize a team's fixed properties in a league, based on the input string from database
    void init_team(string input_string);
    //function that updates a team data for every match
    void update_team_data(int goals_for, int goals_against);
};

//class for a group
class Group
{
    public:

    char group_name;

    Team T[MAX_TEAMS];
};

//class for a match
class Match
{
    public:

    int match_id;
	int match_user_id;
	int match_league_lid;
    Team T1;
    Team T2;
    int T1_score;
    int T2_score;
    bool match_occur = 0;
	string match_date;
	string match_time;
};

//class for a league
class League
{
    public:

    //properties of a league, all fixed, initialized
    int league_id;
    int league_user_id;
    string league_name;
    int league_round_robin;
    int league_qualifiers;
    int league_groups;
    int league_team_number;
	string League_start_date;
	int league_no_of_match_times;
	string league_match_times[4];

    //array of teams for a league
    Team T[MAX_TEAMS];
	Match M[MAX_MATCHES_GT];

    League() {}
    //function to update position of teams in a group of a league based on points 
    void update_group_positions();
    //function to initialize league's fixed properties, based on the input string from database
    void init_league(string input_string);
    //function that sorts team array of a league alphabetically
    void sort_teams_array();
    //function to update league data in the database
    void update_league_data();
    //function to update teams data in the database
    void updateDatabaseTeam();
};

//function to update league data
void update(string input_string_1, string input_string_2);

//function to return a league and team data
League displayLeague(string input_string_1, string input_string_2);

//function to return only league data
League displayLeagueOnly(string input_string_1);

//function to return groups 
vector<Group> displayGroups(string input_string_1, string input_string_2);

//this file is used to create matches 
void createMatchesGS(League L);

void shuffleArray(Match arr[], int size);

void rearrangeMatches(Match arr[], int size);

bool hasConsecutiveMatches(const Match arr[], int size);

vector<Match> displayMatch(League L);