#define _CRT_SECURE_NO_WARNINGS
#include "header.h"

void MakeString(char* s1, char* s2, char* s3) {

	char* s1_copy = new char[strlen(s1) + 1];
	strcpy(s1_copy, s1);

	char* s2_copy = new char[strlen(s2) + 1];
	strcpy(s2_copy, s2);

	/*char* s3 = new char[strlen(s1) + strlen(s2) + 1];
	s3[0] = '\0';*/

	int32_t counter1{};
	int32_t counter2{};

	char** words1=Split(s1_copy,counter1);
	char** words2=Split(s2_copy,counter2);

	
	for (size_t i = 0; i < counter1 || i < counter2; ++i)
	{
		if (i < counter1) {
			strcat(s3, words1[i]);
			strcat(s3, " ");
		}

		if (i < counter2) {
			strcat(s3, words2[i]);
			strcat(s3, " ");
		}
	}
	
	/*if (index > 0 && s3[index - 1] == ' ') {
		s3[index - 1] = '\0';
	}
	else {
		s3[index] = '\0';
	}*/
	delete[] s1_copy;
	delete[] s2_copy;
}

char** Split(char* s, int32_t& counter) {
	char** words = new  char* [strlen(s)];
	char* token = strtok(s, " ");
	while (token != NULL) {
		words[counter++] = token;
		token = strtok(NULL, " ");
	}
	return words;
}