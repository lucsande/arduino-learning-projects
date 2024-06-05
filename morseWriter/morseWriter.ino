#include <stdio.h>
#include <string.h>

int buzzFrequency = 200;
int morseUnitMs = 150;

// the setup function runs once when you press reset or power the board
void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  const char *myString = "SOS";
  writeText(myString);

  delay(1500);
}

void dot()
{
  tone(10, buzzFrequency);
  digitalWrite(LED_BUILTIN, HIGH);

  delay(morseUnitMs);

  noTone(10);
  digitalWrite(LED_BUILTIN, LOW);

  delay(morseUnitMs);
}

void dash()
{
  tone(10, buzzFrequency);
  digitalWrite(LED_BUILTIN, HIGH);

  delay(morseUnitMs * 3);

  noTone(10);
  digitalWrite(LED_BUILTIN, LOW);

  delay(morseUnitMs);
}

void betweenLettersSilence() { delay(morseUnitMs * 2); }

void writeText(const char *str)
{
  for (int i = 0; i < strlen(str); i++)
  {
    writeLetter(str[i]);
    betweenLettersSilence();
  }
}

void writeLetter(char letter)
{
  switch (letter)
  {
  case 'A':
    dot();
    dash();
    break;

  case 'B':
    dash();
    dot();
    dot();
    dot();
    break;

  case 'C':
    dash();
    dot();
    dash();
    dot();
    break;

  case 'D':
    dash();
    dot();
    dot();
    break;

  case 'E':
    dot();
    break;

  case 'F':
    dot();
    dash();
    dot();
    dot();
    break;

  case 'G':
    dash();
    dash();
    dot();
    break;

  case 'H':
    dot();
    dot();
    dot();
    dot();
    break;

  case 'I':
    dot();
    dot();
    break;

  case 'K':
    dash();
    dot();
    dash();
    break;

  case 'L':
    dot();
    dash();
    dot();
    dot();
    break;

  case 'M':
    dash();
    dash();
    break;

  case 'N':
    dash();
    dot();
    break;

  case 'O':
    dash();
    dash();
    dash();
    break;

  case 'P':
    dot();
    dash();
    dash();
    dot();
    break;

  case 'Q':
    dash();
    dash();
    dot();
    dash();
    break;

  case 'R':
    dot();
    dash();
    dot();
    break;

  case 'S':
    dot();
    dot();
    dot();
    break;

  case 'T':
    dash();
    break;

  case 'U':
    dot();
    dot();
    dash();
    break;

  case 'V':
    dot();
    dot();
    dot();
    dash();
    break;

  case 'W':
    dot();
    dash();
    dash();
    break;

  case 'X':
    dash();
    dot();
    dot();
    dash();
    break;

  case 'Y':
    dash();
    dot();
    dash();
    dash();
    break;

  case 'Z':
    dash();
    dash();
    dot();
    dot();
    break;

  case '0':
    dash();
    dash();
    dash();
    dash();
    dash();
    break;

  case '1':
    dot();
    dash();
    dash();
    dash();
    dash();
    break;

  case '2':
    dot();
    dot();
    dash();
    dash();
    dash();
    break;

  case '3':
    dot();
    dot();
    dot();
    dash();
    dash();
    break;

  case '4':
    dot();
    dot();
    dot();
    dot();
    dash();
    break;

  case '5':
    dot();
    dot();
    dot();
    dot();
    dot();
    break;

  case '6':
    dash();
    dot();
    dot();
    dot();
    dot();
    break;

  case '7':
    dash();
    dash();
    dot();
    dot();
    dot();
    break;

  case '8':
    dash();
    dash();
    dash();
    dot();
    dot();
    break;

  case '9':
    dash();
    dash();
    dash();
    dash();
    dot();
    break;

  case '.':
    dot();
    dash();
    dot();
    dash();
    dot();
    dash();
    break;

  case ',':
    dash();
    dash();
    dot();
    dot();
    dash();
    dash();
    break;

  case '?':
    dot();
    dot();
    dash();
    dash();
    dot();
    dot();
    break;

  case ' ':
    betweenLettersSilence();
    betweenLettersSilence();
    break;

  default:
    break;
  }
}