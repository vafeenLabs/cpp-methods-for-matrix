#include <iostream>
using std::cout;
void multiplicationm(float** a, float** b, int m1, int n1, int m2, int n2)
{
	if (n1 == m2)
	{
		cout << "Ðåçóëüòàò óìíîæåíèÿ âîò:\n\n";
		float** c = new float* [m1];
		for (int i = 0; i < m1; i += 1)
		{
			c[i] = new float[n2];
			for (int j = 0; j < n2; j += 1)
			{
				c[i][j] = 0;
				for (int x = 0; x < n1; x++)
				{
					c[i][j] += (a[i][x] * b[x][j]);
				}
				cout << c[i][j] << '\t';
			}
			cout << '\n';
		}

		for (int i = 0; i < m1; i++)
		{
			delete[] c[i];
		}
		delete[] c;
	}
	else {
		cout << "\n#ERROR: MULTIPLICATION IS IMPOSSIBLE! THE NUMBER OF COLUMNS OF THE FIRST MATRIX IS NOT EQUAL TO THE NUMBER OF ROWS OF THE SECOND MATRIX!\n#ÎØÈÁÊÀ: ÓÌÍÎÆÅÍÈÅ ÍÅÂÎÇÌÎÆÍÎ! ÊÎËÈ×ÅÑÒÂÎ ÑÒÎËÁÖÎÂ ÏÅÐÂÎÉ ÌÀÒÐÈÖÛ ÍÅ ÐÀÂÍÎ ÊÎËÈ×ÅÑÒÂÓ ÑÒÐÎÊ ÂÒÎÐÎÉ ÌÀÒÐÈÖÛ!\n\n";
	}
}