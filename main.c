#include "Rahaditya.h"

int main () {
	float angkaPertama = 0, angkaKedua = 0, hasilKalkulasi = 0;
	char operatorKalkulasi, ulang, hasilKalkulasiStr[100], inputMain;
	
	for (;;) {
		system("cls");
//		printf ("Masukkan angka yang pertama :");
//		scanf ("%g", &angkaPertama);
//		printf ("Masukkan angka yang kedua :");
//		scanf ("%g", &angkaKedua);
//		inputOperator (&operatorKalkulasi);
//		hasilKalkulasi = operasi (angkaPertama, angkaKedua, operatorKalkulasi);
//		printf ("%g \n", hasilKalkulasi);
		printf ("   CCCCCC      **     **         ******  **     ** **           **     **********   *******   *******  \n");
		printf ("  CC////CC    ****   /**        **////**/**    /**/**          ****   /////**///   **/////** /**////** \n");
		printf (" CC    //    **//**  /**       **    // /**    /**/**         **//**      /**     **     //**/**   /** \n");
		printf ("/CC         **  //** /**      /**       /**    /**/**        **  //**     /**    /**      /**/*******  \n");
		printf ("/CC        **********/**      /**       /**    /**/**       **********    /**    /**      /**/**///**  \n");
		printf ("//CC    CC/**//////**/**      //**    **/**    /**/**      /**//////**    /**    //**     ** /**  //** \n");
		printf (" //CCCCCC /**     /**/******** //****** //******* /********/**     /**    /**     //*******  /**   //**\n");
		printf ("  //////  //      // ////////   //////   ///////  //////// //      //     //       ///////   //     // \n");
		
		printf ("Pilihan yang tersedia\n");
		printf ("1. Kalkulator\n");
		printf ("2. Trigonometri\n");
		printf ("3. Faktorial\n");
		printf ("4. Matriks\n");
		printf ("5. Konversi\n");
		printf ("6. DLL\n");
		
		inputKarakter (&inputMain);
		switch (inputMain) {
			case '1':
				menuCanandra();
				break;
			case '2':
				printf ("Sinus (sin) Cosinus (cos) Tangen (tan) Cosecan (cosec) Secan (sec) Cotangen (cot)");
				break;
			case '3':
				printf ("Faktorial Kombinasi Permutasi");
				break;
			case '4':
				printf ("Matriks Invers Determinan");
				break;
			case '5':
				printf ("");
				break;
			case '6':
				printf ("Persen (%) ln Mutlak Eksponen Log");
				break;
			default:
				
				break;
		}
		
		printf("coba lagi? (y/t) ");
		inputKarakter (&ulang);
		if (ulang == 't' || ulang == 'T') {
			break;
		}
	}
	return 0;
}
