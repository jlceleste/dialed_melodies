
  #define NOTE_B0 31

  #define NOTE_C1 33

  #define NOTE_CS1 35

  #define NOTE_D1 37

  #define NOTE_DS1 39

  #define NOTE_E1 41

  #define NOTE_F1 44

  #define NOTE_FS1 46

  #define NOTE_G1 49

  #define NOTE_GS1 52

  #define NOTE_A1 55

  #define NOTE_AS1 58

  #define NOTE_B1 62

  #define NOTE_C2 65

  #define NOTE_CS2 69

  #define NOTE_D2 73

  #define NOTE_DS2 78

  #define NOTE_E2 82

  #define NOTE_F2 87

  #define NOTE_FS2 93

  #define NOTE_G2 98

  #define NOTE_GS2 104

  #define NOTE_A2 110

  #define NOTE_AS2 117

  #define NOTE_B2 123

  #define NOTE_C3 131

  #define NOTE_CS3 139

  #define NOTE_D3 147

  #define NOTE_DS3 156

  #define NOTE_E3 165

  #define NOTE_F3 175

  #define NOTE_FS3 185

  #define NOTE_G3 196

  #define NOTE_GS3 208

  #define NOTE_A3 220

  #define NOTE_AS3 233

  #define NOTE_B3 247

  #define NOTE_C4 262

  #define NOTE_CS4 277

  #define NOTE_D4 294

  #define NOTE_DS4 311

  #define NOTE_E4 330

  #define NOTE_F4 349

  #define NOTE_FS4 370

  #define NOTE_G4 392

  #define NOTE_GS4 415

  #define NOTE_A4 440

  #define NOTE_AS4 466

  #define NOTE_B4 494

  #define NOTE_C5 523

  #define NOTE_CS5 554

  #define NOTE_D5 587

  #define NOTE_DS5 622

  #define NOTE_E5 659
  #define NOTE_F5 698
  #define NOTE_FS5 740
  #define NOTE_G5 784
  #define NOTE_GS5 831
  #define NOTE_A5 880
  #define NOTE_AS5 932
  #define NOTE_B5 988
  #define NOTE_C6 1047
  #define NOTE_CS6 1109
  #define NOTE_D6 1175
  #define NOTE_DS6 1245
  #define NOTE_E6 1319
  #define NOTE_F6 1397
  #define NOTE_FS6 1480
  #define NOTE_G6 1568
  #define NOTE_GS6 1661
  #define NOTE_A6 1760
  #define NOTE_AS6 1865
  #define NOTE_B6 1976
  #define NOTE_C7 2093
  #define NOTE_CS7 2217
  #define NOTE_D7 2349
  #define NOTE_DS7 2489
  #define NOTE_E7 2637
  #define NOTE_F7 2794
  #define NOTE_FS7 2960
  #define NOTE_G7 3136
  #define NOTE_GS7 3322
  #define NOTE_A7 3520
  #define NOTE_AS7 3729
  #define NOTE_B7 3951
  #define NOTE_C8 4186
  #define NOTE_CS8 4435
  #define NOTE_D8 4699
  #define NOTE_DS8 4978
  #define END -1
  #define REST 0
int song1[] = {
NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_A4,
NOTE_G4, NOTE_C5, NOTE_AS4, NOTE_A4,                   
NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_FS4, NOTE_DS4, NOTE_D4,
NOTE_C4, NOTE_D4,0,                                 

NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_A4,
NOTE_G4, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_AS4, NOTE_C5, NOTE_AS4, NOTE_A4,      //29               //8
NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_FS4, NOTE_DS4, NOTE_D4,
NOTE_C4, NOTE_D4,0,                                       

NOTE_D4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_DS5, NOTE_D5,
NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_C5,
NOTE_C4, NOTE_D4, NOTE_DS4, NOTE_FS4, NOTE_D5, NOTE_C5,
NOTE_AS4, NOTE_A4, NOTE_C5, NOTE_AS4,             //58

NOTE_D4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_DS5, NOTE_D5,
NOTE_C5, NOTE_D5, NOTE_C5, NOTE_AS4, NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_C5, NOTE_G4,
NOTE_A4, 0, NOTE_AS4, NOTE_A4, 0, NOTE_G4,
NOTE_G4, NOTE_A4, NOTE_G4, NOTE_FS4, 0,

NOTE_C4, NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_DS4,
NOTE_C4, NOTE_D4, 0,
NOTE_C4, NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_DS4,
NOTE_C4, NOTE_D4, END

};

// note durations: 8 = quarter note, 4 = 8th note, etc.
int noteDurations[] = {       //duration of the notes
8,4,8,4,
4,4,4,12,
4,4,4,4,4,4,
4,16,4,

8,4,8,4,
4,2,1,1,2,1,1,12,
4,4,4,4,4,4,
4,16,4,

4,4,4,4,4,4,
4,4,4,12,
4,4,4,4,4,4,
4,4,4,12,

4,4,4,4,4,4,
2,1,1,2,1,1,4,8,4,
2,6,4,2,6,4,
2,1,1,16,4,

4,8,4,4,4,
4,16,4,
4,8,4,4,4,
4,20,
};

// change this to make the song slower or faster
const int song4[] PROGMEM= {

  
  NOTE_E4,4,  NOTE_E4,4,  NOTE_F4,4,  NOTE_G4,4,//1
  NOTE_G4,4,  NOTE_F4,4,  NOTE_E4,4,  NOTE_D4,4,
  NOTE_C4,4,  NOTE_C4,4,  NOTE_D4,4,  NOTE_E4,4,
  NOTE_E4,-4, NOTE_D4,8,  NOTE_D4,2,

  NOTE_E4,4,  NOTE_E4,4,  NOTE_F4,4,  NOTE_G4,4,//4
  NOTE_G4,4,  NOTE_F4,4,  NOTE_E4,4,  NOTE_D4,4,
  NOTE_C4,4,  NOTE_C4,4,  NOTE_D4,4,  NOTE_E4,4,
  NOTE_D4,-4,  NOTE_C4,8,  NOTE_C4,2,

  NOTE_D4,4,  NOTE_D4,4,  NOTE_E4,4,  NOTE_C4,4,//8
  NOTE_D4,4,  NOTE_E4,8,  NOTE_F4,8,  NOTE_E4,4, NOTE_C4,4,
  NOTE_D4,4,  NOTE_E4,8,  NOTE_F4,8,  NOTE_E4,4, NOTE_D4,4,
  NOTE_C4,4,  NOTE_D4,4,  NOTE_G3,2,

  NOTE_E4,4,  NOTE_E4,4,  NOTE_F4,4,  NOTE_G4,4,//12
  NOTE_G4,4,  NOTE_F4,4,  NOTE_E4,4,  NOTE_D4,4,
  NOTE_C4,4,  NOTE_C4,4,  NOTE_D4,4,  NOTE_E4,4,
  NOTE_D4,-4,  NOTE_C4,8,  NOTE_C4,2
  
};

const int song6[] PROGMEM = {

  //Based on the arrangement at https://www.flutetunes.com/tunes.php?id=192
  
  NOTE_E5, 4,  NOTE_B4,8,  NOTE_C5,8,  NOTE_D5,4,  NOTE_C5,8,  NOTE_B4,8,
  NOTE_A4, 4,  NOTE_A4,8,  NOTE_C5,8,  NOTE_E5,4,  NOTE_D5,8,  NOTE_C5,8,
  NOTE_B4, -4,  NOTE_C5,8,  NOTE_D5,4,  NOTE_E5,4,
  NOTE_C5, 4,  NOTE_A4,4,  NOTE_A4,8,  NOTE_A4,4,  NOTE_B4,8,  NOTE_C5,8,

  NOTE_D5, -4,  NOTE_F5,8,  NOTE_A5,4,  NOTE_G5,8,  NOTE_F5,8,
  NOTE_E5, -4,  NOTE_C5,8,  NOTE_E5,4,  NOTE_D5,8,  NOTE_C5,8,
  NOTE_B4, 4,  NOTE_B4,8,  NOTE_C5,8,  NOTE_D5,4,  NOTE_E5,4,
  NOTE_C5, 4,  NOTE_A4,4,  NOTE_A4,4, REST, 4,

  NOTE_E5, 4,  NOTE_B4,8,  NOTE_C5,8,  NOTE_D5,4,  NOTE_C5,8,  NOTE_B4,8,
  NOTE_A4, 4,  NOTE_A4,8,  NOTE_C5,8,  NOTE_E5,4,  NOTE_D5,8,  NOTE_C5,8,
  NOTE_B4, -4,  NOTE_C5,8,  NOTE_D5,4,  NOTE_E5,4,
  NOTE_C5, 4,  NOTE_A4,4,  NOTE_A4,8,  NOTE_A4,4,  NOTE_B4,8,  NOTE_C5,8,

  NOTE_D5, -4,  NOTE_F5,8,  NOTE_A5,4,  NOTE_G5,8,  NOTE_F5,8,
  NOTE_E5, -4,  NOTE_C5,8,  NOTE_E5,4,  NOTE_D5,8,  NOTE_C5,8,
  NOTE_B4, 4,  NOTE_B4,8,  NOTE_C5,8,  NOTE_D5,4,  NOTE_E5,4,
  NOTE_C5, 4,  NOTE_A4,4,  NOTE_A4,4, REST, 4,
  

  NOTE_E5,2,  NOTE_C5,2,
  NOTE_D5,2,   NOTE_B4,2,
  NOTE_C5,2,   NOTE_A4,2,
  NOTE_GS4,2,  NOTE_B4,4,  REST,8, 
  NOTE_E5,2,   NOTE_C5,2,
  NOTE_D5,2,   NOTE_B4,2,
  NOTE_C5,4,   NOTE_E5,4,  NOTE_A5,2,
  NOTE_GS5,2,

};

const int song7[] PROGMEM= {

  // Minuet in G - Petzold
  // Score available at https://musescore.com/user/3402766/scores/1456391
  NOTE_D5,4, NOTE_G4,8, NOTE_A4,8, NOTE_B4,8, NOTE_C5,8, //1
  NOTE_D5,4, NOTE_G4,4, NOTE_G4,4,
  NOTE_E5,4, NOTE_C5,8, NOTE_D5,8, NOTE_E5,8, NOTE_FS5,8,
  NOTE_G5,4, NOTE_G4,4, NOTE_G4,4,
  NOTE_C5,4, NOTE_D5,8, NOTE_C5,8, NOTE_B4,8, NOTE_A4,8,
  
  NOTE_B4,4, NOTE_C5,8, NOTE_B4,8, NOTE_A4,8, NOTE_G4,8,//6
  NOTE_FS4,4, NOTE_G4,8, NOTE_A4,8, NOTE_B4,8, NOTE_G4,8,
  NOTE_A4,-2,
  NOTE_D5,4, NOTE_G4,8, NOTE_A4,8, NOTE_B4,8, NOTE_C5,8, 
  NOTE_D5,4, NOTE_G4,4, NOTE_G4,4,
  NOTE_E5,4, NOTE_C5,8, NOTE_D5,8, NOTE_E5,8, NOTE_FS5,8,
  
  NOTE_G5,4, NOTE_G4,4, NOTE_G4,4,
  NOTE_C5,4, NOTE_D5,8, NOTE_C5,8, NOTE_B4,8, NOTE_A4,8, //12
  NOTE_B4,4, NOTE_C5,8, NOTE_B4,8, NOTE_A4,8, NOTE_G4,8,
  NOTE_A4,4, NOTE_B4,8, NOTE_A4,8, NOTE_G4,8, NOTE_FS4,8,
  NOTE_G4,-2,

  //repeats from 1

  NOTE_D5,4, NOTE_G4,8, NOTE_A4,8, NOTE_B4,8, NOTE_C5,8, //1
  NOTE_D5,4, NOTE_G4,4, NOTE_G4,4,
  NOTE_E5,4, NOTE_C5,8, NOTE_D5,8, NOTE_E5,8, NOTE_FS5,8,
  NOTE_G5,4, NOTE_G4,4, NOTE_G4,4,
  NOTE_C5,4, NOTE_D5,8, NOTE_C5,8, NOTE_B4,8, NOTE_A4,8,
  
  NOTE_B4,4, NOTE_C5,8, NOTE_B4,8, NOTE_A4,8, NOTE_G4,8,//6
  NOTE_FS4,4, NOTE_G4,8, NOTE_A4,8, NOTE_B4,8, NOTE_G4,8,
  NOTE_A4,-2,
  NOTE_D5,4, NOTE_G4,8, NOTE_A4,8, NOTE_B4,8, NOTE_C5,8, 
  NOTE_D5,4, NOTE_G4,4, NOTE_G4,4,
  NOTE_E5,4, NOTE_C5,8, NOTE_D5,8, NOTE_E5,8, NOTE_FS5,8,
  
  NOTE_G5,4, NOTE_G4,4, NOTE_G4,4,
  NOTE_C5,4, NOTE_D5,8, NOTE_C5,8, NOTE_B4,8, NOTE_A4,8, //12
  NOTE_B4,4, NOTE_C5,8, NOTE_B4,8, NOTE_A4,8, NOTE_G4,8,
  NOTE_A4,4, NOTE_B4,8, NOTE_A4,8, NOTE_G4,8, NOTE_FS4,8,
  NOTE_G4,-2,

  //continues from 17

  NOTE_B5,4, NOTE_G5,8, NOTE_A5,8, NOTE_B5,8, NOTE_G5,8,//17
  NOTE_A5,4, NOTE_D5,8, NOTE_E5,8, NOTE_FS5,8, NOTE_D5,8,
  NOTE_G5,4, NOTE_E5,8, NOTE_FS5,8, NOTE_G5,8, NOTE_D5,8,
  NOTE_CS5,4, NOTE_B4,8, NOTE_CS5,8, NOTE_A4,4,
  NOTE_A4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_E5,8, NOTE_FS5,8,

  NOTE_G5,4, NOTE_FS5,4, NOTE_E5,4, //22
  NOTE_FS5,4, NOTE_A4,4, NOTE_CS5,4,
  NOTE_D5,-2,
  NOTE_D5,4, NOTE_G4,8, NOTE_FS5,8, NOTE_G4,4,
  NOTE_E5,4,  NOTE_G4,8, NOTE_FS4,8, NOTE_G4,4,
  NOTE_D5,4, NOTE_C5,4, NOTE_B4,4,

  NOTE_A4,8, NOTE_G4,8, NOTE_FS4,8, NOTE_G4,8, NOTE_A4,4, //28
  NOTE_D4,8, NOTE_E4,8, NOTE_FS4,8, NOTE_G4,8, NOTE_A4,8, NOTE_B4,8,
  NOTE_C5,4, NOTE_B4,4, NOTE_A4,4,
  NOTE_B4,8, NOTE_D5,8, NOTE_G4,4, NOTE_FS4,4,
  NOTE_G4,-2,
  
  
  
  
 
};
// change this to whichever pin you want to use

// notes of the moledy followed by the duration.
// a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
// !!negative numbers are used to represent dotted notes,
// so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
const int song2[] PROGMEM= {

  // Cannon in D - Pachelbel
  // Score available at https://musescore.com/user/4710311/scores/1975521
  // C F
  NOTE_FS4,2, NOTE_E4,2,
  NOTE_D4,2, NOTE_CS4,2,
  NOTE_B3,2, NOTE_A3,2,
  NOTE_B3,2, NOTE_CS4,2,
  NOTE_FS4,2, NOTE_E4,2,
  NOTE_D4,2, NOTE_CS4,2,
  NOTE_B3,2, NOTE_A3,2,
  NOTE_B3,2, NOTE_CS4,2,
  NOTE_D4,2, NOTE_CS4,2,
  NOTE_B3,2, NOTE_A3,2,
  NOTE_G3,2, NOTE_FS3,2,
  NOTE_G3,2, NOTE_A3,2,

  NOTE_D4,4, NOTE_FS4,8, NOTE_G4,8, NOTE_A4,4, NOTE_FS4,8, NOTE_G4,8, 
  NOTE_A4,4, NOTE_B3,8, NOTE_CS4,8, NOTE_D4,8, NOTE_E4,8, NOTE_FS4,8, NOTE_G4,8, 
  NOTE_FS4,4, NOTE_D4,8, NOTE_E4,8, NOTE_FS4,4, NOTE_FS3,8, NOTE_G3,8,
  NOTE_A3,8, NOTE_G3,8, NOTE_FS3,8, NOTE_G3,8, NOTE_A3,2,
  NOTE_G3,4, NOTE_B3,8, NOTE_A3,8, NOTE_G3,4, NOTE_FS3,8, NOTE_E3,8, 
  NOTE_FS3,4, NOTE_D3,8, NOTE_E3,8, NOTE_FS3,8, NOTE_G3,8, NOTE_A3,8, NOTE_B3,8,

  NOTE_G3,4, NOTE_B3,8, NOTE_A3,8, NOTE_B3,4, NOTE_CS4,8, NOTE_D4,8,
  NOTE_A3,8, NOTE_B3,8, NOTE_CS4,8, NOTE_D4,8, NOTE_E4,8, NOTE_FS4,8, NOTE_G4,8, NOTE_A4,2,
  NOTE_A4,4, NOTE_FS4,8, NOTE_G4,8, NOTE_A4,4,
  NOTE_FS4,8, NOTE_G4,8, NOTE_A4,8, NOTE_A3,8, NOTE_B3,8, NOTE_CS4,8,
  NOTE_D4,8, NOTE_E4,8, NOTE_FS4,8, NOTE_G4,8, NOTE_FS4,4, NOTE_D4,8, NOTE_E4,8,
  NOTE_FS4,8, NOTE_CS4,8, NOTE_A3,8, NOTE_A3,8,

  NOTE_CS4,4, NOTE_B3,4, NOTE_D4,8, NOTE_CS4,8, NOTE_B3,4,
  NOTE_A3,8, NOTE_G3,8, NOTE_A3,4, NOTE_D3,8, NOTE_E3,8, NOTE_FS3,8, NOTE_G3,8,
  NOTE_A3,8, NOTE_B3,4, NOTE_G3,4, NOTE_B3,8, NOTE_A3,8, NOTE_B3,4,
  NOTE_CS4,8, NOTE_D4,8, NOTE_A3,8, NOTE_B3,8, NOTE_CS4,8, NOTE_D4,8, NOTE_E4,8,
  NOTE_FS4,8, NOTE_G4,8, NOTE_A4,2,  
   
  
};

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes

// so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
const int song3[] PROGMEM = {

  // Fur Elise - Ludwig van Beethovem
  // Score available at https://musescore.com/user/28149610/scores/5281944

  //starts from 1 ending on 9
  NOTE_E5, 16, NOTE_DS5, 16, //1
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,
  NOTE_A4, -8, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16,
  NOTE_B4, -8, NOTE_E4, 16, NOTE_GS4, 16, NOTE_B4, 16,
  NOTE_C5, 8,  REST, 16, NOTE_E4, 16, NOTE_E5, 16,  NOTE_DS5, 16,
  
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,//6
  NOTE_A4, -8, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16, 
  NOTE_B4, -8, NOTE_E4, 16, NOTE_C5, 16, NOTE_B4, 16, 
  NOTE_A4 , 4, REST, 8, //9 - 1st ending

  //repaets from 1 ending on 10
  NOTE_E5, 16, NOTE_DS5, 16, //1
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,
  NOTE_A4, -8, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16,
  NOTE_B4, -8, NOTE_E4, 16, NOTE_GS4, 16, NOTE_B4, 16,
  NOTE_C5, 8,  REST, 16, NOTE_E4, 16, NOTE_E5, 16,  NOTE_DS5, 16,
  
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,//6
  NOTE_A4, -8, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16, 
  NOTE_B4, -8, NOTE_E4, 16, NOTE_C5, 16, NOTE_B4, 16, 
  NOTE_A4, 8, REST, 16, NOTE_B4, 16, NOTE_C5, 16, NOTE_D5, 16, //10 - 2nd ending
  //continues from 11
  NOTE_E5, -8, NOTE_G4, 16, NOTE_F5, 16, NOTE_E5, 16, 
  NOTE_D5, -8, NOTE_F4, 16, NOTE_E5, 16, NOTE_D5, 16, //12
  
  NOTE_C5, -8, NOTE_E4, 16, NOTE_D5, 16, NOTE_C5, 16, //13
  NOTE_B4, 8, REST, 16, NOTE_E4, 16, NOTE_E5, 16, REST, 16,
  REST, 16, NOTE_E5, 16, NOTE_E6, 16, REST, 16, REST, 16, NOTE_DS5, 16,
  NOTE_E5, 16, REST, 16, REST, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_DS5, 16,
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,
  NOTE_A4, 8, REST, 16, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16,
  
  NOTE_B4, 8, REST, 16, NOTE_E4, 16, NOTE_GS4, 16, NOTE_B4, 16, //19
  NOTE_C5, 8, REST, 16, NOTE_E4, 16, NOTE_E5, 16,  NOTE_DS5, 16,
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,
  NOTE_A4, 8, REST, 16, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16,
  NOTE_B4, 8, REST, 16, NOTE_E4, 16, NOTE_C5, 16, NOTE_B4, 16,
  NOTE_A4, 8, REST, 16, NOTE_B4, 16, NOTE_C5, 16, NOTE_D5, 16, //24 (1st ending)
  
  //repeats from 11
  NOTE_E5, -8, NOTE_G4, 16, NOTE_F5, 16, NOTE_E5, 16, 
  NOTE_D5, -8, NOTE_F4, 16, NOTE_E5, 16, NOTE_D5, 16, //12
  
  NOTE_C5, -8, NOTE_E4, 16, NOTE_D5, 16, NOTE_C5, 16, //13
  NOTE_B4, 8, REST, 16, NOTE_E4, 16, NOTE_E5, 16, REST, 16,
  REST, 16, NOTE_E5, 16, NOTE_E6, 16, REST, 16, REST, 16, NOTE_DS5, 16,
  NOTE_E5, 16, REST, 16, REST, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_DS5, 16,
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,
  NOTE_A4, 8, REST, 16, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16,
  
  NOTE_B4, 8, REST, 16, NOTE_E4, 16, NOTE_GS4, 16, NOTE_B4, 16, //19
  NOTE_C5, 8, REST, 16, NOTE_E4, 16, NOTE_E5, 16,  NOTE_DS5, 16,
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,
  NOTE_A4, 8, REST, 16, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16,
  NOTE_B4, 8, REST, 16, NOTE_E4, 16, NOTE_C5, 16, NOTE_B4, 16,
  NOTE_A4, 8, REST, 16, NOTE_C5, 16, NOTE_C5, 16, NOTE_C5, 16, //25 - 2nd ending

  //continues from 26
  NOTE_C5 , 4, NOTE_F5, -16, NOTE_E5, 32, //26
  NOTE_E5, 8, NOTE_D5, 8, NOTE_AS5, -16, NOTE_A5, 32,
  NOTE_A5, 16, NOTE_G5, 16, NOTE_F5, 16, NOTE_E5, 16, NOTE_D5, 16, NOTE_C5, 16,
  NOTE_AS4, 8, NOTE_A4, 8, NOTE_A4, 32, NOTE_G4, 32, NOTE_A4, 32, NOTE_B4, 32,
  NOTE_C5 , 4, NOTE_D5, 16, NOTE_DS5, 16,
  NOTE_E5, -8, NOTE_E5, 16, NOTE_F5, 16, NOTE_A4, 16,
  NOTE_C5 , 4,  NOTE_D5, -16, NOTE_B4, 32,
  
  
  NOTE_C5, 32, NOTE_G5, 32, NOTE_G4, 32, NOTE_G5, 32, NOTE_A4, 32, NOTE_G5, 32, NOTE_B4, 32, NOTE_G5, 32, NOTE_C5, 32, NOTE_G5, 32, NOTE_D5, 32, NOTE_G5, 32, //33
  NOTE_E5, 32, NOTE_G5, 32, NOTE_C6, 32, NOTE_B5, 32, NOTE_A5, 32, NOTE_G5, 32, NOTE_F5, 32, NOTE_E5, 32, NOTE_D5, 32, NOTE_G5, 32, NOTE_F5, 32, NOTE_D5, 32,
  NOTE_C5, 32, NOTE_G5, 32, NOTE_G4, 32, NOTE_G5, 32, NOTE_A4, 32, NOTE_G5, 32, NOTE_B4, 32, NOTE_G5, 32, NOTE_C5, 32, NOTE_G5, 32, NOTE_D5, 32, NOTE_G5, 32,

  NOTE_E5, 32, NOTE_G5, 32, NOTE_C6, 32, NOTE_B5, 32, NOTE_A5, 32, NOTE_G5, 32, NOTE_F5, 32, NOTE_E5, 32, NOTE_D5, 32, NOTE_G5, 32, NOTE_F5, 32, NOTE_D5, 32, //36
  NOTE_E5, 32, NOTE_F5, 32, NOTE_E5, 32, NOTE_DS5, 32, NOTE_E5, 32, NOTE_B4, 32, NOTE_E5, 32, NOTE_DS5, 32, NOTE_E5, 32, NOTE_B4, 32, NOTE_E5, 32, NOTE_DS5, 32,
  NOTE_E5, -8, NOTE_B4, 16, NOTE_E5, 16, NOTE_DS5, 16,
  NOTE_E5, -8, NOTE_B4, 16, NOTE_E5, 16, REST, 16,

  REST, 16, NOTE_DS5, 16, NOTE_E5, 16, REST, 16, REST, 16, NOTE_DS5, 16, //40
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,
  NOTE_A4, 8, REST, 16, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16,
  NOTE_B4, 8, REST, 16, NOTE_E4, 16, NOTE_GS4, 16, NOTE_B4, 16,
  NOTE_C5, 8, REST, 16, NOTE_E4, 16, NOTE_E5, 16, NOTE_DS5, 16,
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,

  NOTE_A4, 8, REST, 16, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16, //46
  NOTE_B4, 8, REST, 16, NOTE_E4, 16, NOTE_C5, 16, NOTE_B4, 16,
  NOTE_A4, 8, REST, 16, NOTE_B4, 16, NOTE_C5, 16, NOTE_D5, 16,
  NOTE_E5, -8, NOTE_G4, 16, NOTE_F5, 16, NOTE_E5, 16,
  NOTE_D5, -8, NOTE_F4, 16, NOTE_E5, 16, NOTE_D5, 16,
  NOTE_C5, -8, NOTE_E4, 16, NOTE_D5, 16, NOTE_C5, 16,
  NOTE_B4, 8, REST, 16, NOTE_E4, 16, NOTE_E5, 16, REST, 16,
  REST, 16, NOTE_E5, 16, NOTE_E6, 16, REST, 16, REST, 16, NOTE_DS5, 16,

  NOTE_E5, 16, REST, 16, REST, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_D5, 16, //54
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,
  NOTE_A4, 8, REST, 16, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16,
  NOTE_B4, 8, REST, 16, NOTE_E4, 16, NOTE_GS4, 16, NOTE_B4, 16,
  NOTE_C5, 8, REST, 16, NOTE_E4, 16, NOTE_E5, 16, NOTE_DS5, 16,
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,
  
  NOTE_A4, 8, REST, 16, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16, //60
  NOTE_B4, 8, REST, 16, NOTE_E4, 16, NOTE_C5, 16, NOTE_B4, 16,
  NOTE_A4, 8, REST, 16, REST, 16, REST, 8, 
  NOTE_CS5 , -4, 
  NOTE_D5 , 4, NOTE_E5, 16, NOTE_F5, 16,
  NOTE_F5 , 4, NOTE_F5, 8, 
  NOTE_E5 , -4,
  NOTE_D5 , 4, NOTE_C5, 16, NOTE_B4, 16,
  NOTE_A4 , 4, NOTE_A4, 8,
  NOTE_A4, 8, NOTE_C5, 8, NOTE_B4, 8,
  NOTE_A4 , -4,
  NOTE_CS5 , -4,

  NOTE_D5 , 4, NOTE_E5, 16, NOTE_F5, 16, //72
  NOTE_F5 , 4, NOTE_F5, 8,
  NOTE_F5 , -4,
  NOTE_DS5 , 4, NOTE_D5, 16, NOTE_C5, 16,
  NOTE_AS4 , 4, NOTE_A4, 8,
  NOTE_GS4 , 4, NOTE_G4, 8,
  NOTE_A4 , -4,
  NOTE_B4 , 4, REST, 8,
  NOTE_A3, -32, NOTE_C4, -32, NOTE_E4, -32, NOTE_A4, -32, NOTE_C5, -32, NOTE_E5, -32, NOTE_D5, -32, NOTE_C5, -32, NOTE_B4, -32,

  NOTE_A4, -32, NOTE_C5, -32, NOTE_E5, -32, NOTE_A5, -32, NOTE_C6, -32, NOTE_E6, -32, NOTE_D6, -32, NOTE_C6, -32, NOTE_B5, -32, //80
  NOTE_A4, -32, NOTE_C5, -32, NOTE_E5, -32, NOTE_A5, -32, NOTE_C6, -32, NOTE_E6, -32, NOTE_D6, -32, NOTE_C6, -32, NOTE_B5, -32,
  NOTE_AS5, -32, NOTE_A5, -32, NOTE_GS5, -32, NOTE_G5, -32, NOTE_FS5, -32, NOTE_F5, -32, NOTE_E5, -32, NOTE_DS5, -32, NOTE_D5, -32,

  NOTE_CS5, -32, NOTE_C5, -32, NOTE_B4, -32, NOTE_AS4, -32, NOTE_A4, -32, NOTE_GS4, -32, NOTE_G4, -32, NOTE_FS4, -32, NOTE_F4, -32, //84
  NOTE_E4, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,
  NOTE_A4, -8, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16,
  NOTE_B4, -8, NOTE_E4, 16, NOTE_GS4, 16, NOTE_B4, 16,

  NOTE_C5, 8, REST, 16, NOTE_E4, 16, NOTE_E5, 16, NOTE_DS5, 16, //88
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16, 
  NOTE_A4, -8, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16, 
  NOTE_B4, -8, NOTE_E4, 16, NOTE_C5, 16, NOTE_B4, 16, 
  NOTE_A4, -8, REST, -8,
  REST, -8, NOTE_G4, 16, NOTE_F5, 16, NOTE_E5, 16,
  NOTE_D5 , 4, REST, 8,
  REST, -8, NOTE_E4, 16, NOTE_D5, 16, NOTE_C5, 16,
  
  NOTE_B4, -8, NOTE_E4, 16, NOTE_E5, 8, //96
  NOTE_E5, 8, NOTE_E6, -8, NOTE_DS5, 16,
  NOTE_E5, 16, REST, 16, REST, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_DS5, 16,
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,
  NOTE_A4, -8, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16,
  NOTE_B4, -8, NOTE_E4, 16, NOTE_GS4, 16, NOTE_B4, 16,

  NOTE_C5, 8, REST, 16, NOTE_E4, 16, NOTE_E5, 16, NOTE_DS5, 16, //102
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,
  NOTE_A4, -8, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16,
  NOTE_B4, -8, NOTE_E4, 16, NOTE_C5, 16, NOTE_B4, 16,
  NOTE_A4 , -4,
};

int song8[] = {
  REST,
  
  NOTE_D5, NOTE_D5, NOTE_E5, NOTE_FS5, NOTE_G5, NOTE_A5, NOTE_E5, NOTE_D5, NOTE_FS5, NOTE_E5, NOTE_D5, REST,
  NOTE_B5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_CS5, NOTE_B5, NOTE_A5, NOTE_B5, NOTE_CS5, NOTE_D5, NOTE_B5, NOTE_A5,
  NOTE_D5, NOTE_D5, NOTE_E5, NOTE_FS5, NOTE_G5, NOTE_A5, NOTE_E5, NOTE_D5, NOTE_FS5, NOTE_E5, NOTE_D5,
  NOTE_A5, NOTE_D5, REST, NOTE_A5, NOTE_D5, REST, NOTE_A5, NOTE_D5, REST, NOTE_A5, NOTE_D5, NOTE_B5,
  NOTE_CS5, NOTE_CS5, NOTE_CS5, NOTE_CS5, NOTE_CS5,
  NOTE_A5, NOTE_CS5, NOTE_A5, NOTE_CS5, NOTE_A5, NOTE_CS5,
  NOTE_D5, NOTE_D5, REST,
  NOTE_CS5, NOTE_CS5, NOTE_CS5,
  NOTE_D5, NOTE_CS5, NOTE_D5, NOTE_CS5, NOTE_D5, NOTE_FS5,
  NOTE_D5, NOTE_CS5, NOTE_D5, NOTE_CS5, NOTE_D5, NOTE_CS5,
  NOTE_CS5, NOTE_D5, NOTE_CS5, NOTE_D5, NOTE_CS5, NOTE_CS5,
  NOTE_D5, NOTE_CS5, NOTE_CS5, NOTE_D5, NOTE_CS5, NOTE_CS5,
  NOTE_CS5, NOTE_D5, NOTE_CS5, NOTE_CS5, NOTE_G5, NOTE_FS5,
  NOTE_D5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5,

  REST
};
int song8d[] = {
  4,

  4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 1, 4,
  4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 1, 2,
  4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4,
  4, 2, 4, 4, 2, 4, 4, 2, 4, 4, 4, 2,
  4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4,
  4, 2, 2,
  4, 4, 4,
  4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4,

  1
};
int song9[] = {
  NOTE_C4, REST, NOTE_G4, REST, NOTE_AS4, NOTE_C5, NOTE_AS4, REST, NOTE_F4, NOTE_DS4, REST,
  NOTE_C4, REST, NOTE_G4, REST, NOTE_AS4, NOTE_C5, NOTE_AS4, REST, NOTE_F4, NOTE_DS4, REST,
  NOTE_C4, REST, NOTE_G4, REST, NOTE_AS4, NOTE_C5, NOTE_AS4, REST, NOTE_F4, NOTE_DS4, REST,

  NOTE_C4, REST, NOTE_E4, REST, NOTE_G4, NOTE_A4, NOTE_AS4,
  NOTE_C5, REST, NOTE_C5, REST, NOTE_AS4, REST, NOTE_A4, REST,
  NOTE_AS4, REST, NOTE_AS4, NOTE_C5, REST, NOTE_AS4, NOTE_A4, REST,
  REST,
  NOTE_C5, REST, NOTE_AS4, REST, NOTE_A4, REST, NOTE_AS4, REST, NOTE_E5,
  REST,

  NOTE_C5, REST, NOTE_C5, REST, NOTE_AS4, REST, NOTE_A4, REST,
  NOTE_AS4, REST, NOTE_AS4, NOTE_C5, REST, NOTE_AS4, NOTE_A4, REST,
  REST,
  NOTE_C5, REST, NOTE_AS4, REST, NOTE_A4, REST, NOTE_AS4, REST, NOTE_E4,
  REST,
};
 int song9d[] = {
  4, 8, 4, 8, 4, 8, 8, 16, 8, 8, 16,
  4, 8, 4, 8, 4, 8, 8, 16, 8, 8, 16,
  4, 8, 4, 8, 4, 8, 8, 16, 8, 8, 16,

  4, 8, 4, 8, 4, 4, 4,
  8, 16, 8, 16, 8, 16, 8, 16,
  8, 16, 8, 8, 16, 8, 8, 16,
  4,
  8, 16, 8, 16, 8, 16, 8, 4, 8,
  4,

  8, 16, 8, 16, 8, 16, 8, 16,
  8, 16, 8, 8, 16, 8, 8, 16,
  4,
  8, 16, 8, 16, 8, 16, 8, 4, 8,
  1
};

const int song5[] PROGMEM ={

  // Super Mario Bros theme
  // Score available at https://musescore.com/user/2123/scores/2145
  // Theme by Koji Kondo
  
  
  NOTE_E5,8, NOTE_E5,8, REST,8, NOTE_E5,8, REST,8, NOTE_C5,8, NOTE_E5,8, //1
  NOTE_G5,4, REST,4, NOTE_G4,8, REST,4, 
  NOTE_C5,-4, NOTE_G4,8, REST,4, NOTE_E4,-4, // 3
  NOTE_A4,4, NOTE_B4,4, NOTE_AS4,8, NOTE_A4,4,
  NOTE_G4,-8, NOTE_E5,-8, NOTE_G5,-8, NOTE_A5,4, NOTE_F5,8, NOTE_G5,8,
  REST,8, NOTE_E5,4,NOTE_C5,8, NOTE_D5,8, NOTE_B4,-4,
  NOTE_C5,-4, NOTE_G4,8, REST,4, NOTE_E4,-4, // repeats from 3
  NOTE_A4,4, NOTE_B4,4, NOTE_AS4,8, NOTE_A4,4,
  NOTE_G4,-8, NOTE_E5,-8, NOTE_G5,-8, NOTE_A5,4, NOTE_F5,8, NOTE_G5,8,
  REST,8, NOTE_E5,4,NOTE_C5,8, NOTE_D5,8, NOTE_B4,-4,

  
  REST,4, NOTE_G5,8, NOTE_FS5,8, NOTE_F5,8, NOTE_DS5,4, NOTE_E5,8,//7
  REST,8, NOTE_GS4,8, NOTE_A4,8, NOTE_C4,8, REST,8, NOTE_A4,8, NOTE_C5,8, NOTE_D5,8,
  REST,4, NOTE_DS5,4, REST,8, NOTE_D5,-4,
  NOTE_C5,2, REST,2,

  REST,4, NOTE_G5,8, NOTE_FS5,8, NOTE_F5,8, NOTE_DS5,4, NOTE_E5,8,//repeats from 7
  REST,8, NOTE_GS4,8, NOTE_A4,8, NOTE_C4,8, REST,8, NOTE_A4,8, NOTE_C5,8, NOTE_D5,8,
  REST,4, NOTE_DS5,4, REST,8, NOTE_D5,-4,
  NOTE_C5,2, REST,2,

  NOTE_C5,8, NOTE_C5,4, NOTE_C5,8, REST,8, NOTE_C5,8, NOTE_D5,4,//11
  NOTE_E5,8, NOTE_C5,4, NOTE_A4,8, NOTE_G4,2,

  NOTE_C5,8, NOTE_C5,4, NOTE_C5,8, REST,8, NOTE_C5,8, NOTE_D5,8, NOTE_E5,8,//13
  REST,1, 
  NOTE_C5,8, NOTE_C5,4, NOTE_C5,8, REST,8, NOTE_C5,8, NOTE_D5,4,
  NOTE_E5,8, NOTE_C5,4, NOTE_A4,8, NOTE_G4,2,
  NOTE_E5,8, NOTE_E5,8, REST,8, NOTE_E5,8, REST,8, NOTE_C5,8, NOTE_E5,4,
  NOTE_G5,4, REST,4, NOTE_G4,4, REST,4, 
  NOTE_C5,-4, NOTE_G4,8, REST,4, NOTE_E4,-4, // 19
  
  NOTE_A4,4, NOTE_B4,4, NOTE_AS4,8, NOTE_A4,4,
  NOTE_G4,-8, NOTE_E5,-8, NOTE_G5,-8, NOTE_A5,4, NOTE_F5,8, NOTE_G5,8,
  REST,8, NOTE_E5,4, NOTE_C5,8, NOTE_D5,8, NOTE_B4,-4,

  NOTE_C5,-4, NOTE_G4,8, REST,4, NOTE_E4,-4, // repeats from 19
  NOTE_A4,4, NOTE_B4,4, NOTE_AS4,8, NOTE_A4,4,
  NOTE_G4,-8, NOTE_E5,-8, NOTE_G5,-8, NOTE_A5,4, NOTE_F5,8, NOTE_G5,8,
  REST,8, NOTE_E5,4, NOTE_C5,8, NOTE_D5,8, NOTE_B4,-4,

  NOTE_E5,8, NOTE_C5,4, NOTE_G4,8, REST,4, NOTE_GS4,4,//23
  NOTE_A4,8, NOTE_F5,4, NOTE_F5,8, NOTE_A4,2,
  NOTE_D5,-8, NOTE_A5,-8, NOTE_A5,-8, NOTE_A5,-8, NOTE_G5,-8, NOTE_F5,-8,
  
  NOTE_E5,8, NOTE_C5,4, NOTE_A4,8, NOTE_G4,2, //26
  NOTE_E5,8, NOTE_C5,4, NOTE_G4,8, REST,4, NOTE_GS4,4,
  NOTE_A4,8, NOTE_F5,4, NOTE_F5,8, NOTE_A4,2,
  NOTE_B4,8, NOTE_F5,4, NOTE_F5,8, NOTE_F5,-8, NOTE_E5,-8, NOTE_D5,-8,
  NOTE_C5,8, NOTE_E4,4, NOTE_E4,8, NOTE_C4,2,

  NOTE_E5,8, NOTE_C5,4, NOTE_G4,8, REST,4, NOTE_GS4,4,//repeats from 23
  NOTE_A4,8, NOTE_F5,4, NOTE_F5,8, NOTE_A4,2,
  NOTE_D5,-8, NOTE_A5,-8, NOTE_A5,-8, NOTE_A5,-8, NOTE_G5,-8, NOTE_F5,-8,
  
  NOTE_E5,8, NOTE_C5,4, NOTE_A4,8, NOTE_G4,2, //26
  NOTE_E5,8, NOTE_C5,4, NOTE_G4,8, REST,4, NOTE_GS4,4,
  NOTE_A4,8, NOTE_F5,4, NOTE_F5,8, NOTE_A4,2,
  NOTE_B4,8, NOTE_F5,4, NOTE_F5,8, NOTE_F5,-8, NOTE_E5,-8, NOTE_D5,-8,
  NOTE_C5,8, NOTE_E4,4, NOTE_E4,8, NOTE_C4,2,
  NOTE_C5,8, NOTE_C5,4, NOTE_C5,8, REST,8, NOTE_C5,8, NOTE_D5,8, NOTE_E5,8,
  REST,1,

  NOTE_C5,8, NOTE_C5,4, NOTE_C5,8, REST,8, NOTE_C5,8, NOTE_D5,4, //33
  NOTE_E5,8, NOTE_C5,4, NOTE_A4,8, NOTE_G4,2,
  NOTE_E5,8, NOTE_E5,8, REST,8, NOTE_E5,8, REST,8, NOTE_C5,8, NOTE_E5,4,
  NOTE_G5,4, REST,4, NOTE_G4,4, REST,4, 
  NOTE_E5,8, NOTE_C5,4, NOTE_G4,8, REST,4, NOTE_GS4,4,
  NOTE_A4,8, NOTE_F5,4, NOTE_F5,8, NOTE_A4,2,
  NOTE_D5,-8, NOTE_A5,-8, NOTE_A5,-8, NOTE_A5,-8, NOTE_G5,-8, NOTE_F5,-8,
  
  NOTE_E5,8, NOTE_C5,4, NOTE_A4,8, NOTE_G4,2, //40
  NOTE_E5,8, NOTE_C5,4, NOTE_G4,8, REST,4, NOTE_GS4,4,
  NOTE_A4,8, NOTE_F5,4, NOTE_F5,8, NOTE_A4,2,
  NOTE_B4,8, NOTE_F5,4, NOTE_F5,8, NOTE_F5,-8, NOTE_E5,-8, NOTE_D5,-8,
  NOTE_C5,8, NOTE_E4,4, NOTE_E4,8, NOTE_C4,2,
  
  //game over sound
  NOTE_C5,-4, NOTE_G4,-4, NOTE_E4,4, //45
  NOTE_A4,-8, NOTE_B4,-8, NOTE_A4,-8, NOTE_GS4,-8, NOTE_AS4,-8, NOTE_GS4,-8,
  NOTE_G4,8, NOTE_D4,8, NOTE_E4,-2,  

};

 // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7) 
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(A0);
  Serial.println(value);
  if (value > 720 && value < 800) /*button 1*/{
    int tempo=90;
    for (int thisNote = 0; song1[thisNote]!=-1; thisNote++) {
      int noteDuration = tempo*noteDurations[thisNote];
      tone(3, song1[thisNote],noteDuration*.95);
      delay(noteDuration);
      noTone(3);
      if (analogRead(A0)<950){break;}}

  } else if (value > 800 && value < 840) /*button 2*/ {
    int tempo = 150;
    int wholenote = (60000 * 4) / tempo;
    int notes = sizeof(song2) / sizeof(song2[0]) / 2;
    int divider = 0, noteDuration = 0;
    for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
    divider = pgm_read_word_near(song2+thisNote + 1);
    if (divider > 0) {
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5;
    }
    tone(3, pgm_read_word_near(song2+thisNote), noteDuration * 0.9);
    delay(noteDuration);
    noTone(3);
    if (analogRead(A0)<950){break;}}
  } else if (value > 936 && value < 960) /*button 3*/ {

    int tempo = 80;
    int wholenote = (60000 * 4) / tempo;
    int notes = sizeof(song3) / sizeof(song3[0]) / 2;
    int divider = 0, noteDuration = 0;
    for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
      divider = pgm_read_word_near(song3+thisNote + 1);
      if (divider > 0) {
      noteDuration = (wholenote) / divider;
      } else if (divider < 0) {
        noteDuration = (wholenote) / abs(divider);
        noteDuration *= 1.5;  }
    tone(3, pgm_read_word_near(song3+thisNote), noteDuration * 0.9);
    delay(noteDuration);
    noTone(3);
    if (analogRead(A0)<990){break;}}
  } else if (value > 600 && value < 720) /*button 4*/ {
    int tempo=144; 
    int divider = 0, noteDuration = 0; 
    int wholenote = (60000 * 4) / tempo;
    int notes = sizeof(song4) / sizeof(song4[0]);  // total number of notes
    // Play each note in the melody
    for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
    divider = pgm_read_word_near(song4+thisNote + 1);
    if (divider > 0) {
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5;
    }
    tone(3, pgm_read_word_near(song2+thisNote), noteDuration * 0.9);
    delay(noteDuration);
    noTone(3);
    if (analogRead(A0)<950){break;}}
  }else if (value > 840 && value < 870) /*button 5*/ {
    int tempo=200; 
    int divider = 0, noteDuration = 0; 
    int wholenote = (60000 * 4) / tempo;
    int notes = sizeof(song5) / sizeof(song5[0]);  // total number of notes
    // Play each note in the melody
    for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
    divider = pgm_read_word_near(song5+thisNote + 1);
    if (divider > 0) {
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5;
    }
    tone(3, pgm_read_word_near(song5+thisNote), noteDuration * 0.9);
    delay(noteDuration);
    noTone(3);
    if (analogRead(A0)<950){break;}}
  }else if (value > 930 && value < 936) /*button 6*/ {
    int notes=sizeof(song6)/sizeof(song6[0])/2; 
    int tempo=144; 
    int wholenote = (60000 * 4) / tempo;
    int divider = 0, noteDuration = 0;
    for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
      divider = pgm_read_word_near(song6+thisNote + 1);
      if (divider > 0) {
      noteDuration = (wholenote) / divider;
     } else if (divider < 0) {
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5;
     }
     tone(3, pgm_read_word_near(song6+thisNote), noteDuration * 0.9);
     delay(noteDuration);
     noTone(3);
    if (analogRead(A0)<950){break;}}
  }else if (value > 200 && value < 600) /*button 7*/ {
    int notes=sizeof(song7)/sizeof(song7[0])/2; 
    int tempo=80; 
    int wholenote = (60000 * 4) / tempo;
    int divider = 0, noteDuration = 0;
    for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
      divider = pgm_read_word_near(song7+thisNote + 1);
      if (divider > 0) {
      noteDuration = (wholenote) / divider;
     } else if (divider < 0) {
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5;
     }
     tone(3, pgm_read_word_near(song7+thisNote), noteDuration * 0.9);
     delay(noteDuration);
     noTone(3);
    if (analogRead(A0)<950){break;}}
  }else if (value > 870 && value < 890)  /*button 8*/{
    int size = sizeof(song8d) / sizeof(int);
    for (int note = 0; note < size; note++) {
      int song8ds = 1000 / song8d[note];
      tone(3, song8[note], song8ds);
      int pauseBetweenNotes = song8ds * 1.30;
      delay(pauseBetweenNotes);
      noTone(3);
      if (analogRead(A0)<950){break;}}
  }else if (value > 920 && value < 930) /*button 9*/ {
    int size = sizeof(song9d) / sizeof(int);
    for (int note = 0; note < size; note++) {
   
      int song9ds = 1000 / song9d[note];
      tone(3, song9[note], song9ds);
      int pauseBetweenNotes = song9ds * 1.30;
      delay(pauseBetweenNotes);
      noTone(3);
      if (analogRead(A0)<950){break;}
  }
  }else if (value > 0 && value < 200) /*button 10*/ {
    noTone(3);
  }else if (value > 890 && value < 909) /*button 11*/ {

  } else if (value > 909 && value < 920) /*button 12*/ {
    Serial.println("12");
    delay(500);
    int value = analogRead(A0);
    while(!(value > 909 && value < 920)){
      int value = analogRead(A0);
      Serial.println(value);
      if((value > 909 && value < 920)){break;}
      while(value > 720 && value < 800 ){
        tone(3,NOTE_C4);
        Serial.println("1");
        Serial.println(value);
        value = analogRead(A0);
      }
      noTone(3);
      while(value > 800 && value < 840){
        tone(3,NOTE_D4); 
        Serial.println("2");   
        Serial.println(value); 
        value = analogRead(A0);
      }
      noTone(3);
      while(value > 936 && value < 960){
        tone(3,NOTE_E4); 
        Serial.println("3");   
        Serial.println(value); 
        value = analogRead(A0);}
      
      noTone(3);
      while(value > 600 && value < 720){
        tone(3,NOTE_F4); 
        Serial.println("4");   
        Serial.println(value); 
        value = analogRead(A0);}
      noTone(3);
      while(value > 840 && value < 870){
        tone(3,NOTE_G4); 
        Serial.println("5");   
        Serial.println(value); 
        value = analogRead(A0);}
      noTone(3);
      while(value > 930 && value < 936){
        tone(3,NOTE_A4); 
        Serial.println("6");   
        Serial.println(value); 
        value = analogRead(A0);}
      noTone(3);
      while(value > 200 && value < 600){
        tone(3,NOTE_B4); 
        Serial.println("7");   
        Serial.println(value); 
        value = analogRead(A0);}
      noTone(3);
      while(value > 870 && value < 890){
        tone(3,NOTE_C5); 
        Serial.println("8");   
        Serial.println(value); 
        value = analogRead(A0);}
      noTone(3);
      while(value > 920 && value < 930){
        tone(3,NOTE_D5); 
        Serial.println("9");   
        Serial.println(value); 
        value = analogRead(A0);}
      noTone(3);
      while(value > 0 && value < 200){
        tone(3,NOTE_E5); 
        Serial.println("10");   
        Serial.println(value); 
        value = analogRead(A0);}
      noTone(3);
      while(value > 890 && value < 909){
        tone(3,NOTE_F5); 
        Serial.println("111");   
        Serial.println(value); 
        value = analogRead(A0);}
      noTone(3);
    }
    delay(500);}
  
delay(100);

}