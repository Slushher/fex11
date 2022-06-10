.PHONY: cmake compile run clean

cmake:
	cmake -B cmake

compile:
	cmake --build cmake

run:
	./bin/fex11

clean:
	rm cmake -rf