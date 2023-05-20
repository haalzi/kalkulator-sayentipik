
// faktor Konversi
#define KILOMETER 1000.0
#define HECTOMETER 100.0
#define DEKAMETER 10.0
#define METER 1.0
#define DesiMETER 0.1
#define SentiMETER 0.01
#define MILLIMETER 0.001

double pertambahan (double x, double y);

double perpangkatan (double x, double y);

double akar (double x, double y);

int modulus (int x, int y);

double persen (double x);

double kombinasi (double x, double y);


/* 							KONVERSI SUHU							*/
				
// celcius ke fahrenheit
double convertCelsiuskeFahrenheit(double celsius);

// fahrenheit ke celcius
double convertFahrenheitkeCelsius(double fahrenheit);

// celcius ke reamur
double convertCelsiuskeReamur(double celsius);

// reamur ke celcius
double convertReamurkeCelsius(double reamur);

// celcius ke kelvin
double convertCelsiuskeKelvin(double celsius);

// kelvin ke celcius
double convertKelvinkeCelsius(double kelvin);

// fahrenheit ke kelvin
double convertFahrenheitkeKelvin(double fahrenheit);

// kelvin ke fahrenheit
double convertKelvinkeFahrenheit(double kelvin);

// reamur ke kelvin
double convertReamurkeKelvin(double reamur);

// kelvin ke reamur
double convertKelvinkeReamur(double kelvin);

/* 							KONVERSI PANJANG							*/

// convert panjang
double ConvertPanjang(double Panjang, double fromFactor, double toFactor);

void printMatrix(double **matrix, int rows, int columns);

double **transposeMatrix(double **matrix, int rows, int columns);
