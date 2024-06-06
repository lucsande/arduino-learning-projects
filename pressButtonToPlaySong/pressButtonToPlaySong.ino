#include <stdio.h>
#include <string.h>

// importar apenas um arquivo de música, já que todos eles exportam vars song e beatsPerMin
#include "marioSong.h"

// the setup function runs once when you press reset or power the board
void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BUTTON, INPUT);
  pinMode(BUZZER, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  int beatDurationMs = 60 * 1000 / beatsPerMin;

  if (digitalRead(9) == HIGH)
  {
    Note currentNote = song[currentNotePosition];

    playNote(currentNote);
    delay(currentNote.beats * beatDurationMs);
  }
  else
  {
    noTone(BUZZER);
    digitalWrite(LED_BUILTIN, LOW);
  }
}

void playNote(Note note)
{
  if (currentNotePosition == 0)
  {
    delay(500); // pra loop da mesma música ter um respiro entre o fim dela e o recomeço
  }

  int frequency = note.frequency * pow(2, note.octave);
  tone(BUZZER, frequency);
  digitalWrite(LED_BUILTIN, HIGH);

  int songNotesCount = sizeof(song) / sizeof(song[0]);
  currentNotePosition >= songNotesCount ? currentNotePosition = 0 : currentNotePosition++;
}
