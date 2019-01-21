#include <stdio.h>
#include <math.h>

/*QUESTION 1*/
int main() {
  char *KEY_NAMES[] = {"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};

  int ARRAY_SIZE = (sizeof(KEY_NAMES)/sizeof(KEY_NAMES[0]));

  int NUM_OF_KEYS = 88;
  double INITIAL_FREQUENCY = 27.5;

  int i;
  for (i = 0; i < NUM_OF_KEYS; i = i + 1) {
    double newi = i;
    double newAS = ARRAY_SIZE;
    char *keyName = KEY_NAMES[i % ARRAY_SIZE];
    double exponent = (newi / newAS);

    double frequency = INITIAL_FREQUENCY * pow(2.0, exponent);
    printf("%2s", keyName);
    printf("%16.4lf\n", frequency);
  }

  return 1;







}
