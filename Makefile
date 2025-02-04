ifeq ($(OS),Windows_NT) 
RM = del /Q /F
CP = copy /Y
ifdef ComSpec
SHELL := $(ComSpec)
endif
ifdef COMSPEC
SHELL := $(COMSPEC)
endif
else
RM = rm -rf
CP = cp -f
endif




all: clean compile
	
compile:
	g++ -I src/include -L src/lib -o bin/main src/gameEngine/main.cpp src/gameEngine/Game.cpp -lmingw32 -lSDL2main -lSDL2

run: 
	.\bin\main.exe

clean: 
	@echo "clean project"
	-$(RM) bin\main.exe
	@echo "clean completed"

