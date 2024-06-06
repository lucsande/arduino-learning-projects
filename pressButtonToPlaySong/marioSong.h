#include "notes.h"

// SONGS
// Mario
// https://www.sheetmusicplus.com/en/product/super-mario-bros-theme-22437045.html
int beatsPerMin = 180;
Note song[] = {
    {fourthOctave, miFreq, quarter},
    {fourthOctave, miFreq, quarter},
    {fourthOctave, silenceFreq, quarter},
    {fourthOctave, miFreq, quarter},

    {fourthOctave, silenceFreq, quarter},
    {fourthOctave, doFreq, quarter},
    {fourthOctave, miFreq, quarter},
    {fourthOctave, silenceFreq, quarter},

    {fourthOctave, solFreq, quarter},
    {fourthOctave, silenceFreq, quarter},
    {fourthOctave, silenceFreq, half},

    {thirdOctave, solFreq, quarter},
    {fourthOctave, silenceFreq, quarter},
    {fourthOctave, silenceFreq, half},
};