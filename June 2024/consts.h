#ifndef CONSTS_H
#define CONSTS_H

#include <string>
#include <utility>
#include <unordered_map>

const int NUM_TO_OPTIMIZE = 1;

const char LETTERS[25] = {
    'A', 'B', 'C', 'D', 'E',
    'F', 'G', 'H', 'I', 'J',
    'K', 'L', 'M', 'N', 'O',
    'P', 'R', 'S', 'T', 'U',
    'V', 'W', 'X', 'Y', 'Z'
};


const int GOAL_SCORE = 165379868;

const std::string BLANK_GRID = "                         ";

const std::string EXCLUDED_STATES[] = {
    "CALIFORNIA"
};


const std::string REQUIRED_STATES[] = {
    "NEWMEXICO",
    "PENNSYLVANIA",
    "UTAH",
    "ARIZONA",
    "COLORADO"
};

const std::string OTHER_STATES[] = {
    "ALASKA", "ALABAMA", "ARKANSAS", 
    "CONNECTICUT", "DELAWARE", "FLORIDA", "GEORGIA",
    "HAWAII", "IOWA", "IDAHO", "ILLINOIS", "INDIANA",
    "KANSAS", "KENTUCKY", "LOUISIANA", "MASSACHUSETTS", "MARYLAND",
    "MAINE", "MICHIGAN", "MINNESOTA", "MISSOURI", "MISSISSIPPI",
    "MONTANA", "NORTHCAROLINA", "NORTHDAKOTA", "NEBRASKA", "NEWHAMPSHIRE",
    "NEWJERSEY", "NEVADA", "NEWYORK", "OHIO",
    "OKLAHOMA", "OREGON", "RHODEISLAND", "SOUTHCAROLINA",
    "SOUTHDAKOTA", "TENNESSEE", "TEXAS", "VIRGINIA", 
    "VERMONT", "WASHINGTON", "WISCONSIN", "WESTVIRGINIA", "WYOMING"
};

const std::unordered_map<std::string, int> POPULATIONS = {
    {"ALASKA", 733391}, {"ALABAMA", 5024279}, {"ARKANSAS", 3011524}, {"ARIZONA", 7151502}, {"CALIFORNIA", 39538223}, 
    {"COLORADO", 5773714}, {"CONNECTICUT", 3605944}, {"DELAWARE", 989948}, {"FLORIDA", 21538187}, {"GEORGIA", 10711908},
    {"HAWAII", 1455271}, {"IOWA", 3190369}, {"IDAHO", 1839106}, {"ILLINOIS", 12812508}, {"INDIANA", 6785528},
    {"KANSAS", 2937880}, {"KENTUCKY", 4505836}, {"LOUISIANA", 4657757}, {"MASSACHUSETTS", 7029917}, {"MARYLAND", 6177224},
    {"MAINE", 1362359}, {"MICHIGAN", 10077331}, {"MINNESOTA", 5706494}, {"MISSOURI", 6154913}, {"MISSISSIPPI", 2961279},
    {"MONTANA", 1084225}, {"NORTHCAROLINA", 10439388}, {"NORTHDAKOTA", 779094}, {"NEBRASKA", 1961504}, {"NEWHAMPSHIRE", 1377529},
    {"NEWJERSEY", 9288994}, {"NEWMEXICO", 2117522}, {"NEVADA", 3104614}, {"NEWYORK", 20201249}, {"OHIO", 11799448},
    {"OKLAHOMA", 3959353}, {"OREGON", 4237256}, {"PENNSYLVANIA", 13002700}, {"RHODEISLAND", 1097379}, {"SOUTHCAROLINA", 5118425},
    {"SOUTHDAKOTA", 886667}, {"TENNESSEE", 6910840}, {"TEXAS", 29145505}, {"UTAH", 3271616}, {"VIRGINIA", 8631393}, 
    {"VERMONT", 643077}, {"WASHINGTON", 7705281}, {"WISCONSIN", 5893718}, {"WESTVIRGINIA", 1793716}, {"WYOMING", 576851}
};

const std::vector<std::pair<int, int>> DIRECTIONS = {
    {1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}
};

#endif