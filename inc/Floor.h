// MACROS
#define MATERIAL_MAX 1
#define objFacesFloor       64

/** Vertices for the Floor object. */
static const GLshort objVertexdataFloor[]={
    0, 0, -32767, //verde
    0, 0, 32767,  //verde
    -32767, 0, 0, //rojo
    32767, 0, 0, //rojo
    
    //EJE Y
    4000, 0, -32767,
    4000, 0,  32767,
    8000, 0, -32767,
    8000, 0,  32767,
    12000, 0, -32767,
    12000, 0,  32767,
    16000, 0, -32767,
    16000, 0,  32767,
    20000, 0, -32767,
    20000, 0,  32767,
    24000, 0, -32767,
    24000, 0,  32767,
    28000, 0, -32767,
    28000, 0,  32767,
    32000, 0, -32767,
    32000, 0,  32767,
    
    -4000, 0, -32767,
    -4000, 0,  32767,
    -8000, 0, -32767,
    -8000, 0,  32767,
    -12000, 0, -32767,
    -12000, 0,  32767,
    -16000, 0, -32767,
    -16000, 0,  32767,
    -20000, 0, -32767,
    -20000, 0,  32767,
    -24000, 0, -32767,
    -24000, 0,  32767,
    -28000, 0, -32767,
    -28000, 0,  32767,
    -32000, 0, -32767,
    -32000, 0,  32767,
    
    //EJE X
     32767, 0,  4000,
    -32767, 0,  4000,
     32767, 0,  8000,
    -32767, 0,  8000,
     32767, 0,  12000,
    -32767, 0,  12000,
     32767, 0,  16000,
    -32767, 0,  16000,
     32767, 0,  20000,
    -32767, 0,  20000,
     32767, 0,  24000,
    -32767, 0,  24000,
     32767, 0,  28000,
    -32767, 0,  28000,
     32767, 0,  32000,
    -32767, 0,  32000,

    32767, 0,  -4000,
   -32767, 0,  -4000,
    32767, 0,  -8000,
   -32767, 0,  -8000,
    32767, 0,  -12000,
   -32767, 0,  -12000,
    32767, 0,  -16000,
   -32767, 0,  -16000,
    32767, 0,  -20000,
   -32767, 0,  -20000,
    32767, 0,  -24000,
   -32767, 0,  -24000,
    32767, 0,  -28000,
   -32767, 0,  -28000,
    32767, 0,  -32000,
   -32767, 0,  -32000,
   
   //eje azul
   0,  32767,  0,
   0, -32767,  0,
};

/* Define normals for the cube */
static const GLbyte objNormaldataFloor[]={
    0,127,0,
    0,127,0,
    0,127,0,
    0,127,0,
    0,127,0,
    0,127,0,
    0,127,0,
    0,127,0
};

/** Indices to the Floor object vertices. */
static const GLushort EjeVerde[2]={0, 1};
static const GLushort EjeRojo[2]={2, 3};
static const GLushort EjeAzul[2]={68, 69};

static const GLushort objFacedataFloor[32*2]={
	4,  5,
	6,  7,
	8,  9,
	10, 11,
	12, 13,
	14, 15,
	16, 17,
	18, 19,
	20, 21,
	22, 23,
	24, 25,
	26, 27,
	28, 29,
	30, 31,
	32, 33,
	34, 35,
	36, 37,
	38, 39,
	40, 41,
	42, 43,
	44, 45,
	46, 47,
	48, 49,
	50, 51,
	52, 53,
	54, 55,
	56, 57,
	58, 59,
	60, 61,
	62, 63,
	64, 65,
	66, 67
};
