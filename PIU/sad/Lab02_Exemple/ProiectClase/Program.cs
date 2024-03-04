using System;

namespace ProiectClase
{
    class Program
    {
        static void Main()
        {
            //	Instantierea unui obiect de tip FiguraGeom utilizand constructorul fara parametri
            //	Tipul variabilei f este 'var' (determinat de compilator)
            var f = new FiguraGeom();
            string s = f.Info();
            Console.WriteLine(s);

            //	Instantierea unui obiect de tip FiguraGeom utilizand constructorul cu parametri
            //	Tipul variabilei f1 este explicit 'FiguraGeom'
            FiguraGeom f1 = new FiguraGeom("patrat", 4);
            string s1 = f1.Info();
            Console.WriteLine(s1);

            Console.ReadKey();
        }
    }
}
