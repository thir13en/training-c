#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>


void flush_in() {
    int ch;

    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

int main() {
	char *programName = "firefox";
	char *url = malloc(512);

	printf("Select a module and press ENTER to study today...\n");

	printf("0 -> Index\n");
	for (int i=1; i<=5; i++) {
		printf("%d -> Module %d\n", i, i);
	}

	int moduleNumber;

	while(1) {
		scanf("%d", &moduleNumber);

		if (moduleNumber >= 0 && moduleNumber <= 5) {

			printf("Going to module %d...\n", moduleNumber);

			switch(moduleNumber) {
				case 0:
					strcpy(url, "https://cv.uoc.edu/webapps/aulaca/classroom/Materials.action?s=32fac9d1b034a2ca65015819274d48d5c9bcca788bad06424fb5fb7ccf9548086fc5ec98463c4c39f36cedc35d8dee54b7e42160318644e3181d2ba788a58171&origin=cv&classroomId=757265&subjectId=753796&javascriptDisabled=false");
					break;

				case 1:
					strcpy(url, "http://cv.uoc.edu/annotation/40a4c2cc6eaa1963a65ebbce8e88d598/753796/PID_00267990/PID_00267990.html");
					break;

				case 2:
					strcpy(url, "http://cv.uoc.edu/annotation/40a4c2cc6eaa1963a65ebbce8e88d598/753796/PID_00267992/PID_00267992.html");
					break;

				case 3:
					strcpy(url, "http://cv.uoc.edu/annotation/40a4c2cc6eaa1963a65ebbce8e88d598/753796/PID_00267991/PID_00267991.html");
					break;

				case 4:
					strcpy(url, "http://cv.uoc.edu/annotation/40a4c2cc6eaa1963a65ebbce8e88d598/753796/PID_00267993/PID_00267993.html");
					break;

				case 5:
					strcpy(url, "http://cv.uoc.edu/annotation/40a4c2cc6eaa1963a65ebbce8e88d598/753796/PID_00267994/PID_00267994.html");
					break;

				default:
					printf("ERROR\n");
					return -1;
			}

			// run firefox command with selected module
			execlp(programName, programName, url, NULL);

			// free malloc
			free(url);

			return 0;
		}

		// flush input
		flush_in();
	}

	return 0;
}
