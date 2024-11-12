void transpon(float**& mas, int& m, int& n)
{
	float** a = new float* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new float[m];

		for (int j = 0; j < m; j++)
		{
			a[i][j] = mas[j][i];
		}
	}

	for (int i = 0; i < m; i++) {
		delete[] mas[i];
	}
	delete[] mas;
	mas = new float* [n];
	for (int i = 0; i < n; i++)
	{
		mas[i] = new float[m];
		for (int j = 0; j < m; j++)
		{
			mas[i][j] = a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		delete[] a[i];
	}
	delete[]a;
	int x = m;
	m = n;
	n = x;
}