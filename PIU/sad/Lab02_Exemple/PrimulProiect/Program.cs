using System;

namespace PrimulProiect
{
    //	Suma/diferenta a doua numere preluate de la tastatura
    class Program
    {
        static void Main()
        {
            int numar1 = 0;
            int numar2 = 0;

            Console.Write("Introduceti primul numar: ");
			//	Preluarea numarului de la tastatura ca un sir de caractere
			string sN1 = Console.ReadLine();
			//	Conversia sirului de caractere la tipul 'integer'
            Int32.TryParse(sN1, out numar1);

            Console.Write("Introduceti al doilea numar: ");
			string sN2 = Console.ReadLine();
            Int32.TryParse(sN2, out numar2);

			string operatie = string.Empty;
			int rezultat;

            if (numar1 < numar2)
            {
                rezultat = numar1 + numar2;
                operatie = "Suma";
            }
            else
            {
                rezultat = numar1 - numar2;
                operatie = "Diferenta";
            }

			Console.WriteLine($"{operatie} este: {rezultat}");

            //	Citirea unui caracter de la tastatura (echivalentul functiei getch() din C)
            Console.ReadKey();
        }
    }
}
