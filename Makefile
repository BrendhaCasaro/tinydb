default: run

prepare:
	if [! -d build]; then mkdir build; fi

run: prepare
	gcc main.c -lreadline -o build/tinydb
	./build/tinydb