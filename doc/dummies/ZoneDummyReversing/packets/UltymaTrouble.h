#ifndef UltymaTrouble_H
#define UltymaTrouble_H

char test1_combatanimation[] = {
0x00, 0x09, 
0x00, 0x00, 

0x05, 0x00, 
0x0C, 0x5F, 0xA7, 0x68, 
//0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //OBJECTID
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00,
0x4F, 0x45, 0x52, 0x43, 
0x06, 
0xB2, 0x00, 0x00, 0x00,  //size

0x16, 0x00, 
0x3D, 0x00, 0x00, 0x00, 

0x00, 0x00, 0x00, 0x00, //unknown INT
0x00, 0x00, 0x00, 0x00, //unknown INT

0x01, 0x00, // PLAYER LEVEL / CON
         
0x00, 0x00, //dance or music type

0x07, 0x00, //Mood String Size
0x6E, 0x65, 0x75, 0x74, 0x72, 0x61, 0x6C, //mood "neutral"

0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,//WEAO ID?
0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //some other IDs
0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, //unknown INT
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //unknown LONG
0x00, //unknown BYTE

0x00, 0x00, 0x00, 0x00, 
0x50, 0xC3, 0x00, 0x00, //GUILD ID
 
0x09, 0x00, 0x00, 0x00, //HAM
0x09, 0x00, 0x00, 0x00, 

0x39, 0x05, 0x00, 0x00, 
0x3A, 0x05, 0x00, 0x00, 
0x3B, 0x05, 0x00, 0x00, 
0x3C, 0x05, 0x00, 0x00, 
0x3D, 0x05, 0x00, 0x00, 
0x3E, 0x05, 0x00, 0x00, 
0x3F, 0x05, 0x00, 0x00, 
0x40, 0x05, 0x00, 0x00, 
0x41, 0x05, 0x00, 0x00,  

0x09, 0x00, 0x00, 0x00, 
0x09, 0x00, 0x00, 0x00, 

0x39, 0x05, 0x00, 0x00, 
0x3A, 0x05, 0x00, 0x00, 
0x3B, 0x05, 0x00, 0x00, 
0x3C, 0x05, 0x00, 0x00, 
0x3D, 0x05, 0x00, 0x00, 
0x3E, 0x05, 0x00, 0x00, 
0x3F, 0x05, 0x00, 0x00, 
0x40, 0x05, 0x00, 0x00, 
0x41, 0x05, 0x00, 0x00, 

0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 


0x00, 0x00,  
0x00, 0x00, 0x00, 

/*0x00, 0x09, 
0x00, 0x00, 
0x05, 0x00, 
0x46, 0x5E, 0xCE, 0x80, 
0x1B, 0x00, 0x00, 0x00, 
0xCC, 0x00, 0x00, 0x00, 
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00,    //LONG 1 PART 1 MUST MATCH PART 2
0x00, 0x00, 0x00, 0x00,  //INT 1 ALWAYS SEEN AS 0. 
//0x18, 0x02, 0x34, 0xBF,  //ATTACK ID <-- CRC OF ANIMATION?
//8FD738F3
0xF3, 0x38, 0xD7, 0x8F,

0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00,  //LONG 1 PART 2 MUST MATCH PART 1
0x98, 0x61, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00,   //LONG 2, MAYBE TARGET ID OR WEAO ID
0x00, // MUST BE 9 to play skill animation
0xFF, 0xFF,  // 0xFFFF enables red trail
0x01, 0x00, // number of defenders; each defender needs a uint64 with defender id + uint32 unk
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00, // LONG defender ID
0x00, 0x00, 0x00, 0x00, //unk

0x00, 0x00, 0x00, //CRC+COMP*/
};

/*char test2_HAMUpdate[] = {
0x00, 0x09,
0x00, 0x00,
0x05, 0x00, 
0x53, 0x21, 0x86, 0x12, 
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00, //OBJECTID
0x4F, 0x45, 0x52, 0x43, 0x03, 
127, 0x00, 0x00, 0x00, 
0x02, 0x00,

0x11, 0x00,  //for wounds, this goes totally the same as HAM update on CREO6

0x02, 0x00, 0x00, 0x00, 
0x01, 0x00, 0x00, 0x00, 

0x03,
0x03, 0x00,
0x00, 0x01, 0x00, 0x00,
0x00, 0x01, 0x00, 0x00,
0x00, 0x01, 0x00, 0x00,
0x00, 0x01, 0x00, 0x00,
0x00, 0x01, 0x00, 0x00,
0x00, 0x01, 0x00, 0x00,

0x00,0x00,0x00,  
};*/

char test2_HAMUpdate[] = {
0x00, 0x09, 
0x00, 0x00,
0x05, 0x00, 
0x46, 0x5E, 0xCE, 0x80, 
0x1B, 0x00, 0x00, 0x00, 
0xCC, 0x00, 0x00, 0x00, 
0x16, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0xC1, 0x49, 0x6B, 0x10, 
0x16, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00,  
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 
0x00, 0x00, 0x00,
/*0x00, 0x09, 
0x00, 0x00, 
0x05, 0x00, 
0x46, 0x5E, 0xCE, 0x80, 
0x1B, 0x00, 0x00, 0x00, 
0xCC, 0x00, 0x00, 0x00, 
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00,    //ATTACKER ID
0x00, 0x00, 0x00, 0x00,  //PADDING 
0x08, 0xE3, 0x38, 0x40, //CRC OF ANIMATION
 
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00,  //ATTACKER ID
0x1A, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00,   //WEAPON ID
0x00, // MUST BE 9 to play skill animation
0x01, 0x01,  // 0xFFFF enables red trail

0x01, 0x00, // number of defenders; each defender needs a uint64 with defender id + uint32 unk

0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // DEFENDER ID
0x00, //POSTURE 
0x01, //WHEN THIS IS SET TO 01, IT PLAYS THE HIT SOUND, AND SAYS "UNKNOWN VARIABLE DAMG" or something.
0x00, 
//0x00, 0x00, 0x00, // 0xFF, //FLAG IF DAMAGE WAS DONE, 0 or 1. HIT OR MISS.
0x00, 0x00, 0x00, //CRC+COMP*/    
};

/*char test2_HAMUpdate[] = {
0x00, 0x09,
0x00, 0x00,
0x05, 0x00, 
0x46, 0x5E, 0xCE, 0x80, 
0x1B, 0x00, 0x00, 0x00, 
0xCC, 0x00, 0x00, 0x00, 
0x16, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00, //ATTACKER ID
0x00, 0x00, 0x00, 0x00, 
0x3B, 0xE7, 0x3E, 0x29, //CRC OF ANIMATION
0x16, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00, //ATTACKER ID
0x9E, 0x9A, 0xFC, 0x1C, 0x17, 0x00, 0x00, 0x00, //WEAPON ID
0x00, //POSTURE ID OF ATTACKER
0x10, 
0x00, 
0x02, 0x01, //0xE7, 0x05

0x9E, 0x19, 0x01, 0x00, 0x15, 0xA8, 0x0A, 0x56, 
0x03, 
0x00, 
0x00, 

0x00, 0x00, 0x01, 0x01, 0x02, 0x0D, 0x00, 0x00,
0x03, 
0x00, 
0x00, 

0x00, 0x00, 0x00,
};*/


char test3_UpdateTarget[] = {
0x00, 0x09,
0x00, 0x00,
0x05, 0x00, 
0x0c, 0x5f, 0xa7, 0x68,
0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
'O','A','E','W',
0x06,
77+6+5+0x0e, 0x00, 0x00, 0x00,
0x11+1, 0x00, 
0x02, 0x00, 
0x00, 0x00, 61, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 0x00, 0x00
};

char test3_UpdateTarget2[] = {
0x00, 0x09, 
0x00, 0x00, 
0x05, 0x00, 
0x53, 0x21, 0x86, 0x12, 
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00, //PLAYER ID
0x4F, 0x45, 0x52, 0x43, 0x03, 
17, 0x00, 0x00, 0x00,  //0x19, 0x00, 0x00, 0x00,

0x01, 0x00,  

0x5, 0x00,
0x01, 0x00, 0x00, 0x00,
0x05, 0x00, 0x00, 0x00,

0x01,
0x15, 0x00, 0x00, 0x00,
    
0x00, 0x00, 0x00,     
};

char giveexp[] = {
0x00, 0x09, 
0x00, 0x00, 
0x05, 0x00, 
0x53, 0x21, 0x86, 0x12, 
0x21, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00,
0x59, 0x41, 0x4C, 0x50, 0x06, 
0x8, 0x00, 0x00, 0x00, 
0x01, 0x00, 
0x0A, 0x00, 
0x50, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 
};

char test3_UpdateTarget3[] = {
0x00, 0x09, 
0x00, 0x00, 
0x05, 0x00, 
0x53, 0x21, 0x86, 0x12, 
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00,
0x4F, 0x45, 0x52, 0x43, 0x06, 
0x0C, 0x00, 0x00, 0x00, 
0x01, 0x00, 
0x0A, 0x00, 
0x98, 0x61, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00,      
};


char test4_LinkDead[] = {
0x00, 0x09, 
0x00, 0x00, 
0x05, 0x00, 
0x53, 0x21, 0x86, 0x12, 
0x21, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00, //PLAY ID
0x59, 0x41, 0x4C, 0x50, 0x03, 
0x18, 0x00, 0x00, 0x00, 0x01, 0x00, 0x05, 0x00, 0x04, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 
0x00, 0x00, 0x00,         
};

char test5_SpawnTravelTerminal[] = {
0x00, 0x09, 
0x00, 0x00, 
0x00, 0x19, 
0x2F, 
0x05, 0x00, 
0xEA, 0xDD, 0x89, 0xFE, 
0xE9, 0x58, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x1D, 0xF6, 0x99, 0xBE, 
0x00, 0x00, 0x00, 0x00, 
0xCB, 0x26, 0x74, 0x3F, 

0x26, 0x78, 0x32, 0xC3, //-178 X
0x00, 0x00, 0xE0, 0x41,  //Z
0x6B, 0x87, 0x97, 0xC5, //-4848 Y

0xFC, 0xF0, 0x02, 0x74, 

0x00, 0x1A, 0x04, 0x00, 0x9E, 0xDE, 0xCB, 0x56, 0xE9, 0x58, 0x90, 
0x19, 0x17, 0x00, 0x00, 0x00, 0xBF, 0xEE, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 
0xFF, 0x64, 0x05, 0x00, 0x0C, 0x5F, 0xA7, 0x68, 0xE9, 0x58, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, 
0x4F, 0x4E, 0x41, 0x54, 0x03, 0x4D, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 
0x00, 0x74, 0x65, 0x72, 0x6D, 0x69, 0x6E, 0x61, 0x6C, 0x5F, 0x6E, 0x61, 0x6D, 0x65, 0x00, 0x00, 
0x00, 0x00, 0x0F, 0x00, 0x74, 0x65, 0x72, 0x6D, 0x69, 0x6E, 0x61, 0x6C, 0x5F, 0x74, 0x72, 0x61, 
0x76, 0x65, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x64, 0x00, 0x00, 0x00, 0x01, 0x43, 0x05, 0x00, 0x0C, 0x5F, 0xA7, 0x68, 0xE9, 0x58, 0x90, 
0x19, 0x17, 0x00, 0x00, 0x00, 0x4F, 0x4E, 0x41, 0x54, 0x06, 0x2C, 0x00, 0x00, 0x00, 0x02, 0x00, 
0x6E, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x74, 0x65, 0x72, 0x6D, 0x69, 0x6E, 0x61, 0x6C, 0x5F, 0x64, 
0x65, 0x74, 0x61, 0x69, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x74, 0x65, 0x72, 0x6D, 0x69, 
0x6E, 0x61, 0x6C, 0x5F, 0x74, 0x72, 0x61, 0x76, 0x65, 0x6C, 0x16, 0x04, 0x00, 0x26, 0xC1, 0xA1, 
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE9, 0x58, 0x90, 0x19, 0x17, 0x00, 0x00, 
0x00, 0x0E, 0x02, 0x00, 0x37, 0x60, 0x43, 0x2C, 0xE9, 0x58, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, 
0x2F, 0x05, 0x00, 0xEA, 0xDD, 0x89, 0xFE, 0xEC, 0x58, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0xAE, 
0x47, 0x21, 0x40, 0x12, 0xB1, 0x23, 0x3F, 0x7B, 0x14, 0x48, 0x42, 0xFC, 0xF0, 0x02, 0x74, 0x00, 
0x1A, 0x04, 0x00, 0x9E, 0xDE, 0xCB, 0x56, 0xEC, 0x58, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, 0xBF, 
0xEE, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x64, 0x05, 0x00, 0x0C, 0x5F, 
0xA7, 0x68, 0xEC, 0x58, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, 0x4F, 0x4E, 0x41, 0x54, 0x03, 0x4D, 
0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x74, 0x65, 0x72, 0x6D, 0x69, 
0x6E, 0x61, 0x6C, 0x5F, 0x6E, 0x61, 0x6D, 0x65, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x74, 0x65, 
0x72, 0x6D, 0x69, 0x6E, 0x61, 0x6C, 0x5F, 0x74, 0x72, 0x61, 0x76, 0x65, 0x6C, 0x00, 0x00, 0x00, 
0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x01, 
0x00, 0x00, 0x00,       
};

char test6_CreateMission[] = {
0x00, 0x09, 
0x00, 0x00, 
0x00, 0x19,
0x2F, 
0x05, 0x00, 
0xEA, 0xDD, 0x89, 0xFE, 
0xB7, 0x85, 0xA4, 0x1C, 0x17, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x80, 0x3F, 

0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x7A, 0x4E, 0x06, 0xDF, 
0x00, 

0x1A, 
0x04, 0x00, 
0x9E, 0xDE, 0xCB, 0x56, 
0xB7, 0x85, 0xA4, 0x1C, 0x17, 0x00, 0x00, 0x00, 
0x17, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00,
0xFF, 0xFF, 0xFF, 0xFF, 

0xDA, 
0x05, 0x00, 0x0C, 0x5F, 0xA7, 0x68, 0xB7, 0x85, 0xA4, 
0x1C, 0x17, 0x00, 0x00, 0x00, 0x4F, 0x53, 0x49, 0x4D, 0x03, 0xC3, 0x00, 0x00, 0x00, 0x11, 0x00, 
0x00, 0x00, 0x80, 0x3F, 0x16, 0x00, 0x6D, 0x69, 0x73, 0x73, 0x69, 0x6F, 0x6E, 0x2F, 0x6D, 0x69, 
0x73, 0x73, 0x69, 0x6F, 0x6E, 0x5F, 0x6F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x00, 0x00, 0x00, 0x00, 
0x0F, 0x00, 0x64, 0x65, 0x73, 0x74, 0x72, 0x6F, 0x79, 0x5F, 0x6D, 0x69, 0x73, 0x73, 0x69, 0x6F, 
0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB8, 0x85, 0xA4, 0x1C, 0x17, 0x00, 0x00, 0x00, 0x01, 
0x00, 0x25, 0x05, 0x00, 0x0C, 0x5F, 0xA7, 0x68, 0xB7, 0x85, 0xA4, 0x1C, 0x17, 0x00, 0x00, 0x00, 
0x4F, 0x53, 0x49, 0x4D, 0x06, 0x0E, 0x00, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x05, 0x00, 0x0C, 0x5F, 0xA7, 0x68, 0xB7, 0x85, 
0xA4, 0x1C, 0x17, 0x00, 0x00, 0x00, 0x4F, 0x53, 0x49, 0x4D, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x19, 0x05, 0x00, 0x0C, 0x5F, 0xA7, 0x68, 0xB7, 0x85, 0xA4, 0x1C, 0x17, 0x00, 0x00, 0x00, 
0x4F, 0x53, 0x49, 0x4D, 0x09, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x02, 0x00, 0x37, 0x60, 
0x43, 0x2C, 0xB7,     
};

char test7_SpawnResource[] = {
0x00, 0x09, 
0x00, 0x00,
0x00, 0x19, 
0x2F, 
0x05, 0x00, 
0xEA, 0xDD, 0x89, 0xFE, 
0xF2, 0xAE, 0x2F, 0xAF, 0x0E, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0xF3, 0x04, 0x35, 0x3F, 
0x00, 0x00, 0x00, 0x00, 
0xF3, 0x04, 0x35, 0x3F, 

0x71, 0x61, 0xE4, 0xC4, 
0x9A, 0xE4, 0x2E, 0x41, 
0x51, 0xBD, 0x8B, 0xC5,
 
0x70, 0x2B, 0x15, 0x4F, 
0x00, 

0x1A, 
0x04, 0x00, 
0x9E, 0xDE, 0xCB, 0x56, 
0xF2, 0xAE, 0x2F, 0xAF, 0x0E, 0x00, 0x00, 0x00, 
0x16, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00,
0xFF, 0xFF, 0xFF, 0xFF, 
0x6F, 0x05, 0x00, 0x0C, 0x5F, 0xA7, 0x68, 0xF2, 0xAE, 0x2F, 
0xAF, 0x0E, 0x00, 0x00, 0x00, 0x4F, 0x4E, 0x43, 0x52, 0x03, 0x58, 0x00, 0x00, 0x00, 0x0D, 0x00, 
0x00, 0x00, 0x80, 0x3F, 0x17, 0x00, 0x72, 0x65, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x72, 
0x65, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x5F, 0x6E, 0x61, 0x6D, 0x65, 0x73, 0x00, 0x00, 0x00, 
0x00, 0x04, 0x00, 0x62, 0x6F, 0x6E, 0x65, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x01, 0xBF, 0x03, 0x00, 0x00, 0x94, 0x0E, 
0x69, 0x9C, 0x0E, 0x00, 0x00, 0x00, 0x85, 0x05, 0x00, 0x0C, 0x5F, 0xA7, 0x68, 0xF2, 0xAE, 0x2F, 
0xAF, 0x0E, 0x00, 0x00, 0x00, 0x4F, 0x4E, 0x43, 0x52, 0x06, 0x6E, 0x00, 0x00, 0x00, 0x06, 0x00, 
0x6E, 0x00, 0x00, 0x00, 0x14, 0x00, 0x72, 0x65, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x5F, 0x63, 
0x6F, 0x6E, 0x74, 0x61, 0x69, 0x6E, 0x65, 0x72, 0x5F, 0x64, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 
0x6F, 0x72, 0x67, 0x61, 0x6E, 0x69, 0x63, 0x5F, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x75, 0x72, 
0x65, 0x5F, 0x73, 0x6D, 0x61, 0x6C, 0x6C, 0xA0, 0x86, 0x01, 0x00, 0x15, 0x00, 0x62, 0x6F, 0x6E, 
0x65, 0x5F, 0x6D, 0x61, 0x6D, 0x6D, 0x61, 0x6C, 0x5F, 0x64, 0x61, 0x6E, 0x74, 0x6F, 0x6F, 0x69, 
0x6E, 0x65, 0x07, 0x00, 0x00, 0x00, 0x47, 0x00, 0x61, 0x00, 0x63, 0x00, 0x68, 0x00, 0x65, 0x00, 
0x62, 0x00, 0x69, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x05, 0x00, 0x0C, 
0x5F, 0xA7, 0x68, 0xF2, 0xAE, 0x2F, 0xAF, 0x0E, 0x00, 0x00, 0x00, 0x4F, 0x4E, 0x43, 0x52, 0x08, 
0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x05, 0x00, 0x0C, 0x5F, 0xA7, 0x68, 0xF2, 0xAE, 0x2F, 
0xAF, 0x0E, 0x00, 0x00, 0x00, 0x4F, 0x4E, 0x43, 0x52, 0x09, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x0E, 0x02, 0x00, 0x37, 0x60, 0x43, 0x2C, 0xF2, 0xAE, 0x2F, 0xAF, 0x0E, 0x00, 0x00, 0x00, 

0x00,0x00,0x00,        
};

char test_unknown1[] = {
0x00, 0x09,
0x00, 0x00,
0x05, 0x00, 
0x46, 0x5E, 0xCE, 0x80, 
0x0B, 0x00, 0x00, 0x00, 
0x34, 0x01, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

0x05, 0x00, 
0x63, 0x6D, 0x64, 0x5F, 0x6E, 
0x00, 0x00, 0x00, 0x00, 
0x0C, 0x00, 
0x73, 0x61, 0x62, 0x65, 0x72, 0x74, 0x68, 0x72, 0x6F, 0x77, 0x5F, 0x32, 

0x01, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x60, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x01, 0x00, 0x00, 
0x87, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,    
0x00,0x00,0x00,          
};


char test_unknown2[] = {
0x00, 0x09,
0x00, 0x00,
0x05, 0x00, 
0x46, 0x5E, 0xCE, 0x80, 
0x2B, 0x00, 0x00, 0x00, 
0x5B, 0x04, 0x00, 0x00, 
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00, //objid
0x23, 0x00, 0x00, 0x00, 
0x22, 0x00, 0x63, 
0x6C, 0x61, 0x73, 0x73, 0x5F, 0x66, 0x6F, 0x72, 0x63, 0x65, 0x73, 0x65, 0x6E, 0x73, 0x69, 0x74, 
0x69, 0x76, 0x65, 0x5F, 0x70, 0x68, 0x61, 0x73, 0x65, 0x34, 0x5F, 0x6D, 0x61, 0x73, 0x74, 0x65, 
0x00, 0x00, 0x00,       
     
};

char test_unknown3[] = {
//Black Question Mark Packet.
0x00, 0x09, 
0x00, 0x00, 
0x00, 0x19, 
0x1F, 
0x05, 0x00, 
0x53, 0x21, 0x86, 0x12, 
0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //OBJECTID
0x4F, 0x45, 0x52, 0x43, 0x03, 
0x08, 0x00, 0x00, 0x00, 
0x01, 0x00, 0x06, 0x00, 
0x80, 0x00, 0x00, 0x00, 

0x4F, 
0x05, 0x00, 
0x46, 0x5E, 0xCE, 0x80, 
0x13, 0x00, 0x00, 0x00, 
0xBD, 0x01, 0x00, 0x00, 
0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //OBJECTID
0x00, 0x00, 0x00, 0x00, 
0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //OBJECTID
0x14, 0x00, 
0x6E, 0x70, 0x63, 0x5F, 0x72, 0x65, 0x61, 0x63, 0x74, 0x69, 
0x6F, 0x6E, 0x2F, 0x66, 0x6C, 0x79, 0x74, 0x65, 0x78, 0x74, 
0x00, 0x00, 0x00, 0x00, 
0x05, 0x00, 
0x61, 0x6C, 0x65, 0x72, 0x74, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x40, 
0xFF, 0x45, 0x00, 0x00, 
0x00, 0x00, 0x00,          
};

char test_unknown4[] = {
0x00,0x09,
0x00,0x00,
0x05, 0x00, 
0x46, 0x5E, 0xCE, 0x80, 
0x0B, 0x00, 0x00, 0x00, 
0x17, 0x01, 0x00, 0x00, 
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00, //objid
0x00, 0x00, 0x00, 0x00, 
0x20, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00,      
};

char test_unknown5[] = {
//sandstorm I think.
0x00, 0x09, 
0x00, 0x00, 
0x00, 0x19, 
0x0E, 
0x02, 0x00, 
0xD9, 0x3B, 0xBC, 0x2E,
0x67, 0x5D, 0x72, 0x05, 0x00, 0x00, 0x00, 0x00, 

0x46, 
0x09, 0x00, 
0x74, 0x9E, 0x94, 0x02, 0x1F, 0x00, 0x61, 0x70, 
0x70, 0x65, 0x61, 0x72, 0x61, 0x6E, 0x63, 0x65, 0x2F, 0x6D, 0x75, 0x73, 0x74, 0x5F, 0x64, 0x75, 
0x73, 0x74, 0x64, 0x65, 0x76, 0x69, 0x6C, 0x5F, 0x33, 0x2E, 0x70, 0x72, 0x74, 
0x03, 0x00, 0x6C, 
0x6F, 0x6B, 0xE1, 0x30, 0xA5, 0xC4, 0xA4, 0xB4, 0x93, 0x41, 0x91, 0xFD, 0xA3, 0xC5, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00,         
};

/*char test_unknown6[] = {
//MIGHT BE HAM UPDATE.
0x00, 0x09,
0x00, 0x00,
0x05, 0x00, 
0x53, 0x21, 0x86, 0x12, 
0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //OBJECTID
0x4F, 0x45, 0x52, 0x43, 0x06, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0F, 0x00, 
0x01, 0x00, 0x00, 0x00, 0xDA, 0x11, 0x00, 0x00, 0x02, 0x00, 0x00, 0x58, 0x1F, 0x00, 0x00,   
0x00,0x00,0x00,    
};*/

char test_unknown6[] = {
//MIGHT BE HAM UPDATE.
0x00, 0x09,
0x00, 0x00,
0x05, 0x00, 
0x53, 0x21, 0x86, 0x12, 
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00,0x00, 0x00,  //OBJECTID (used to be 0x15)
0x4F, 0x45, 0x52, 0x43, //CREO 6
0x06,
0x25, 0x00, 0x00, 0x00,  //block size (used to be 0x13)
0x01, 0x00,
0x0F, 0x00,
0x01, 0x00, 0x00, 0x00,
0xDA, 0x11, 0x00, 0x00,
0x02,
0x00, 0x00,
0x04, 0x00,  //ascii size, !!incorrect (used to be 0x58, 0x1F)
0x74, 0x65, 0x73, 0x74,  //missing ascii string, extending packet
0x00, 0x00, 0x00, 0x00,
0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //OBJECT ID (used to be 0x05)
0x00, 0x00, 0x00, 0x00,
0x00,0x00,0x00,    
};

char test_unknown7[] = {
0x00, 0x09,
0x00, 0x00,
0x05, 0x00, 
0x46, 0x5E, 0xCE, 0x80, 
0x0B, 0x00, 0x00, 0x00, 0x48, 0x04, 0x00, 0x00, 
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00,

0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x40, 0x18, 0x58, 0x8C, 0xF3,    
0x00, 0x00, 0x00,       
};

char test_unknown8[] = {
0x00, 0x09,
0x00, 0x00,
0x05, 0x00, 0x46, 
0x5E, 0xCE, 0x80, 0x0B, 0x00, 0x00, 0x00, 0x17, 0x01, 0x00, 0x00, 
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00,        
};

char test_unknown9[] = {
0x00, 0x09, 
0x00, 0x00, 
0x05, 0x00, 
0x46, 0x5E, 0xCE, 0x80, 
0x0B, 0x00, 0x00, 0x00, 
0x47, 0x01, 0x00, 0x00, 
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00,

0x00, 0x00, 0x00, 0x00, 

0x98, 0x61, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, 
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00, 

0x02, 0x00, 
0x00, 0x00, 0x01, 0x00, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x01, 0x00, 0x00, 
0x00, 0x00, 0x0C, 

0x00, 0x00, 0x00,        
};

char test_unknown10[] = {
0x00, 0x09,
0x00, 0x00,
0x05, 0x00, 0x46, 0x5E, 0xCE, 0x80, 
0x0B, 0x00, 0x00, 0x00, 
0x34, 0x01, 0x00, 0x00, 
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00, //PLAYER ID
0x00, 0x00, 0x00, 0x00, 
0x02, 
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00, //PLAYER ID
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x40, 0x00, 0x63, 0x00, 0x62, 0x00, 0x74, 0x00, 
0x5F, 0x00, 0x73, 0x00, 0x70, 0x00, 0x61, 0x00, 0x6D, 0x00, 0x3A, 0x00, 0x69, 0x00, 0x6E, 0x00, 
0x76, 0x00, 0x61, 0x00, 0x6C, 0x00, 0x69, 0x00, 0x64, 0x00, 0x5F, 0x00, 0x74, 0x00, 0x61, 0x00, 
0x72, 0x00, 0x67, 0x00, 0x65, 0x00, 0x74, 0x00, 0x0A, 0x00, 0x00, 0x00, 

0x00, 0x00, 0x00,     
};

char test_unknown11[] = {
0x00, 0x09, 
0x00, 0x00, 
0x05, 0x00, 
0x46, 0x5E, 0xCE, 0x80, 
0x0B, 0x00, 0x00, 0x00, 
0x34, 0x01, 0x00, 0x00, 
0xF5, 0xE5, 0xC8, 0x91, 

0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xB0, 0x61, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, 
0xF5, 0xE5, 0xC8, 0x91, 0x0D, 0x00, 0x00, 0x00, 
0xB5, 0x61, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, 

0x05, 0x00, 
0x63, 0x6D, 0x64, 0x5F, 0x6E, //CMD_N
0x00, 0x00, 0x00, 0x00, 

0x06, 0x00, 
0x61, 0x74, 0x74, 0x61, 0x63, 0x6B, //ATTACK

0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 
0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00,      
};
#endif
