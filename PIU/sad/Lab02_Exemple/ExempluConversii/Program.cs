using System;

namespace ExempluConversii
{
    class Program
    {
        static void Main(string[] args)
        {
            double d1, d2;
            byte b;
            int i;
            char ch;
            uint u;
            short s;
            long l;

            d1 = 10.5;
            d2 = 3.0;

            // conversie double -> int (cu pierdere de date)
            i = (int)(d1 / d2);
            Console.WriteLine($"d1 = {d1}");
            Console.WriteLine($"d2 = {d2}");
            Console.WriteLine($"int ( d1 / d2 ): {i}");
            Console.WriteLine();

            // conversie int->byte (fara pierdere de date)
            i = 255;
            b = (byte)i;
            Console.WriteLine($"b =(byte)255 : {b} -- fara pierdere de date.");

            // conversie int->byte (cu pierdere de date)
            i = 257;
            b = (byte)i;
            Console.WriteLine($"b= (byte)257 : {b} -- cu pierdere de date.");
            Console.WriteLine();

            // conversie uint -> short (fara pierdere de date)
            u = 32000;
            s = (short)u;
            Console.WriteLine($"s= (short)32000: {s} -- fara pierdere de date.");

            // conversie uint -> short (cu pierdere de date)
            u = 64000;
            s = (short)u;
            Console.WriteLine($"s= (short)64000: {s} -- cu pierdere de date.");
            Console.WriteLine();

            // conversie long -> uint (fara pierdere de date)
            l = 64000;
            u = (uint)l;
            Console.WriteLine($"u= (uint)64000: {u} -- fara pierdere de date.");

            // conversie long -> uint (cu pierdere de date)
            l = -12;
            u = (uint)l;
            Console.WriteLine($"u= (uint)-12: {u} -- cu pierdere de date.");
            Console.WriteLine();

            // conversie byte -> char
            b = 88;
            ch = (char)b;
            Console.WriteLine($"ch= (char)88 : {ch}");
            Console.WriteLine();

            /*** conversii utilizand clasa Convert   ***/

            //conversie char -> int
            ch = 'a';
			i = Convert.ToInt32(ch);
			Console.WriteLine($"i= (int)'a' : {i}");

			string str = "123";
			i = Convert.ToInt32(str);
			Console.WriteLine($"i= (int)\"123\" : {i}");

            //tema 1 - completare conversie string -> int
            Console.WriteLine("\n---- Tema 1 ----");
            string t11 = "123";
            i = Convert.ToInt32(t11);
            Console.WriteLine($"i= (int){t11} : {i}");
            string t12 = "456";
            i = Convert.ToInt32(t12);
            Console.WriteLine($"i= (int){t12} : {i}");
            string t13 = "789";
            i = Convert.ToInt32(t13);
            Console.WriteLine($"i= (int){t13} : {i}");

            Console.ReadKey();
        }
    }
}
