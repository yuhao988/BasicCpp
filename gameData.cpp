#include "Data.h"
#include <vector>

std::vector<ClassInfo> InitializeClasses()
{
    return {
        // Devoted Class
        ClassInfo(
            1, "Vanguard", 2, "Devoted", "Axes", "Physical",
            1, 1,
            0.25, -2,
            0.15, 0,
            0.2, 1,
            0.25, 2,
            0.05, -1,
            0.05, 0,
            0.3, 3,
            0.3, 4),
        ClassInfo(
            2, "Vanguard", 2, "Nightblade", "Daggers", "Physical",
            1, 1,
            0.05, -4,
            0.1, -2,
            0.35, 4,
            0.2, 2,
            0.0, -3,
            0.25, 3,
            0.25, 1,
            0.15, 2),
        ClassInfo(
            3, "Vanguard", 2, "Seeker", "Bows", "Physical",
            2, 2,
            0.25, 0,
            0.25, 2,
            0.05, -2,
            0.30, 3,
            0.2, 1,
            0.1, 0,
            0.3, 3,
            0.1, 0),
        ClassInfo(
            4, "Vanguard", 2, "Gallant", "Swords", "Physical",
            1, 1,
            0.4, 6,
            0.3, 3,
            0.1, -1,
            0.2, 0,
            0.25, 1,
            0.05, -1,
            0.15, 0,
            0.05, -1),
        ClassInfo(
            5, "Hunter", 2, "Ranger", "Axes", "Physical",
            1, 1,
            0.3, 3,
            0.25, 3,
            0.15, 0,
            0.15, -1,
            0.3, 1,
            0.1, -1,
            0.05, -2,
            0.15, 0),
        ClassInfo(
            6, "Hunter", 2, "Cutthroat", "Daggers", "Physical",
            1, 1,
            0.2, -1,
            0.1, -1,
            0.35, 3,
            0.25, 1,
            0.05, 0,
            0.1, 1,
            0.2, -1,
            0.2, 3),
        ClassInfo(
            7, "Hunter", 2, "Tamer", "Bows", "Physical",
            1, 2,
            0.35, 5,
            0.2, 0,
            0.05, -2,
            0.15, -1,
            0.2, 0,
            0.2, 0,
            0.4, 4,
            0.1, -2),
        ClassInfo(
            8, "Hunter", 2, "Quickdraw", "Bows", "Physical",
            2, 2,
            0.15, -4,
            0.25, 1,
            0.35, 5,
            0.3, 3,
            0.1, -1,
            0.0, -1,
            0.1, 0,
            0.1, 0),
        ClassInfo(
            9, "Summoner", 2, "Geomancer", "Focus", "Magical",
            1, 2,
            0.4, 4,
            0.2, 1,
            0.05, 0,
            0.1, -1,
            0.2, 2,
            0.1, -3,
            0.3, 4,
            0.2, 3),
        ClassInfo(
            10, "Summoner", 2, "Warlock", "Focus", "Magical",
            1, 2,
            0.2, -1,
            0.25, 4,
            0.1, 0,
            0.25, 3,
            0.1, -1,
            0.3, 1,
            0.1, -1,
            0.05, -2),
        ClassInfo(
            11, "Summoner", 2, "Aegis", "Swords", "Physical",
            1, 1,
            0.3, 10,
            0.1, 1,
            0.1, -1,
            0.1, 0,
            0.35, 3,
            0.35, -1,
            0.1, 0,
            0.1, -2),
        ClassInfo(
            12, "Summoner", 2, "Scholar", "Relics", "Magical",
            1, 2,
            0.25, -1,
            0.25, 0,
            0.3, 2,
            0.1, -1,
            0.05, 0,
            0.05, -2,
            0.25, 2,
            0.1, 1),
        ClassInfo(
            13, "Shaman", 2, "Juggernaut", "Axes", "Physical",
            1, 1,
            0.3, 3,
            0.25, 1,
            0.05, 0,
            0.15, 0,
            0.25, 1,
            0.2, 0,
            0.1, 0,
            0.2, 2),
        ClassInfo(
            14, "Shaman", 2, "Waveseer", "Focus", "Magical",
            1, 2,
            0.2, -2,
            0.1, -2,
            0.3, 5,
            0.15, 1,
            0.1, -3,
            0.25, 1,
            0.25, 3,
            0.1, -1),
        ClassInfo(
            15, "Shaman", 2, "Elementalist", "Relics", "Magical",
            1, 2,
            0.15, -5,
            0.3, 3,
            0.1, 0,
            0.25, 3,
            0.1, -2,
            0.2, 0,
            0.3, 4,
            0.05, -1),
        ClassInfo(
            16, "Shaman", 2, "Ritualist", "Daggers", "Magical",
            1, 2,
            0.4, 7,
            0.25, 1,
            0.15, 1,
            0.15, 0,
            0.05, -3,
            0.05, -3,
            0.2, 0,
            0.3, 4),
        ClassInfo(
            17, "Adept", 2, "Gale", "Swords", "Physical",
            1, 1,
            0.25, -2,
            0.15, 0,
            0.3, 3,
            0.25, 1,
            0.05, -1,
            0.05, -1,
            0.15, 1,
            0.3, 4),
        ClassInfo(
            18, "Adept", 2, "Conduit", "Relics", "Magical",
            1, 2,
            0.1, -3,
            0.3, 4,
            0.1, -1,
            0.15, 0,
            0.05, -2,
            0.25, 2,
            0.35, 4,
            0.25, 3),
        ClassInfo(
            19, "Adept", 2, "Frigillan", "Axes", "Physical",
            1, 1,
            0.45, 7,
            0.3, 3,
            0.1, -2,
            0.1, -1,
            0.3, 1,
            0.1, -2,
            0.05, 3,
            0.15, -1),
        ClassInfo(
            20, "Adept", 2, "Monk", "Focus", "Physical",
            1, 1,
            0.2, 2,
            0.15, 1,
            0.25, 1,
            0.3, 3,
            0.1, -1,
            0.2, 0,
            0.25, 2,
            0.05, -2),
        ClassInfo(
            21, "Vanguard", 3, "Reaper", "Axes", "Physical",
            1, 1,
            0.25, 3,
            0.25, 1,
            0.15, 1,
            0.25, 4,
            0.1, 0,
            0.0, 0,
            0.3, 4,
            0.35, 5),
        ClassInfo(
            22, "Vanguard", 3, "Ancarant", "Daggers", "Physical",
            1, 1,
            0.0, -3,
            0.1, -1,
            0.35, 5,
            0.25, 3,
            0.0, -3,
            0.25, 3,
            0.3, 4,
            0.2, 3),
        ClassInfo(
            23, "Vanguard", 3, "Ellisant", "Bows", "Magical",
            2, 2,
            0.15, 2,
            0.3, 3,
            0.1, -5,
            0.3, 4,
            0.2, 1,
            0.1, 1,
            0.35, 5,
            0.1, 0),
        ClassInfo(
            24, "Vanguard", 3, "Champion", "Swords", "Physical",
            1, 1,
            0.45, 10,
            0.35, 4,
            0.05, -1,
            0.2, 0,
            0.3, 3,
            0.05, 0,
            0.15, 1,
            0.05, -1),
        ClassInfo(
            25, "Hunter", 3, "Warden", "Axes", "Physical",
            1, 1,
            0.25, 5,
            0.35, 5,
            0.2, 1,
            0.15, -2,
            0.2, 3,
            0.1, -1,
            0.05, -2,
            0.15, 1),
        ClassInfo(
            26, "Hunter", 3, "Slayer", "Daggers", "Physical",
            1, 2,
            0.2, 2,
            0.2, 0,
            0.3, 3,
            0.3, 2,
            0.05, -1,
            0.1, 0,
            0.05, -1,
            0.2, 4),
        ClassInfo(
            27, "Hunter", 3, "Beastmaster", "Bows", "Physical",
            1, 2,
            0.4, 11,
            0.2, 1,
            0.05, -2,
            0.15, -1,
            0.25, 1,
            0.25, 1,
            0.45, 7,
            0.05, -2),
        ClassInfo(
            28, "Hunter", 3, "Deadeye", "Bows", "Physical",
            2, 2,
            0.15, -1,
            0.3, 3,
            0.35, 5,
            0.25, 3,
            0.1, 0,
            0.05, -1,
            0.25, 1,
            0.1, 0),
        ClassInfo(
            29, "Summoner", 3, "Cosmician", "Focus", "Magical",
            1, 2,
            0.3, 5,
            0.2, 3,
            0.05, 0,
            0.1, -1,
            0.25, 3,
            0.1, -3,
            0.4, 7,
            0.2, 4),
        ClassInfo(
            30, "Summoner", 3, "Necromancer", "Focus", "Magical",
            1, 2,
            0.2, 1,
            0.3, 5,
            0.1, 0,
            0.25, 4,
            0.1, 0,
            0.3, 2,
            0.1, 2,
            0.05, -2),
        ClassInfo(
            31, "Summoner", 3, "Relic Knight", "Swords", "Physical",
            1, 1,
            0.35, 13,
            0.2, 1,
            0.1, -1,
            0.1, 0,
            0.3, 5,
            0.3, 0,
            0.1, 1,
            0.1, -2),
        ClassInfo(
            32, "Summoner", 3, "Loremaster", "Relics", "Physical",
            1, 2,
            0.25, 1,
            0.25, 1,
            0.3, 3,
            0.1, 1,
            0.05, 0,
            0.05, -1,
            0.25, 4,
            0.1, 0),
        ClassInfo(
            33, "Shaman", 3, "Dreadnought", "Axes", "Physical",
            1, 1,
            0.3, 7,
            0.25, 3,
            0.05, -1,
            0.15, 0,
            0.3, 3,
            0.25, 1,
            0.1, 0,
            0.05, 3),
        ClassInfo(
            34, "Shaman", 3, "Tidecaller", "Focus", "Magical",
            1, 2,
            0.2, 2,
            0.15, -1,
            0.3, 6,
            0.15, 2,
            0.1, -3,
            0.2, 1,
            0.35, 5,
            0.1, -1),
        ClassInfo(
            35, "Shaman", 3, "Spirit Keeper", "Relics", "Magical",
            1, 2,
            0.1, -2,
            0.35, 5,
            0.1, 0,
            0.25, 4,
            0.1, -2,
            0.2, 0,
            0.4, 7,
            0.05, -1),
        ClassInfo(
            36, "Shaman", 3, "Hemomancer", "Daggers", "Magical",
            1, 2,
            0.45, 12,
            0.25, 2,
            0.2, 1,
            0.15, 2,
            0.0, -3,
            0.0, -3,
            0.3, 2,
            0.35, 6),
        ClassInfo(
            37, "Adept", 3, "Tempest", "Swords", "Physical",
            1, 1,
            0.15, 2,
            0.15, 0,
            0.35, 4,
            0.25, 2,
            0.05, -1,
            0.05, -1,
            0.2, 2,
            0.3, 5),
        ClassInfo(
            38, "Adept", 3, "Storm Keeper", "Relics", "Magical",
            1, 2,
            0.1, -1,
            0.35, 6,
            0.1, -1,
            0.15, 0,
            0.05, -2,
            0.25, 3,
            0.4, 6,
            0.25, 5),
        ClassInfo(
            39, "Adept", 3, "Godfrost", "Axes", "Physical",
            1, 1,
            0.5, 11,
            0.35, 5,
            0.1, -2,
            0.15, 0,
            0.35, 3,
            0.05, -1,
            0.1, 0,
            0.1, -1),
        ClassInfo(
            40, "Adept", 3, "Ascendant", "Focus", "Physical",
            1, 1,
            0.15, 3,
            0.25, 2,
            0.3, 2,
            0.3, 5,
            0.1, 0,
            0.1, 2,
            0.3, 4,
            0.05, -2),

    };
}

std::vector<Character> InitializeCharacters()
{
    return {
        Character(
            1,
            "Gwyn", "Vanguard",
            29, 0.5,
            7, 0.3,
            5, 0.25,
            6, 0.20,
            7, 0.25,
            2, 0.20,
            6, 0.25,
            5, 0.20,
            {1}, {"Vanguard"}, {28, 6, 5, 6, 6, 2, 5, 5}),
        Character(
            2,
            "Riordan", "Hunter",
            30, 0.55,
            7, 0.35,
            4, 0.15,
            5, 0.10,
            5, 0.25,
            5, 0.30,
            4, 0.25,
            5, 0.25,
            {1}, {"Hunter"}, {30, 7, 4, 5, 5, 5, 4, 5}),
        Character(
            3,
            "Arthur", "Summoner", 24, 0.35,
            6, 0.30,
            6, 0.25,
            5, 0.20,
            1, 0.15,
            7, 0.30,
            8, 0.4,
            3, 0.15,
            {1}, {"Summoner"}, {24, 6, 6, 5, 1, 7, 8, 3}),
        Character(
            4,
            "Cassandra", "Shaman", 26, 0.40,
            5, 0.25,
            6, 0.3,
            5, 0.15,
            4, 0.1,
            6, 0.25,
            5, 0.3,
            6, 0.25,
            {1}, {"Shaman"}, {25, 5, 6, 5, 4, 5, 5, 6}),
        Character(
            5,
            "Saxon", "Adept", 27, 0.35,
            5, 0.35,
            8, 0.20,
            6, 0.15,
            4, 0.35,
            2, 0.15,
            5, 0.3,
            4, 0.10,
            {1}, {"Adept"}, {27, 5, 8, 6, 4, 2, 5, 4}),
        Character(
            6,
            "Alden", "Sumooner",
            25, 0.50,
            5, 0.25,
            6, 0.2,
            6, 0.10,
            2, 0.25,
            6, 0.25,
            6, 0.3,
            2, 0.10,
            {8}, {"Scholar"}, {32, 7, 11, 8, 5, 7, 11, 4}),
        Character(
            7,
            "Valeria", "Vanguard",
            23, 0.40,
            5, 0.20,
            8, 0.3,
            7, 0.30,
            3, 0.15,
            4, 0.30,
            7, 0.3,
            3, 0.05,
            {5}, {"Nightblade"}, {23, 4, 13, 11, 1, 9, 9, 6}),
        Character(
            8,
            "Benji", "Vanguard", 29, 0.40,
            8, 0.40,
            4, 0.1,
            3, 0.15,
            7, 0.35,
            3, 0.25,
            3, 0.05,
            9, 0.30,
            {5}, {"Gallant"}, {40, 12, 4, 4, 10, 3, 4, 10}),
        Character(
            9,
            "Khamari", "Shaman",
            29, 0.50,
            6, 0.25,
            5, 0.20,
            2, 0.15,
            6, 0.3,
            8, 0.35,
            5, 0.15,
            3, 0.15,
            {8}, {"Ritualist"}, {44, 10, 9, 6, 6, 8, 7, 9}),
        Character(
            10,
            "Zanele", "Hunter",
            23, 0.35,
            5, 0.25,
            7, 0.25,
            8, 0.30,
            3, 0.15,
            5, 0.25,
            7, 0.4,
            3, 0.15,
            {6}, {"Quickdraw"}, {25, 8, 14, 13, 3, 6, 10, 4}),
        Character(
            11,
            "Zuhair", "Adept",
            31, 0.50,
            4, 0.25,
            6, 0.2,
            6, 0.25,
            3, 0.1,
            7, 0.30,
            6, 0.35,
            5, 0.20,
            {10}, {"Frigillan"}, {49, 10, 7, 9, 6, 9, 13, 8}),
        Character(
            12,
            "Eve", "Hunter",
            25, 0.40,
            4, 0.20,
            8, 0.35,
            7, 0.25,
            2, 0.1,
            3, 0.15,
            3, 0.15,
            7, 0.40,
            {13}, {"Cutthroat"}, {37, 7, 17, 14, 5, 8, 6, 17}),
        Character(
            13,
            "Haoran", "Shaman", 22, 0.30,
            8, 0.35,
            4, 0.15,
            5, 0.30,
            7, 0.25,
            7, 0.25,
            7, 0.4,
            2, 0.05,
            {15}, {"Waveseer"}, {34, 13, 13, 12, 9, 13, 17}),
        Character(
            14,
            "Mashal", "Adept",
            25, 0.50,
            6, 0.30,
            7, 0.25,
            8, 0.20,
            6, 0.25,
            2, 0.20,
            4, 0.25,
            3, 0.20,
            {18}, {"Gale"}, {41, 14, 17, 17, 13, 6, 10, 12}),
        Character(
            15,
            "Aya", "Summoner",
            22, 0.30,
            8, 0.35,
            7, 0.3,
            7, 0.25,
            1, 0.05,
            3, 0.05,
            4, 0.25,
            7, 0.35,
            {19}, {"Warlock"}, {39, 22, 15, 16, 3, 8, 10, 14}),
        Character(
            16,
            "Tusk", "Hunter", 33, 0.70,
            9, 0.40,
            4, 0.2,
            5, 0.25,
            6, 0.30,
            2, 0.0,
            2, 0.1,
            3, 0.15,
            {24}, {"Ranger"}, {70, 25, 13, 14, 18, 6, 5, 10}),
        Character(
            17,
            "Laurai", "shaman",
            29, 0.60,
            6, 0.30,
            6, 0.3,
            6, 0.25,
            6, 0.3,
            3, 0.0,
            4, 0.15,
            3, 0.10,
            {24}, {"Elementalist"}, {56, 19, 17, 18, 14, 7, 16, 7}),
        Character(
            18,
            "Tal'Dera", "Adept", 22, 0.20,
            7, 0.40,
            7, 0.25,
            8, 0.40,
            2, 0.05,
            2, 0.05,
            3, 0.1,
            8, 0.40,
            {30}, {"Conduit"}, {48, 28, 19, 25, 5, 9, 14, 26}),
        Character(
            19,
            "Vissarion", "Vanguard",
            30, 0.60,
            6, 0.25,
            5, 0.15,
            7, 0.30,
            7, 0.35,
            2, 0.05,
            7, 0.4,
            3, 0.10,
            {30}, {"Devoted"}, {67, 18, 17, 21, 22, 6, 25, 15}),
        Character(
            20,
            "Calith", "Summoner",
            27, 0.40,
            6, 0.25,
            5, 0.20,
            8, 0.35,
            3, 0.15,
            6, 0.20,
            2, 0.15,
            8, 0.35,
            {32}, {"Geomancer"}, {68, 21, 17, 22, 16, 15, 15, 26}),
    };
}