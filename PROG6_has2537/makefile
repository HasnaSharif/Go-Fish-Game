CPP  = g++
RES  =
OBJ  = card.o deck.o player.o go_fish.o $(RES)
LINKOBJ  = card.o deck.o player.o go_fish.o $(RES)
BIN  = gofish
CXXFLAGS = $(CXXINCS)
CFLAGS = $(INCS)
RM = rm -f


all: gofish

clean:
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o gofish $(LIBS)

card.o: card.cpp
	$(CPP) -c card.cpp -o card.o $(CXXFLAGS)

deck.o: deck.cpp
	$(CPP) -c deck.cpp -o deck.o $(CXXFLAGS)

player.o: player.cpp
	$(CPP) -c player.cpp -o player.o $(CXXFLAGS)

go_fish.o: go_fish.cpp
	$(CPP) -c go_fish.cpp -o go_fish.o $(CXXFLAGS)


