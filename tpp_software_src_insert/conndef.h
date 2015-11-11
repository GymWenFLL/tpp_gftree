#ifndef HAVE_CONNDEF_H_
#define HAVE_CONNDEF_H_

#ifndef HAVE_PROTO_DEF
#ifdef INCL_PROTO_DEF
#define HAVE_PROTO_DEF

struct connections {
	int tty;
	int port;
	char baud[5];
	char processorUsage[1];
	char RAMUsage[1];
}connectionDefinition;

struct connections connTypeA;

connTypeA.tty = ttyS0;
connTypeA.baud = 38400;
connTypeA.processorUsage = 100;
connTypeA.RAMUsage = 100;

struct connections connTypeB;

connTypeB.tty = ttyS0;
connTypeB.baud = 38400;
connTypeB.processorUsage = 100;
connTypeB.RAMUsage = 0;

struct connections connTypeC;

connTypeC.tty = ttyS0;
connTypeC.baud = 38400;
connTypeC.processorUsage = 0;
connTypeC.RAMUsage = 100;

connTypeA.port = usb;	// These 3 Instructions are changable
connTypeB.port = usb;
connTypeC.port = usb;

#endif /* INCL_PROTO_DEF */

#ifdef INCL_PROTO_DEV
#define HAVE_PROTO_DEV

struct conndev {
	int logMode;
	char logEnable[1];
	int processorLogMode;
	char processorLogEnable[1];	// Don't set the bit, unless you compile a failSave Mode Driver...
	int memLogMode;
	char memLogEnable[1];		// Don't set the bit, unless you compile a failSave Mode Driver...
}

struct conndev connTypeA;
struct conndev connTypeB;
struct conndev connTypeC;

connTypeA.logMode = warning;
connTypeA.logEnable = y;
connTypeA.processorLogMode = error;
connTypeA.processorLogEnable = y;
connTypeA.memLogMode = warn;
connTypeA.memLogEnable = y;

connTypeB.logMode = warning;
connTypeB.logEnable = y;
connTypeB.processorLogMode = error;
connTypeB.processorLogEnable = y;
connTypeB.memLogMode = warn;
connTypeB.memLogEnable = y;

connTypeC.logMode = warning;
connTypeC.logEnable = y;
connTypeC.processorLogMode = error;
connTypeC.processorLogEnable = y;
connTypeC.memLogMode = warn;
connTypeC.memLogEnable = y;

#endif /* INCL_PROTO_DEV */

#endif /* HAVE_PROTO_DEF */
#endif /* HAVE_CONNDEF_H_ */