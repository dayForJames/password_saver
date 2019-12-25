#ifndef TOLOW_H_INCLUDED
#define TOLOW_H_INCLUDED

string tolow(string str) {
	for (auto &i : str)
		i = tolower(i);
	return str;
}

#endif
