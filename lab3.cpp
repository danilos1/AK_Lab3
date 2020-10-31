#include <iostream>
#include <stdio.h>
#include <getopt.h>

int main(int argc, char *argv[]) {
	printf("Computer Architecture. Labwork No. 3\n\n");
	
	bool flag[] = {0, 0, 0, 0, 0}; // flags for l, f, h, v, V options
	const char* short_opts = "l::fhvV::"; // short options, which are supported by the program
	const struct option long_opts[]  = { // long options
		{"list", optional_argument, NULL, 'l'},
		{"force", no_argument, NULL, 'f'},
		{"help", no_argument, NULL, 'h'},
		{"verbose", no_argument, NULL, 'v'},
		{"value", optional_argument, NULL, 'V'},
		{NULL, 0, NULL, 0}	
	};

	int i = 0; 
	int c = 1;
	int opt_idx = -1;
	while ((i = getopt_long(argc,argv, short_opts, long_opts, &opt_idx)) != -1){
		switch (i) {
			case 'l':
				if (!flag[0]) {
					printf("Argument #%d: List", c);
					if (optarg != NULL) printf(" = %s", optarg);
					printf("\n");
					flag[0] = 1;
				}
				break;
			case 'f':
			        if (!flag[1]) {	
					printf("Argument #%d: Forse\n", c); 
					flag[1] = 1;
				}
				break;
			case 'h': 
				if (!flag[2]) {
					printf("Argument #%d: Help\n", c); 
					flag[2] = 1;
				}
				break;
			case 'v': 
				if (!flag[3]) {
					printf("Argument #%d: Verbose\n", c++); 
					flag[3] = 1;
				}	
				break;
			case 'V':
				if (!flag[4]) {
					printf("Argument #%d: Value = %s\n", c++, optarg);
					flag[4] = 1;
				}
				break;	
			case '?':
				printf("Undefined argument\n");
		}
		opt_idx = -1;
	}
	return 0;	
}
