CC := gcc

all: football.exe temperature.exe

football.exe: football_main.c football.c football.h
	$(CC) football_main.c football.c football.h -o football.exe

temperature.exe: temperature_main.c temperature.c temperature.h
	$(CC) temperature_main.c temperature.c temperature.h -o temperature.exe

clean:
	rm -f football.exe temperature.exe