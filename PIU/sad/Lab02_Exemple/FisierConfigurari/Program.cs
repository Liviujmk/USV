using System;
using System.Configuration;

namespace FisierConfigurari
{
    class Program
    {
        static void Main()
        {
            //	Utilizare valoare din fisierul de configurari (App.config)

            string titlu = ConfigurationManager.AppSettings.Get("TitluAplicatie");
            Console.WriteLine(titlu);

            Console.ReadKey();
        }
    }
}
