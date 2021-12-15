
//{{BLOCK(bg2p)

//======================================================================
//
//	bg2p, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 150 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 4800 + 2048 = 7360
//
//	Time-stamp: 2021-12-14, 19:29:46
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short bg2pTiles[2400] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x1000,0x1111,0x1100,0x1111,0x1100,0x1111,
	0x1100,0x1111,0x1000,0x1111,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,
	0x1111,0x1111,0x1111,0x1111,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x1111,0x0011,0x1111,0x0111,0x1111,0x0111,
	0x1111,0x0111,0x1111,0x0011,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0111,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x5500,0x5555,0x5500,0x5555,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x5555,0x5555,0x0000,0x5500,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x5555,0x5555,0x0005,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x5555,0x5555,0x5500,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x5555,0x0005,0x5555,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x4400,0x0000,0x4400,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x4444,0x4444,0x4444,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x4444,0x4444,0x3300,0x0003,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x4444,0x4444,0x0000,0x3300,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x4444,0x4444,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x4444,0x4444,0x4400,0x4444,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0000,0x0004,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x1000,0x0000,0x1110,0x0000,0x1111,
	0x0000,0x1000,0x0000,0x1110,0x0000,0x1111,0x1100,0x1111,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x0011,0x1111,0x0001,
	0x1111,0x0000,0x1111,0x0000,0x1111,0x0000,0x0111,0x0000,
	0x0011,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x5500,0x5555,0x5500,0x5555,0x5500,0x5555,0x5500,0x5555,
	0x5500,0x5555,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5555,0x0000,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5555,0x0000,0x5555,0x5555,0x5555,0x5555,0x5000,0x5555,
	0x5555,0x5555,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5555,0x0555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x5505,0x0005,0x5555,0x0555,0x5555,0x5555,0x5555,0x0555,
	0x5555,0x5555,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5000,0x0005,0x5000,0x0005,0x5555,0x0005,0x5000,0x0005,
	0x5555,0x0005,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x4400,0x0000,0x4400,0x0000,0x4400,0x0000,0x4400,
	0x0000,0x4400,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,
	0x4444,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x3333,0x3334,0x3233,0x4444,0x2222,0x4444,0x2000,
	0x4444,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x3333,0x2222,0x2223,0x2222,0x3322,0x2222,0x4422,
	0x4224,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0333,0x2203,0x2222,0x2222,0x4443,0x3334,0x4444,0x3344,
	0x4444,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x4000,0x0222,0x4000,0x2223,0x4444,0x0223,0x4000,
	0x4444,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0004,0x0000,0x0004,0x0000,0x0004,0x0000,0x0004,0x0000,
	0x0004,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x1110,0x0000,0x1111,0x0000,0x1111,0x0000,0x1111,
	0x0000,0x1110,0x0000,0x1100,0x0000,0x1000,0x0000,0x0000,
	0x0000,0x0000,0x0001,0x0000,0x0011,0x0000,0x1111,0x0000,
	0x1111,0x0001,0x1111,0x0011,0x1111,0x0111,0x1110,0x1111,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x1000,0x0000,0x1100,
	0x0000,0x1111,0x1000,0x1111,0x1110,0x1111,0x1111,0x1111,

	0x1100,0x1111,0x1110,0x1111,0x1111,0x1111,0x1111,0x0111,
	0x1111,0x0001,0x1111,0x0000,0x0011,0x0000,0x0001,0x0000,
	0x0111,0x0000,0x0011,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1100,0x1111,0x1000,0x1111,0x0000,0x1111,0x0000,0x1110,
	0x0000,0x1100,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0001,0x0000,0x0111,0x0000,0x1111,0x0000,0x1111,0x0001,
	0x1111,0x0011,0x1111,0x0111,0x1110,0x1111,0x1100,0x1111,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0011,0x0000,
	0x0000,0x1100,0x0000,0x1110,0x1000,0x1111,0x1100,0x1111,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x0011,0x1111,0x0001,
	0x1111,0x0111,0x1111,0x0011,0x1111,0x0000,0x0111,0x0000,
	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1000,0x1111,0x0000,0x1111,0x0000,0x1110,0x0000,0x1000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0111,0x0000,0x1111,0x0000,0x1111,0x0001,0x1111,0x0011,
	0x1111,0x1111,0x1110,0x1111,0x1100,0x1111,0x1000,0x1111,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0001,0x0000,0x0011,0x0000,0x0111,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x1000,0x0000,0x1110,
	0x0000,0x1111,0x1100,0x1111,0x1110,0x1111,0x1111,0x1111,

	0x1100,0x1111,0x1110,0x1111,0x1111,0x1111,0x1111,0x0111,
	0x1111,0x0001,0x0111,0x0000,0x0011,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0111,0x1000,0x1111,0x1110,0x1111,
	0x1111,0x0000,0x1111,0x0001,0x1111,0x0111,0x1111,0x1111,
	0x1110,0x1111,0x1100,0x1111,0x0000,0x1111,0x0000,0x1110,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0001,0x0000,0x0011,0x0000,0x0111,0x0000,0x1111,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x1100,0x0000,0x1110,0x1000,0x1111,
	0x0000,0x1100,0x0000,0x1111,0x1000,0x1111,0x1110,0x1111,
	0x1111,0x1111,0x1111,0x0111,0x1111,0x0011,0x1111,0x0000,
	0x1111,0x0111,0x1111,0x0001,0x1111,0x0000,0x0011,0x0000,
	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x1000,0x0000,0x1110,0x0000,0x1111,
	0x1000,0x1111,0x1110,0x1111,0x1111,0x1111,0x1111,0x0111,

	0x1111,0x1111,0x1111,0x0111,0x1111,0x0011,0x1111,0x0000,
	0x0111,0x0000,0x0011,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x5555,0x0000,0x5555,0x0000,0x5555,0x0000,0x5555,
	0x0000,0x5555,0x0000,0x5555,0x0000,0x5555,0x0000,0x0000,
	0x5555,0x5555,0x0055,0x0000,0x5555,0x0055,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x0000,0x0000,
	0x5555,0x5555,0x0555,0x0000,0x5500,0x0055,0x5555,0x5555,
	0x5555,0x5555,0x0055,0x5550,0x5555,0x5555,0x0000,0x0000,

	0x5555,0x5555,0x0000,0x0055,0x5500,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x0000,0x0000,
	0x5555,0x5555,0x0000,0x0000,0x0505,0x0555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x0000,0x0000,
	0x5555,0x0555,0x5555,0x0555,0x0000,0x0550,0x0005,0x0550,
	0x5555,0x0555,0x0005,0x0550,0x5555,0x0555,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x1000,0x0000,0x1100,
	0x0000,0x1100,0x0000,0x1100,0x0000,0x1000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0011,0x0000,0x0111,0x0000,
	0x1111,0x0000,0x1111,0x0001,0x1111,0x0011,0x1111,0x1111,
	0x0000,0x1100,0x0000,0x1000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1111,0x0011,0x1111,0x0111,0x1111,0x1111,0x1110,0x1111,
	0x1000,0x1111,0x0000,0x1111,0x0000,0x1110,0x0000,0x1100,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,
	0x0011,0x0000,0x1111,0x0000,0x1111,0x0001,0x1111,0x0011,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x1000,0x0000,0x1110,
	0x0000,0x1111,0x1100,0x1111,0x1110,0x1111,0x1110,0x1111,
	0x1100,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x0011,
	0x1111,0x0001,0x0111,0x0000,0x0011,0x0000,0x0000,0x0000,
	0x0111,0x0000,0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x1100,0x0000,0x1110,0x0000,0x1111,

	0x1111,0x0011,0x1111,0x0000,0x0111,0x0000,0x0001,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1110,0x1111,0x1100,0x1111,0x1000,0x1111,0x0000,0x1110,
	0x0000,0x1100,0x0000,0x1000,0x0000,0x0000,0x0000,0x0000,
	0x0001,0x0000,0x0011,0x0000,0x0111,0x0000,0x1111,0x0000,
	0x1111,0x0001,0x1111,0x0011,0x1111,0x0111,0x1110,0x1111,
	0x1111,0x0111,0x1110,0x1111,0x1100,0x1111,0x1000,0x1111,
	0x0000,0x1111,0x0000,0x1110,0x0000,0x1100,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0111,0x0000,
	0x1111,0x0000,0x1111,0x0001,0x1111,0x0011,0x1111,0x0111,
	0x1110,0x0111,0x1100,0x0001,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1100,0x1111,0x1110,0x1111,0x1111,0x1111,0x1111,0x0111,
	0x1111,0x0001,0x1111,0x0000,0x0111,0x0000,0x0001,0x0000,
	0x0011,0x0000,0x0111,0x0000,0x1111,0x0000,0x1111,0x0001,
	0x1111,0x0011,0x1111,0x0111,0x1110,0x1111,0x1100,0x1111,

	0x0000,0x0000,0x0011,0x0000,0x0111,0x0000,0x1111,0x0000,
	0x1111,0x0001,0x1111,0x0001,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x1000,0x0000,0x1100,0x0000,0x1110,0x1000,0x1111,
	0x1100,0x1111,0x1110,0x1111,0x1111,0x1111,0x1111,0x0011,
	0x1111,0x1111,0x1111,0x0011,0x1111,0x0001,0x1111,0x0000,
	0x0011,0x0000,0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0111,0x1000,0x1111,0x1100,0x1111,

	0x1000,0x1111,0x0000,0x1111,0x0000,0x1110,0x0000,0x1100,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0111,0x0000,0x1111,0x0000,0x1111,0x0001,0x1111,0x0011,
	0x1111,0x0111,0x1110,0x1111,0x1100,0x1111,0x1000,0x1111,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x1000,0x0000,0x1100,0x0000,0x1111,0x1000,0x1111,
	0x0000,0x1111,0x1000,0x1111,0x1100,0x1111,0x1111,0x1111,
	0x1111,0x0111,0x1111,0x0011,0x1111,0x0001,0x0111,0x0000,

	0x1111,0x1111,0x1111,0x0111,0x1111,0x0011,0x1111,0x0001,
	0x0111,0x0000,0x0011,0x0000,0x0001,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x1000,0x0000,0x1000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0111,0x0000,0x1111,0x0000,0x1111,0x0001,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x1000,0x0000,0x1110,
	0x0000,0x1111,0x1000,0x1111,0x1110,0x1111,0x1111,0x1111,

	0x1100,0x1111,0x1111,0x1111,0x1111,0x0111,0x1111,0x0011,
	0x1111,0x0001,0x0111,0x0000,0x0011,0x0000,0x0000,0x0000,
	0x0000,0x1100,0x0000,0x1110,0x0000,0x1111,0x1100,0x1111,
	0x1110,0x1111,0x1111,0x1111,0x1111,0x0111,0x1111,0x0001,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5550,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0x5555,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,
	0x0011,0x0000,0x0111,0x0000,0x1111,0x0000,0x1111,0x0001,
	0x1111,0x0111,0x1111,0x0011,0x1111,0x0000,0x0111,0x0000,
	0x0011,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x5550,0x0000,0x5550,0x0000,0x5550,0x0000,0x5550,
	0x0000,0x5550,0x0000,0x5550,0x0000,0x0000,0x0000,0x0000,
	0x0555,0x0000,0x5555,0x0555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x0000,0x0000,0x0000,0x0000,

	0x5550,0x0000,0x5000,0x0555,0x5555,0x5555,0x5555,0x5555,
	0x0555,0x5500,0x5555,0x5555,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0550,0x5000,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x5055,0x5550,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x0000,0x0000,0x0000,0x0000,
	0x5550,0x5555,0x0000,0x5500,0x0055,0x5500,0x5555,0x5555,
	0x0055,0x5500,0x5555,0x5555,0x0000,0x0000,0x0000,0x0000,

	0x1111,0x0001,0x1111,0x0011,0x1111,0x0111,0x1110,0x1111,
	0x1100,0x1111,0x1000,0x1111,0x0000,0x1110,0x0000,0x1100,
	0x0000,0x1111,0x1100,0x1111,0x1110,0x1111,0x1111,0x1111,
	0x1111,0x0111,0x1111,0x0001,0x1110,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x1100,0x0000,0x1110,0x0000,0x1111,
	0x1100,0x1111,0x1110,0x1111,0x1111,0x1111,0x1111,0x0111,
	0x1111,0x1111,0x1111,0x0011,0x1111,0x0001,0x1111,0x0000,
	0x0111,0x0000,0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,
	0x0011,0x0000,0x0111,0x0000,0x1111,0x0000,0x1111,0x0011,
	0x1111,0x0111,0x1110,0x0111,0x1100,0x0111,0x1000,0x0011,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x1000,0x0000,0x1100,0x0000,0x1111,
	0x1111,0x0111,0x1111,0x1111,0x1110,0x1111,0x1100,0x1111,
	0x1000,0x1111,0x0000,0x1111,0x0000,0x1110,0x0000,0x1100,

	0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0011,0x0000,
	0x0111,0x0000,0x1111,0x0000,0x1111,0x0001,0x1111,0x0011,
	0x1000,0x1111,0x1100,0x1111,0x1110,0x1111,0x1111,0x0111,
	0x1111,0x0011,0x1111,0x0001,0x1111,0x0000,0x0011,0x0000,
	0x1111,0x0111,0x1111,0x1111,0x1110,0x1111,0x1100,0x1111,
	0x0000,0x1111,0x0000,0x1110,0x0000,0x1100,0x0000,0x1000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x1100,0x0000,0x1110,
	0x0000,0x1111,0x1000,0x1111,0x1110,0x1111,0x1111,0x1111,

	0x0000,0x1000,0x0000,0x1100,0x0000,0x1111,0x1000,0x1111,
	0x1100,0x1111,0x1111,0x1111,0x1111,0x0111,0x1111,0x0011,
	0x1111,0x0111,0x1111,0x0011,0x1111,0x0000,0x0111,0x0000,
	0x0011,0x0000,0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x1110,0x1000,0x1111,0x1100,0x1111,0x1110,0x1111,
	0x1110,0x1111,0x1110,0x0011,0x1100,0x0001,0x0000,0x0000,
	0x1111,0x0001,0x0111,0x0000,0x0011,0x0000,0x0001,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x1111,0x1000,0x1111,0x1000,0x1111,0x1000,0x1111,
	0x0000,0x1111,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,
	0x1111,0x1111,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0001,0x0000,0x0011,0x0000,0x0011,0x0000,0x0011,0x0000,
	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1111,0x0111,0x1110,0x1111,0x1100,0x1111,0x1000,0x1111,
	0x0000,0x1111,0x0000,0x1110,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0001,0x0000,
	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,0x1000,0x1111,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,0x0000,
	0x1000,0x1111,0x1000,0x1111,0x0000,0x1111,0x0000,0x1000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,
	0x1000,0x1111,0x0000,0x1000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x1111,0x0000,0x1111,0x1111,0x1111,0x1111,
	0x1111,0x1111,0x1111,0x1111,0x1000,0x1111,0x0000,0x1000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,0x0000,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x1111,0x0000,0x1111,0x1111,0x1111,0x1111,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x1000,0x1100,0x1111,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x1000,0x1000,0x1111,0x1111,0x1111,0x1111,0x1111,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1000,0x1111,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,
	0x0000,0x0000,0x0000,0x1111,0x1111,0x1111,0x1111,0x1111,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x0000,0x0000,0x0000,

	0x0001,0x0000,0x0001,0x0000,0x0001,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1000,0x1111,0x0000,0x1000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x1110,0x1111,0x1111,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x1110,0x1110,0x1111,0x1111,0x1111,0x1111,0x1111,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x1100,0x1110,0x1111,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x0011,
	0x0000,0x1100,0x1100,0x1111,0x1111,0x1111,0x1111,0x1111,
	0x1111,0x1111,0x1111,0x0011,0x0011,0x0000,0x0000,0x0000,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x0111,
	0x0111,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1111,0x1111,0x1111,0x0111,0x0111,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x1111,0x0001,0x1111,0x1111,0x1111,0x1111,
	0x1111,0x1111,0x1111,0x1111,0x0000,0x1111,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x1111,0x0000,
	0x1111,0x0001,0x1111,0x0001,0x1111,0x0001,0x1111,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x1000,0x0000,0x1000,0x0000,0x1000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,0x1111,0x1111,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x0000,

	0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x0001,
	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1111,0x1111,0x1111,0x0001,0x0001,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short bg2pMap[1024] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1001,
	0x1002,0x1002,0x1002,0x1002,0x1002,0x1002,0x1002,0x1002,
	0x1002,0x1002,0x1002,0x1002,0x1002,0x1002,0x1002,0x1002,
	0x1002,0x1002,0x1003,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x1004,0x1005,0x1006,0x1007,0x1008,0x1006,0x1009,
	0x100A,0x100B,0x100C,0x100D,0x100E,0x100F,0x1010,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1011,
	0x1012,0x1013,0x1014,0x1015,0x1016,0x1017,0x1018,0x1019,
	0x101A,0x101B,0x101C,0x101D,0x101E,0x101F,0x1020,0x1021,
	0x1022,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1023,0x1024,
	0x1025,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1026,0x1027,0x1028,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x1011,0x1029,0x102A,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x102B,0x102C,0x102D,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x102E,0x102F,0x1030,0x1025,0x0000,0x0000,
	0x0000,0x0000,0x1031,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x1C2D,0x1032,0x1033,0x0000,0x0000,0x0000,
	0x0000,0x1034,0x1035,0x1036,0x0000,0x0000,0x0000,0x0000,
	0x1428,0x1037,0x1038,0x0000,0x0000,0x1039,0x103A,0x103B,
	0x103C,0x103D,0x103E,0x0000,0x103F,0x1040,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x1041,0x1042,0x1043,0x0000,0x0000,

	0x1044,0x1045,0x1046,0x0000,0x0000,0x0000,0x0000,0x1047,
	0x1832,0x1048,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x1049,0x104A,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x182E,0x104B,0x104C,0x0000,
	0x104D,0x0000,0x0000,0x0000,0x0000,0x0000,0x1849,0x104E,
	0x1046,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1C43,0x104F,
	0x142E,0x0000,0x0000,0x0000,0x0000,0x0000,0x1C4C,0x1050,

	0x0000,0x0000,0x0000,0x0000,0x1841,0x1051,0x1052,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x1053,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1054,
	0x1055,0x1C41,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x1056,0x1057,0x1C56,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x102E,0x1422,0x1058,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x1059,0x105A,0x0000,0x0000,0x0000,
	0x1C33,0x1857,0x102D,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x105B,0x105C,0x1441,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x1C25,0x105D,0x1843,0x105E,0x105F,0x105F,
	0x105F,0x105F,0x105F,0x182E,0x1C4F,0x1060,0x0000,0x0000,
	0x0000,0x1C2D,0x1032,0x1033,0x0000,0x0000,0x0000,0x0000,
	0x1C46,0x1C4E,0x1061,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x1056,0x1432,0x1C11,0x0000,0x1062,0x1063,0x1064,
	0x1065,0x1066,0x1067,0x0000,0x182E,0x1C4F,0x1060,0x0000,
	0x0000,0x0000,0x1041,0x1068,0x1060,0x0000,0x0000,0x0000,

	0x1069,0x1C47,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1849,0x1C51,0x1441,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x182E,0x1C4F,0x1060,
	0x0000,0x0000,0x0000,0x182E,0x1C27,0x1C26,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x102E,0x106A,
	0x106B,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x182E,0x1C4F,
	0x106C,0x0000,0x0000,0x0000,0x0000,0x106D,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x106E,0x142C,0x1454,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x182E,
	0x106F,0x1070,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x146C,0x1071,0x182D,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x182E,0x1072,0x1070,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x1073,0x1C37,0x1C2E,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x1C4A,0x1070,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x1841,0x1074,0x1075,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x1C4A,0x1070,0x0000,0x0000,0x0000,

	0x0000,0x1076,0x1077,0x0000,0x0000,0x0000,0x0000,0x1078,
	0x1079,0x1079,0x1079,0x1079,0x1079,0x1079,0x1079,0x1079,
	0x1079,0x1079,0x1079,0x1079,0x1079,0x1079,0x1079,0x107A,
	0x0000,0x0000,0x0000,0x0000,0x1C4A,0x1070,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x107B,0x107C,0x0000,

	0x0000,0x107D,0x107E,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x147E,0x0000,0x0000,0x0000,
	0x0000,0x107F,0x1080,0x1081,0x1082,0x1083,0x107E,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1084,0x1085,0x1086,0x1087,0x1C86,0x1088,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x1089,0x1C83,0x1C82,0x1887,
	0x1082,0x1083,0x107E,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x108A,0x108B,0x108C,0x108D,
	0x108E,0x108F,0x187E,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1C7E,0x1C83,0x1C82,0x1090,0x1091,0x0000,0x0000,0x0000,
	0x0000,0x1092,0x1093,0x1C93,0x1094,0x1095,0x1828,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short bg2pPal[256] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x6318,0x0811,0x0F96,0x073F,0x03DF,0x03FF,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(bg2p)