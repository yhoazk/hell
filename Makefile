APP=hell


all: clean ${APP}

.PHONY: clean
clean:
	rm -f ${APP}

${APP}: ./src/${APP}.cpp
	${CXX} -g -o ${APP} -Wall -Wextra ./src/${APP}.cpp
