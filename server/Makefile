
DIR=		bin

EXENAME=	AmiPiBorg
EXEPATH=	/$(DIR)/

INC=		INCLUDEDIRECTORY=/include

COMPILER=	SC:c/sc
LINKER=		SC:c/slink

LIBS=		LIB:sc.lib LIB:amiga.lib 

CPU=		68030

DEF_DEBUG_MEM=define=APB_DEBUG_MEM_OFF
DEF_DEBUG=opt

C_OPTS=		noicons cpu=$(CPU) $(INC) $(DEF_DEBUG_MEM) $(DEF_DEBUG) NoChkAbort

C_SOURCES=	main.c server.c stats.c memory.c objectpool.c buffer.c packetwriter.c packetreader.c remote.c connection.c
	
OBJECTS=	main.o server.o stats.o memory.o objectpool.o buffer.o packetwriter.o packetreader.o remote.o connection.o

$(EXENAME): $(OBJECTS)
   $(LINKER) WITH <<
 TO $(EXEPATH)$(EXENAME)
 FROM LIB:c.o $(OBJECTS)
 LIBRARY $(LIBS) NOICONS ADDSYM
<

.c.o:
	$(COMPILER) $(C_OPTS) $*.c

clean:
	@Delete $(OBJECTS)
	@Delete $(EXEPATH)$(EXENAME)