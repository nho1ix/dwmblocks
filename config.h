//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,                      9},
	/* {"",	"music",	                        0,                      11}, */
	/* {"",	"pacpackages",	                        0,                      8},  */
	/* {"",	"crypto",	                        0,                      13}, */
	/* {"",	"price bat \"Basic Attention Token\" 🦁",	0,	20}, */
	/* {"",	"price btc Bitcoin 💰",				0,	21}, */
	/* {"",	"price lbc \"LBRY Token\" 📚",			0,	22}, */
	{"",	"disk",	                             14400,	                19}, 
	{"",	"memory",	                        60,             	14}, 
        {"",	"cpu",		                         7,                      18}, 
	/* {"",	"moonphase",	                     18000,	                17}, */
	/* {"",	"nettraf",	                         1,	                16}, */
	{"",	"weather",	                     18000,	                5},
	{"",	"volume",	                         0,	                10},
	{"",	"battery",	                        60,	                3},
	{"",	"clock",	                        60,	                1},
	{"",	"internet",	                         7,	                4},
        /* {"",	"help-icon",	                         0,	                15}, */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

//  autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
