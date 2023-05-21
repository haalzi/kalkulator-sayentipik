#include "Canandra.h"
#include "Rahaditya.h"


double perkalian (double x, double y) {
	return x * y;
}
// IS :   - Fungsi perkalian didefinisikan dengan tipe pengembalian double dan dua parameter x dan y dengan tipe double.//
		//- Fungsi ini belum dieksekus//
		
// FS :   - Fungsi perkalian berhasil didefinisikan.
       // - Fungsi ini siap digunakan dan akan mengembalikan hasil perkalian dari x dan y dengan tipe double ketika dipanggil.//
       
// Referensi : www.

// Pembuat : Canandra Eka Mukti

double sinus (double x) {
	x = (x * phi / 180.0);
    x = sin (x);
	return x;
}
// IS :	 -  Fungsi sinus didefinisikan dengan tipe pengembalian double dan satu parameter x dengan tipe double.//
	  // -  Fungsi ini belum dieksekusi.//
	  
// FS :	 - Fungsi sinus berhasil didefinisikan.
	  // - Fungsi ini siap digunakan dan akan mengembalikan nilai sinus dari x yang dikonversi menjadi radian menggunakan konstanta 
	  //   phi ketika dipanggil.//
	  
// Referensi	:www.

// Pembuat		: Canandra Eka Mukti

double cosecan (double x) {
	x = (x * phi / 180.0);
    x = 1 / sin (x);
	return x;
}
// IS :  - Fungsi cosecan didefinisikan dengan tipe pengembalian double dan satu parameter x dengan tipe double.//
      // - Fungsi ini belum dieksekusi.//
      
// FS :  - Fungsi cosecan berhasil didefinisikan.
     //  - Fungsi ini siap digunakan dan akan mengembalikan nilai cosecan dari x yang dikonversi menjadi radian menggunakan konstanta 
	 //	   phi ketika dipanggil.//
	 
// Referensi	: www.
// Pembuat 		: Canandra Eka Mukti

double logbase10 (double x) {
	return log (x) / 2.30258509299404568402;
}
// IS :  - Fungsi logbase10 didefinisikan dengan tipe pengembalian double dan satu parameter x dengan tipe double.//
	 //  - Fungsi ini belum dieksekusi.//
	 
// FS :  - Fungsi logbase10 berhasil didefinisikan.//
	 //	 - Fungsi ini siap digunakan dan akan mengembalikan logaritma basis 10 dari x ketika dipanggil.//
	 
// Referensi	: www.
// Pembuat 		: Canandra Eka Mukti

double LN (double x) {
    double old_sum = 0.0;
    double xmlxpl = (x - 1) / (x + 1);
    double xmlxpl_2 = xmlxpl * xmlxpl;
    double denom = 1.0;
    double frac = xmlxpl;
    double term = frac;
    double sum = term;

    while ( sum != old_sum ) {
        old_sum = sum;
        denom += 2.0;
        frac *= xmlxpl_2;
        sum += frac / denom;
    }
    return 2.0 * sum;
}
// IS :   - Fungsi LN didefinisikan dengan tipe pengembalian double dan satu parameter x dengan tipe double.//
	 //	  - Fungsi ini belum dieksekusi.//
	 
// FS :   - Fungsi LN berhasil didefinisikan.//
	 //	  - Fungsi ini siap digunakan dan akan mengembalikan nilai logaritma natural dari x ketika dipanggil.//

// Referensi	: www. 
// Pembuat 		: Canandra Eka Mukti

double diskriminan (double x, double y, double z) {
	double Diskriminan, akar1, akar2, real, imajiner;
	
	Diskriminan = x*x - 4 * y * z;
	if (Diskriminan == 0) {
		akar1 = akar2 = -x/(2*y);
		tampilanStruktur (2);
		printf("akar1 = akar2 = %.2lf\n", akar1);
	}
	else if(Diskriminan > 0) {
		akar1 = (-x + sqrt(Diskriminan))/(2*y);
		akar2 = (-x - sqrt(Diskriminan))/(2*y);
		tampilanStruktur (2);
		printf("akar 1 = %.2lf dan akar 2 = %.lf\n", akar1, akar2);
	}
	else {
		real = -x/(2*y);
		imajiner = sqrt(-Diskriminan)/(2*z);
		tampilanStruktur (3);
		printf("akar 1 = %.2lf + %.2lfi dan akar 2 = %.2f-%.2fi\n", real, imajiner, real, imajiner);
	}
	
}
// IS :	  - Fungsi diskriminan didefinisikan dengan tipe pengembalian double dan tiga parameter x, y, dan z, semuanya memiliki tipe double.
	 //	  - Variabel lokal Diskriminan, akar1, akar2, real, dan imajiner dideklarasikan.//
	 //   - Fungsi ini belum dieksekusi.//
	 
// FS :   - Fungsi diskriminan berhasil didefinisikan.//
     //   - Fungsi ini siap digunakan untuk menghitung dan menampilkan akar-akar persamaan kuadrat berdasarkan diskriminannya ketika dipanggil.//

// Referensi		: www.
// Pembuat 			: Canandra Eka Mukti

double faktorialPermutasi(double x) {
	if (x==0 || x==1){
		return 1;
	}
	else{
		return x * faktorialPermutasi(x-1);
	}
}
// IS :   - Fungsi faktorialPermutasi didefinisikan dengan tipe pengembalian double dan satu parameter x dengan tipe double.//
	 //   - Fungsi ini belum dieksekusi.//
	 
// FS :   - Fungsi faktorialPermutasi berhasil didefinisikan.//
     //   - Fungsi ini siap digunakan untuk menghitung faktorial permutasi dari x ketika dipanggil.//

// Referensi 	: www.
// Pembuat 		: Canandra Eka Mukti

double permutasi(double x, double y) {
	return faktorialPermutasi(x)/faktorialPermutasi(x-y);
}
// IS  :  - Fungsi permutasi didefinisikan dengan tipe pengembalian double dan dua parameter x dan y, keduanya memiliki tipe double.//
     //   - Fungsi ini menggunakan fungsi faktorialPermutasi yang sudah didefinisikan sebelumnya.//
     //   - Fungsi ini belum dieksekusi.//
     
// FS  :  - Fungsi permutasi berhasil didefinisikan.//
	 //   - Fungsi ini siap digunakan dan akan mengembalikan hasil permutasi dari x elemen dengan y elemen yang diambil tanpa pengembalian ketika dipanggil.//
		
// Referensi	: www.
// Pembuat		: Canandra Eka Mukti

double lingkaran(double x) {
	return phi*x*x;tv
}
// IS :   - Fungsi lingkaran didefinisikan dengan tipe pengembalian double dan satu parameter x dengan tipe double.//
     //   - Fungsi ini belum dieksekusi.//
    
// FS :   - Fungsi lingkaran berhasil didefinisikan.//
     //Fungsi ini siap digunakan dan akan mengembalikan luas lingkaran dengan jari-jari x ketika dipanggil.//

// Referensi	: www.
// Pembuat 		: Canandra Eka Mukti

double calculate_factorial(int n) {
    double factorial = 1;
    for (int i = 2; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}
// IS :   - Variabel n dengan nilai yang akan digunakan sebagai input untuk menghitung faktorial.//
	 //   - Variabel factorial dengan nilai awal 1.//
	 
// FS :   - Variabel factorial dengan nilai hasil perhitungan faktorial dari n.//
	 //   - n memiliki nilai yang ditentukan.//
     //   - Factorial memiliki nilai yang sesuai dengan hasil faktorial dari n.//

// Referensi	: www.
// Pembuat		: Canandra Eka Mukti	

double calculate_sine(double x, int terms) {
    x = x * 3.14159 / 180;  // Mengubah derajat ke radian//
    double sine = x;
    double sign = -1;
    for (int i = 1; i < terms; ++i) {
        double next_term = sign * (x * x * x) / calculate_factorial(2 * i + 1);
        sine += next_term;
        sign *= -1;
    }
    return sine;
}

// IS :    - Variabel x dengan nilai sudut yang akan digunakan sebagai input untuk menghitung sinus.//
     //    - Variabel terms dengan nilai yang menentukan berapa banyak suku yang akan digunakan dalam perhitungan deret Taylor.//
     //    - Variabel sine dengan nilai awal x.//
     //    - Variabel sign dengan nilai awal -1.//

// FS :    - Variabel sine dengan nilai hasil perhitungan sinus dari x.//

// Referensi	: www.

// Pembuat 		: Canandra Eka Mukti

