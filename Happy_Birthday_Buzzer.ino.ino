const int buzzer = 8;

// Lower octave notes for a softer sound
#define C3 131
#define D3 147
#define E3 165
#define F3 175
#define G3 196
#define A3 220
#define C4 262

// Melody
int melody[] = {
  C3, C3, D3, C3, F3, E3,
  C3, C3, D3, C3, G3, F3,
  C3, C3, C4, A3, F3, E3, D3,
  A3, A3, F3, G3, F3, C4
};

// Duration (ms)
int duration[] = {
  300, 300, 600, 600, 600, 900,
  300, 300, 600, 600, 600, 900,
  300, 300, 600, 600, 600, 600, 900,
  300, 300, 600, 600, 600, 900
};

void setup() {
}

void loop() {

  for (int i = 0; i < 25; i++) {

    tone(buzzer, melody[i], duration[i]);

    delay(duration[i]);

    noTone(buzzer);

    delay(60);   // Small pause between notes
  }

  delay(3000);   // Wait 3 seconds before repeating
}