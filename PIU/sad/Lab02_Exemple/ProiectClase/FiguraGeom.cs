namespace ProiectClase
{
    // Clasa FiguraGeom 
    public class FiguraGeom
    {
        string denumire;
        string denumireLaturi;
        int nrLaturi;

        // Constructor fara parametri
        public FiguraGeom()
        {
            denumire = string.Empty;
            denumireLaturi = string.Empty;
            nrLaturi = 0;
        }

        // Constructor cu parametri
        public FiguraGeom(string _denumire, int _nrLaturi)
        {
            denumire = _denumire;
            nrLaturi = _nrLaturi;
        }

        // Metoda care returneaza informatiile despre figura geometrica 
        // sub forma unui sir de caractere
        public string Info()
        {
            //Tema 3 - Daca denumirea nu are niciun caracter -> mesaj: "FIGURA NESETATA"
            if (string.IsNullOrEmpty(denumire))
            {
                return "FIGURA NESETATA";
            }
            else
            {
                return $"Denumire: {denumire}, NrLaturi: {nrLaturi}";
            }
        }

        // tema 4 - noua metoda TipFigura
        public string TipFigura()
        {
            switch(nrLaturi)
            {
                case 1:
                    denumireLaturi = "DREAPTA";
                break;
                case 2:
                    denumireLaturi = "DREAPTA";
                break;
                    case 3:
                    denumireLaturi = "TRIUNGHI";
                    break;
                    case 4:
                    denumireLaturi = "PATRAT";
                    break;


            }
        }
    }
}
