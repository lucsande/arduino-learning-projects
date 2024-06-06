#include "notes.h"

// SONGS
// Mario
// https://www.sheetmusicplus.com/en/product/super-mario-bros-theme-22437045.html
int beatDurationMs = 150;
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

    // BARRA

    {fourthOctave, doFreq, quarter},
    {fourthOctave, silenceFreq, quarter},
    {thirdOctave, silenceFreq, quarter},
    {thirdOctave, solFreq, quarter},

    {thirdOctave, silenceFreq, half},
    {thirdOctave, miFreq, quarter},
    {thirdOctave, silenceFreq, quarter},

    {thirdOctave, silenceFreq, quarter},
    {thirdOctave, laFreq, quarter},
    {thirdOctave, silenceFreq, quarter},
    {thirdOctave, siFreq, quarter},

    {thirdOctave, silenceFreq, quarter},
    {thirdOctave, siBemolFreq, quarter},
    {thirdOctave, laFreq, quarter},
    {thirdOctave, silenceFreq, quarter},

    {thirdOctave, solFreq, quarter},
    {fourthOctave, miFreq, eighth},
    {fourthOctave, solFreq, eighth},
    {fourthOctave, laFreq, quarter},
    {thirdOctave, silenceFreq, quarter},

    {fourthOctave, faFreq, quarter},
    {fourthOctave, solFreq, quarter},
    {fourthOctave, silenceFreq, quarter},
    {fourthOctave, miFreq, quarter},

    {fourthOctave, silenceFreq, quarter},
    {fourthOctave, doFreq, quarter},
    {fourthOctave, reFreq, quarter},
    {thirdOctave, siFreq, quarter},

    // BARRA
    {fourthOctave, silenceFreq, half},
    {fourthOctave, solFreq, quarter},
    {fourthOctave, faSustFreq, quarter},

    {fourthOctave, faFreq, quarter},
    {fourthOctave, reSustFreq, quarter},
    {fourthOctave, miFreq, quarter},

    {thirdOctave, silenceFreq, quarter},
    {thirdOctave, solFreq, quarter},
    {thirdOctave, laFreq, quarter},
    {fourthOctave, doFreq, quarter},

    {fourthOctave, silenceFreq, quarter},
    {fourthOctave, laFreq, quarter},
    {fourthOctave, doFreq, quarter},
    {fourthOctave, reFreq, quarter},

    {fourthOctave, silenceFreq, half},
    {fourthOctave, solFreq, quarter},
    {fourthOctave, faSustFreq, quarter},

    {fourthOctave, faFreq, quarter},
    {fourthOctave, reSustFreq, quarter},
    {fourthOctave, miFreq, quarter},

    {fourthOctave, silenceFreq, quarter},
    {fourthOctave, doFreq, quarter},
    {fourthOctave, silenceFreq, quarter},
    {fourthOctave, doFreq, quarter},

    {fourthOctave, doFreq, quarter},
    {fourthOctave, silenceFreq, quarter},
    {fourthOctave, silenceFreq, half},

    // apaguei essa seção pq tava esquisita
    // {fourthOctave, silenceFreq, half},
    // {fourthOctave, solFreq, quarter},
    // {fourthOctave, faSustFreq, quarter},
};