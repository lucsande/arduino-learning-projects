#include <stdio.h>
#include <string.h>

// importar apenas um arquivo de música, já que todos eles exportam vars song e beatsPerMin
#include "marioSong.h"

int PLAY_BUTTON = 8;
int INTENSIFY_BUTTON = 9;
int BUZZER = 10;

int currentNotePosition = 0;

// the setup function runs once when you press reset or power the board
void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(INTENSIFY_BUTTON, INPUT);
  pinMode(PLAY_BUTTON, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{

  if (digitalRead(PLAY_BUTTON) == HIGH)
  {
    playNote(song[currentNotePosition]);
  }
  else
  {
    noTone(BUZZER);
    digitalWrite(LED_BUILTIN, LOW);
  }

  pauseBeforeRestart();
}

void playNote(Note note)
{
  int intensity = digitalRead(INTENSIFY_BUTTON) == HIGH ? 2 : 1;

  int songNotesCount = sizeof(song) / sizeof(song[0]);
  currentNotePosition >= songNotesCount ? currentNotePosition = 0 : currentNotePosition++;

  int frequency = note.frequency * pow(2, note.octave) * pow(intensity, 2);

  tone(BUZZER, frequency);
  digitalWrite(LED_BUILTIN, HIGH);

  delay(note.beats * beatDurationMs / intensity);

  digitalWrite(LED_BUILTIN, LOW);
}

void pauseBeforeRestart()
{
  // pra loop da mesma música ter um respiro entre o fim dela e o recomeço
  if (currentNotePosition == 0)
  {
    delay(750);
  }
}
