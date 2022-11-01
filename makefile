# Outs
MAIN_OUT = MAIN.o
CPP_CD_OUT = CD.o
CPP_DVD_OUT = DVD.o
CPP_MIDIA_OUT = MIDIA.o
FILES = $(MAIN_OUT) $(CPP_CD_OUT) $(CPP_DVD_OUT) $(CPP_MIDIA_OUT)

# Files
MAIN_FILE = main.cpp
CD_FILE = CD.cpp
DVD_FILE = DVD.cpp
MIDIA_FILE = MIDIA.cpp
# Flags
COMPILER = g++
OUTPUT_OPT = -o
OPT_CPP = -c
WALL_OPT = -Wall
CLS = *.o
ALL_OPT = run
#
#	make - Para compilar.
#	make cls - Para limpar as saidas e o terminal
#	Ps.: Sempre limpar antes da proxima execução, ou vai dar erro
#
all:$(ALL_OPT)
$(ALL_OPT): $(FILES)
	$(COMPILER) $(FILES) $(OUTPUT_OPT) $@
	@./$(ALL_OPT)

$(MAIN_OUT):$(MAIN_FILE)
	$(COMPILER) $(OPT_CPP) $(MAIN_FILE) $(OPT_CPP) $(OUTPUT_OPT) $(MAIN_OUT) $(WALL_OPT)



cls:
	@rm $(CLS)
	@rm $(ALL_OPT)
	@clear