
struct Note
{
    int octave;
    float frequency;
    float beats;
};

int currentNotePosition = 0;

int BUTTON = 9;
int BUZZER = 10;

int firstOctave = 1;
int secondOctave = 2;
int thirdOctave = 3;
int fourthOctave = 4;
int fifthOctave = 5;
int sixthOctave = 6;
int seventhOctave = 7;

// https://mixbutton.com/mixing-articles/music-note-to-frequency-chart/
float silenceFreq = 0;
float doFreq = 16.35;
float reFreq = 18.35;
float miFreq = 20.60;
float faFreq = 21.83;
float solFreq = 24.50;
float laFreq = 27.50;
float siFreq = 30.87;

// https://www.pinterest.co.uk/pin/14073817568351809/
// https://www.shutterstock.com/pt/image-vector/vector-illustration-musical-notes-pauses-black-565452850
float whole = 4;      // 4 beat
float dottedHalf = 3; // 3 beat
float half = 2;       // 2 beat
float quarter = 1;    // 1 beat
float eighth = 0.5;   // 1/2 beat
float sixteenth = 1;  // 1/4 beat