const int buzzer2 = 6;

// Definição das constantes para as notas musicais
const int NOTA_C0  = 16;
const int NOTA_CS0 = 17;
const int NOTA_D0  = 18;
const int NOTA_DS0 = 19;
const int NOTA_E0  = 21;
const int NOTA_F0  = 22;
const int NOTA_FS0 = 23;
const int NOTA_G0  = 25;
const int NOTA_GS0 = 26;
const int NOTA_A0  = 27;
const int NOTA_AS0 = 29;
const int NOTA_B0  = 31;

const int NOTA_C1  = 33;
const int NOTA_CS1 = 35;
const int NOTA_D1  = 37;
const int NOTA_DS1 = 39;
const int NOTA_E1  = 41;
const int NOTA_F1  = 44;
const int NOTA_FS1 = 46;
const int NOTA_G1  = 49;
const int NOTA_GS1 = 52;
const int NOTA_A1  = 55;
const int NOTA_AS1 = 58;
const int NOTA_B1  = 62;

const int NOTA_C2  = 65;
const int NOTA_CS2 = 69;
const int NOTA_D2  = 73;
const int NOTA_DS2 = 78;
const int NOTA_E2  = 82;
const int NOTA_F2  = 87;
const int NOTA_FS2 = 92;
const int NOTA_G2  = 98;
const int NOTA_GS2 = 104;
const int NOTA_A2  = 110;
const int NOTA_AS2 = 117;
const int NOTA_B2  = 123;

const int NOTA_C3  = 130;
const int NOTA_CS3 = 138;
const int NOTA_D3  = 146;
const int NOTA_DS3 = 155;
const int NOTA_E3  = 164;
const int NOTA_F3  = 174;
const int NOTA_FS3 = 185;
const int NOTA_G3  = 196;
const int NOTA_GS3 = 207;
const int NOTA_A3  = 220;
const int NOTA_AS3 = 233;
const int NOTA_B3  = 246;

const int NOTA_C4  = 261;
const int NOTA_CS4 = 277;
const int NOTA_D4  = 293;
const int NOTA_DS4 = 311;
const int NOTA_E4  = 329;
const int NOTA_F4  = 349;
const int NOTA_FS4 = 369;
const int NOTA_G4  = 392;
const int NOTA_GS4 = 415;
const int NOTA_A4  = 440;
const int NOTA_AS4 = 466;
const int NOTA_B4  = 493;

const int NOTA_C5  = 523;
const int NOTA_CS5 = 554;
const int NOTA_D5  = 587;
const int NOTA_DS5 = 622;
const int NOTA_E5  = 659;
const int NOTA_F5  = 698;
const int NOTA_FS5 = 739;
const int NOTA_G5  = 783;
const int NOTA_GS5 = 830;
const int NOTA_A5  = 880;
const int NOTA_AS5 = 932;
const int NOTA_B5  = 987;

const int NOTA_C6  = 1046;
const int NOTA_CS6 = 1108;
const int NOTA_D6  = 1174;
const int NOTA_DS6 = 1244;
const int NOTA_E6  = 1318;
const int NOTA_F6  = 1396;
const int NOTA_FS6 = 1479;
const int NOTA_G6  = 1567;
const int NOTA_GS6 = 1661;
const int NOTA_A6  = 1760;
const int NOTA_AS6 = 1864;
const int NOTA_B6  = 1975;

const int NOTA_C7  = 2093;
const int NOTA_CS7 = 2217;
const int NOTA_D7  = 2349;
const int NOTA_DS7 = 2489;
const int NOTA_E7  = 2637;
const int NOTA_F7  = 2793;
const int NOTA_FS7 = 2959;
const int NOTA_G7  = 3135;
const int NOTA_GS7 = 3322;
const int NOTA_A7  = 3520;
const int NOTA_AS7 = 3729;
const int NOTA_B7  = 3951;

const int NOTA_C8  = 4186;
const int NOTA_CS8 = 4434;
const int NOTA_D8  = 4698;
const int NOTA_DS8 = 4978;
const int NOTA_E8  = 5274;
const int NOTA_F8  = 5587;
const int NOTA_FS8 = 5919;
const int NOTA_G8  = 6271;
const int NOTA_GS8 = 6644;
const int NOTA_A8  = 7040;
const int NOTA_AS8 = 7458;
const int NOTA_B8  = 7902;

// Fim das definições das notas musicais


// Array de nomes das notas musicais
const char *notas[] = {
  "NOTA_C0", "NOTA_CS0", "NOTA_D0", "NOTA_DS0", "NOTA_E0", "NOTA_F0", "NOTA_FS0", "NOTA_G0", "NOTA_GS0", "NOTA_A0", "NOTA_AS0", "NOTA_B0",
  "NOTA_C1", "NOTA_CS1", "NOTA_D1", "NOTA_DS1", "NOTA_E1", "NOTA_F1", "NOTA_FS1", "NOTA_G1", "NOTA_GS1", "NOTA_A1", "NOTA_AS1", "NOTA_B1",
  "NOTA_C2", "NOTA_CS2", "NOTA_D2", "NOTA_DS2", "NOTA_E2", "NOTA_F2", "NOTA_FS2", "NOTA_G2", "NOTA_GS2", "NOTA_A2", "NOTA_AS2", "NOTA_B2",
  "NOTA_C3", "NOTA_CS3", "NOTA_D3", "NOTA_DS3", "NOTA_E3", "NOTA_F3", "NOTA_FS3", "NOTA_G3", "NOTA_GS3", "NOTA_A3", "NOTA_AS3", "NOTA_B3",
  "NOTA_C4", "NOTA_CS4", "NOTA_D4", "NOTA_DS4", "NOTA_E4", "NOTA_F4", "NOTA_FS4", "NOTA_G4", "NOTA_GS4", "NOTA_A4", "NOTA_AS4", "NOTA_B4",
  "NOTA_C5", "NOTA_CS5", "NOTA_D5", "NOTA_DS5", "NOTA_E5", "NOTA_F5", "NOTA_FS5", "NOTA_G5", "NOTA_GS5", "NOTA_A5", "NOTA_AS5", "NOTA_B5",
  "NOTA_C6", "NOTA_CS6", "NOTA_D6", "NOTA_DS6", "NOTA_E6", "NOTA_F6", "NOTA_FS6", "NOTA_G6", "NOTA_GS6", "NOTA_A6", "NOTA_AS6", "NOTA_B6",
  "NOTA_C7", "NOTA_CS7", "NOTA_D7", "NOTA_DS7", "NOTA_E7", "NOTA_F7", "NOTA_FS7", "NOTA_G7", "NOTA_GS7", "NOTA_A7", "NOTA_AS7", "NOTA_B7",
  "NOTA_C8", "NOTA_CS8", "NOTA_D8", "NOTA_DS8", "NOTA_E8", "NOTA_F8", "NOTA_FS8", "NOTA_G8", "NOTA_GS8", "NOTA_A8", "NOTA_AS8", "NOTA_B8"
};

void setup() {
  //pinMode(buzzer1, OUTPUT);
  pinMode(buzzer2, OUTPUT);

 

}

void tocar(String nota, unsigned long duration, unsigned long tempo_entre_notas) {

 
  if (nota == "NOTA_C0") tone(buzzer2,NOTA_C0, duration);
  else if (nota == "NOTA_CS0") tone(buzzer2,NOTA_CS0, duration);
  else if (nota == "NOTA_D0") tone(buzzer2,NOTA_D0, duration);
  else if (nota == "NOTA_DS0") tone(buzzer2,NOTA_DS0, duration);
  else if (nota == "NOTA_E0") tone(buzzer2,NOTA_E0, duration);
  else if (nota == "NOTA_F0") tone(buzzer2,NOTA_F0, duration);
  else if (nota == "NOTA_FS0") tone(buzzer2,NOTA_FS0, duration);
  else if (nota == "NOTA_G0") tone(buzzer2,NOTA_G0, duration);
  else if (nota == "NOTA_GS0") tone(buzzer2,NOTA_GS0, duration);
  else if (nota == "NOTA_A0") tone(buzzer2,NOTA_A0, duration);
  else if (nota == "NOTA_AS0") tone(buzzer2,NOTA_AS0, duration);
  else if (nota == "NOTA_B0") tone(buzzer2,NOTA_B0, duration);
  else if (nota == "NOTA_C1") tone(buzzer2,NOTA_C1, duration);
  else if (nota == "NOTA_CS1") tone(buzzer2,NOTA_CS1, duration);
  else if (nota == "NOTA_D1") tone(buzzer2,NOTA_D1, duration);
  else if (nota == "NOTA_DS1") tone(buzzer2,NOTA_DS1, duration);
  else if (nota == "NOTA_E1") tone(buzzer2,NOTA_E1, duration);
  else if (nota == "NOTA_F1") tone(buzzer2,NOTA_F1, duration);
  else if (nota == "NOTA_FS1") tone(buzzer2,NOTA_FS1, duration);
  else if (nota == "NOTA_G1") tone(buzzer2,NOTA_G1, duration);
  else if (nota == "NOTA_GS1") tone(buzzer2,NOTA_GS1, duration);
  else if (nota == "NOTA_A1") tone(buzzer2,NOTA_A1, duration);
  else if (nota == "NOTA_AS1") tone(buzzer2,NOTA_AS1, duration);
  else if (nota == "NOTA_B1") tone(buzzer2,NOTA_B1, duration);
  else if (nota == "NOTA_C2") tone(buzzer2,NOTA_C2, duration);
  else if (nota == "NOTA_CS2") tone(buzzer2,NOTA_CS2, duration);
  else if (nota == "NOTA_D2") tone(buzzer2,NOTA_D2, duration);
  else if (nota == "NOTA_DS2") tone(buzzer2,NOTA_DS2, duration);
  else if (nota == "NOTA_E2") tone(buzzer2,NOTA_E2, duration);
  else if (nota == "NOTA_F2") tone(buzzer2,NOTA_F2, duration);
  else if (nota == "NOTA_FS2") tone(buzzer2,NOTA_FS2, duration);
  else if (nota == "NOTA_G2") tone(buzzer2,NOTA_G2, duration);
  else if (nota == "NOTA_GS2") tone(buzzer2,NOTA_GS2, duration);
  else if (nota == "NOTA_A2") tone(buzzer2,NOTA_A2, duration);
  else if (nota == "NOTA_AS2") tone(buzzer2,NOTA_AS2, duration);
  else if (nota == "NOTA_B2") tone(buzzer2,NOTA_B2, duration);
  else if (nota == "NOTA_C3") tone(buzzer2,NOTA_C3, duration);
  else if (nota == "NOTA_CS3") tone(buzzer2,NOTA_CS3, duration);
  else if (nota == "NOTA_D3") tone(buzzer2,NOTA_D3, duration);
  else if (nota == "NOTA_DS3") tone(buzzer2,NOTA_DS3, duration);
  else if (nota == "NOTA_E3") tone(buzzer2,NOTA_E3, duration);
  else if (nota == "NOTA_F3") tone(buzzer2,NOTA_F3, duration);
  else if (nota == "NOTA_FS3") tone(buzzer2,NOTA_FS3, duration);
  else if (nota == "NOTA_G3") tone(buzzer2,NOTA_G3, duration);
  else if (nota == "NOTA_GS3") tone(buzzer2,NOTA_GS3, duration);
  else if (nota == "NOTA_A3") tone(buzzer2,NOTA_A3, duration);
  else if (nota == "NOTA_AS3") tone(buzzer2,NOTA_AS3, duration);
  else if (nota == "NOTA_B3") tone(buzzer2,NOTA_B3, duration);
  else if (nota == "NOTA_C4") tone(buzzer2,NOTA_C4, duration);
  else if (nota == "NOTA_CS4") tone(buzzer2,NOTA_CS4, duration);
  else if (nota == "NOTA_D4") tone(buzzer2,NOTA_D4, duration);
  else if (nota == "NOTA_DS4") tone(buzzer2,NOTA_DS4, duration);
  else if (nota == "NOTA_E4") tone(buzzer2,NOTA_E4, duration);
  else if (nota == "NOTA_F4") tone(buzzer2,NOTA_F4, duration);
  else if (nota == "NOTA_FS4") tone(buzzer2,NOTA_FS4, duration);
  else if (nota == "NOTA_G4") tone(buzzer2,NOTA_G4, duration);
  else if (nota == "NOTA_GS4") tone(buzzer2,NOTA_GS4, duration);
  else if (nota == "NOTA_A4") tone(buzzer2,NOTA_A4, duration);
  else if (nota == "NOTA_AS4") tone(buzzer2,NOTA_AS4, duration);
  else if (nota == "NOTA_B4") tone(buzzer2,NOTA_B4, duration);
  else if (nota == "NOTA_C5") tone(buzzer2,NOTA_C5, duration);
  else if (nota == "NOTA_CS5") tone(buzzer2,NOTA_CS5, duration);
  else if (nota == "NOTA_D5") tone(buzzer2,NOTA_D5, duration);
  else if (nota == "NOTA_DS5") tone(buzzer2,NOTA_DS5, duration);
  else if (nota == "NOTA_E5") tone(buzzer2,NOTA_E5, duration);
  else if (nota == "NOTA_F5") tone(buzzer2,NOTA_F5, duration);
  else if (nota == "NOTA_FS5") tone(buzzer2,NOTA_FS5, duration);
  else if (nota == "NOTA_G5") tone(buzzer2,NOTA_G5, duration);
  else if (nota == "NOTA_GS5") tone(buzzer2,NOTA_GS5, duration);
  else if (nota == "NOTA_A5") tone(buzzer2,NOTA_A5, duration);
  else if (nota == "NOTA_AS5") tone(buzzer2,NOTA_AS5, duration);
  else if (nota == "NOTA_B5") tone(buzzer2,NOTA_B5, duration);
  else if (nota == "NOTA_C6") tone(buzzer2,NOTA_C6, duration);
  else if (nota == "NOTA_CS6") tone(buzzer2,NOTA_CS6, duration);
  else if (nota == "NOTA_D6") tone(buzzer2,NOTA_D6, duration);
  else if (nota == "NOTA_DS6") tone(buzzer2,NOTA_DS6, duration);
  else if (nota == "NOTA_E6") tone(buzzer2,NOTA_E6, duration);
  else if (nota == "NOTA_F6") tone(buzzer2,NOTA_F6, duration);
  else if (nota == "NOTA_FS6") tone(buzzer2,NOTA_FS6, duration);
  else if (nota == "NOTA_G6") tone(buzzer2,NOTA_G6, duration);
  else if (nota == "NOTA_GS6") tone(buzzer2,NOTA_GS6, duration);
  else if (nota == "NOTA_A6") tone(buzzer2,NOTA_A6, duration);
  else if (nota == "NOTA_AS6") tone(buzzer2,NOTA_AS6, duration);
  else if (nota == "NOTA_B6") tone(buzzer2,NOTA_B6, duration);
  else if (nota == "NOTA_C7") tone(buzzer2,NOTA_C7, duration);
  else if (nota == "NOTA_CS7") tone(buzzer2,NOTA_CS7, duration);
  else if (nota == "NOTA_D7") tone(buzzer2,NOTA_D7, duration);
  else if (nota == "NOTA_DS7") tone(buzzer2,NOTA_DS7, duration);
  else if (nota == "NOTA_E7") tone(buzzer2,NOTA_E7, duration);
  else if (nota == "NOTA_F7") tone(buzzer2,NOTA_F7, duration);
  else if (nota == "NOTA_FS7") tone(buzzer2,NOTA_FS7, duration);
  else if (nota == "NOTA_G7") tone(buzzer2,NOTA_G7, duration);
  else if (nota == "NOTA_GS7") tone(buzzer2,NOTA_GS7, duration);
  else if (nota == "NOTA_A7") tone(buzzer2,NOTA_A7, duration);
  else if (nota == "NOTA_AS7") tone(buzzer2,NOTA_AS7, duration);
  else if (nota == "NOTA_B7") tone(buzzer2,NOTA_B7, duration);
  else if (nota == "NOTA_C8") tone(buzzer2,NOTA_C8, duration);
  else if (nota == "NOTA_CS8") tone(buzzer2,NOTA_CS8, duration);
  else if (nota == "NOTA_D8") tone(buzzer2,NOTA_D8, duration);
  else if (nota == "NOTA_DS8") tone(buzzer2,NOTA_DS8, duration);
  else if (nota == "NOTA_E8") tone(buzzer2,NOTA_E8, duration);
  else if (nota == "NOTA_F8") tone(buzzer2,NOTA_F8, duration);
  else if (nota == "NOTA_FS8") tone(buzzer2,NOTA_FS8, duration);
  else if (nota == "NOTA_G8") tone(buzzer2,NOTA_G8, duration);
  else if (nota == "NOTA_GS8") tone(buzzer2,NOTA_GS8, duration);
  else if (nota == "NOTA_A8") tone(buzzer2,NOTA_A8, duration);
  else if (nota == "NOTA_AS8") tone(buzzer2,NOTA_AS8, duration);
  else if (nota == "NOTA_B8") tone(buzzer2,NOTA_B8, duration);

  delay(tempo_entre_notas);
}



void loop() {


tocar("NOTA_E4", 100, 200);
tocar("NOTA_E4", 100, 300);
tocar("NOTA_E4", 100, 300);
tocar("NOTA_C4", 100, 200);
tocar("NOTA_E4", 100, 300);
tocar("NOTA_G4", 100, 600);
tocar("NOTA_G4", 100, 600);


// DO-SOL-MI-LA-SI-LA-SOL
tocar("NOTA_C4", 100, 400);
tocar("NOTA_G4", 100, 400);
tocar("NOTA_E4", 100, 450);
tocar("NOTA_A4", 100, 300);
tocar("NOTA_B4", 100, 290);
tocar("NOTA_A4", 100, 200);
tocar("NOTA_G4", 100, 400);

/*
// DO-DO-SOL-LA-MI-SOL-MI-DO-RE-SOL
tocar("NOTA_C4", 100, 200);
tocar("NOTA_C4", 100, 300);

tocar("NOTA_G4", 100, 300);

tocar("NOTA_A4", 100, 200);

tocar("NOTA_E4", 100, 300);

tocar("NOTA_G4", 100, 300);

tocar("NOTA_E4", 100, 300);

tocar("NOTA_C4", 100, 200);
tocar("NOTA_D4", 100, 300);
tocar("NOTA_G4", 100, 200);
/*
// DO-DO-MI-SOL-DO - DO-DO-RE-DO-RE-MI
tocar("NOTA_C4", 500, 50);
tocar("NOTA_C4", 500, 50);
tocar("NOTA_E4", 500, 50);
tocar("NOTA_G4", 500, 50);
tocar("NOTA_C4", 500, 50);
tocar("NOTA_C4", 500, 50);
tocar("NOTA_C4", 500, 50);
tocar("NOTA_D4", 500, 50);
tocar("NOTA_C4", 500, 50);
tocar("NOTA_D4", 500, 50);
tocar("NOTA_E4", 500, 50);

// DO-DO-MI-SOL-DO-SOL-SOL-SOL
tocar("NOTA_C4", 500, 50);
tocar("NOTA_C4", 500, 50);
tocar("NOTA_E4", 500, 50);
tocar("NOTA_G4", 500, 50);
tocar("NOTA_C4", 500, 50);
tocar("NOTA_G4", 500, 50);
tocar("NOTA_G4", 500, 50);
tocar("NOTA_G4", 500, 50);

// DO-DO-MI-SOL-DO - DO-DO-RE-DO-RE-MI
tocar("NOTA_C4", 500, 50);
tocar("NOTA_C4", 500, 50);
tocar("NOTA_E4", 500, 50);
tocar("NOTA_G4", 500, 50);
tocar("NOTA_C4", 500, 50);
tocar("NOTA_C4", 500, 50);
tocar("NOTA_C4", 500, 50);
tocar("NOTA_D4", 500, 50);
tocar("NOTA_C4", 500, 50);
tocar("NOTA_D4", 500, 50);
tocar("NOTA_E4", 500, 50);

// MI-SOL-DO
tocar("NOTA_E4", 500, 50);
tocar("NOTA_G4", 500, 50);
tocar("NOTA_C4", 500, 50);
*/
  
}
