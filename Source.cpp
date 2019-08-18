#include <iostream>
#include <iomanip>
#include <string>

#include "Line_Codes.h"

using namespace std;
using namespace UNICODE_8;

int main()
{
	/*for (size_t i = 0; i < 256; i++) {
		cout << setw(4) << i
			<< (i % 2 == 0 ? ' ' : '\t')
			<< static_cast<char>(i) << '\n';
	}*/

	unsigned char lines[] = {
		LINES[L | R],
		LINES[D | R],
		LINES[D | L],
		LINES[D | L | R],
		LINES[U | R],
		LINES[U | L],
		LINES[U | L | R],
		LINES[U | D],
		LINES[U | D | R],
		LINES[U | D | L],
		LINES[U | D | L | R],
		LINES[DR | D | R],
		/*LINES[DR | ],
		LINES[DR | ],
		LINES[DL | ],
		LINES[DL | ],
		LINES[DL | ],
		LINES[DL | DR | ],
		LINES[DL | DR | ],
		LINES[DL | DR | ],
		LINES[DL | DR | ],
		LINES[],
		LINES[],
		LINES[],
		LINES[],
		LINES[],
		LINES[],
		LINES[],
		LINES[],
		LINES[],
		LINES[],
		LINES[],
		LINES[],
		LINES[],
		LINES[],
		LINES[],
		LINES[],
		LINES[],
		LINES[],*/
	};

	cout << setfill(' ');
	for (size_t i = 0; i < sizeof(lines); i++) {
		cout << setw(4) << static_cast<unsigned int>(lines[i]) << ' ' << lines[i] << '\n';
	}

	system("pause");
	return 0;
}